#include "TFITBPLib.h"
#include "TFIT.h"
#include "FGFoliageResourceUserData.h"
#include "FGResourceSinkSubsystem.h"
#include "FGRailroadVehicle.h"
#include "Creature/FGCreature.h"
#include "FGInventoryComponent.h"
#include "FGItemPickup.h"


UFGFoliageResourceUserData* UTFITBPLib::TFIT_GetStaticMesh_FoliageResourceUserData(UStaticMesh* inMesh) {
	auto AssetUserData = inMesh->GetAssetUserDataOfClass(UFGFoliageResourceUserData::StaticClass());
	return Cast<UFGFoliageResourceUserData>(AssetUserData);
}

const TArray<FItemDropWithChance>& UTFITBPLib::TFIT_GetAssetUserData_Drops(UFGFoliageResourceUserData* inData) {
	return inData->GetPickupItems();
}

bool UTFITBPLib::TFIT_HasFoliageIdentifier(UFGFoliageResourceUserData* inData, TSubclassOf< class UFGFoliageIdentifier > identifier) {
	return inData->IdentifiesWith(identifier);
}

void UTFITBPLib::TFIT_GetItemDropWithChanceData(FItemDropWithChance inData, float& out_DropChance, TSubclassOf<class UFGItemDescriptor>& out_ItemClass, int32& out_Min, int32& out_Max) {
	auto ItemDrop = inData.Drop;
	out_DropChance = inData.DropChance;
	out_ItemClass = ItemDrop.ItemClass;
	out_Max = ItemDrop.NumItems.Max;
	out_Min = ItemDrop.NumItems.Min;
}

bool UTFITBPLib::TFIT_GetSinkPointsForItem(AFGResourceSinkSubsystem* subsystem, TSubclassOf<class UFGItemDescriptor> descriptor, int32& out_points, EResourceSinkTrack& out_trackType)
{
	if (!subsystem) {
		return false;
	}
	auto entry = subsystem->mCachedResourceSinkPoints.Find(descriptor);
	if (entry == nullptr) {
		return false;
	}
	out_trackType = entry->TrackType;
	out_points = entry->Value;
	return true;
}

bool UTFITBPLib::TFIT_GetCppRailroadVehicleData(AFGRailroadVehicle* inVehicle, bool& out_Docked, bool& out_Derailed, UFGPowerConnectionComponent*& out_PowerConnection)
{
	if (!inVehicle) {
		return false;
	}
	out_Docked = inVehicle->IsDocked();
	out_Derailed = inVehicle->IsDerailed();
	out_PowerConnection = inVehicle->GetSlidingShoe();
	return true;
}

bool UTFITBPLib::TFIT_GetCreatureDrop(AFGCreature* inCreature, FInventoryStack& out_ItemStack)
{
	if (!inCreature) {
		return false;
	}
	auto pickup = inCreature->mItemToDrop;
	if (!pickup) {
		return false;
	}
	auto cdo = pickup.GetDefaultObject();
	if (!cdo) {
		return false;
	}
	out_ItemStack = cdo->GetPickupItems();
	return true;
}

void UTFITBPLib::TFIT_WriteStringToFile(FString Path, FString resultString, bool Relative) {
	// Adapted from ContentLib
#if WITH_EDITOR 
	FFileHelper::SaveStringToFile(resultString, Relative ? *(FPaths::ProjectDir() + Path) : *Path);
#else
	const FString AbsoluteRootPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir());
	const FString AbsolutePath = AbsoluteRootPath + TEXT("Mods/") + Path;
	if (!AbsolutePath.Contains(TEXT(".."))) {
		FFileHelper::SaveStringToFile(resultString, *AbsolutePath);
	}
	else {
		UE_LOG(LogTFIT, Error, TEXT("Absolute or escaping Paths are not allowed in Runtime"));
	}
#endif
}