#include "TFITBPLib.h"
#include "TFIT.h"
#include "FGFoliageResourceUserData.h"
#include "FGResourceSinkSubsystem.h"
#include "FGRailroadVehicle.h"
#include "Creature/FGCreature.h"
#include "FGInventoryComponent.h"
#include "FGItemPickup.h"
#include "FGBuildablePipelineFlowIndicator.h"


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

AFGItemPickup* UTFITBPLib::TFIT_GetPickupCDO(TSubclassOf<AFGItemPickup> pickupClass) {
	if (pickupClass) {
		return pickupClass.GetDefaultObject();
	}
	return nullptr;
}

bool UTFITBPLib::TFIT_GetCreatureDrop(AFGCreature* inCreature, FInventoryStack& out_ItemStack)
{
	if (!inCreature) {
		return false;
	}
	auto cdo = TFIT_GetPickupCDO(inCreature->mItemToDrop);
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
		UE_LOG(LogTFITCpp, Error, TEXT("Absolute or escaping Paths are not allowed in Runtime"));
	}
#endif
}

TSubclassOf<UFGItemDescriptor> UTFITBPLib::TFIT_PipelineIndicatorCachedFluid(AFGBuildablePipelineFlowIndicator* inActor)
{
	if (!inActor) {
		return TSubclassOf<UFGItemDescriptor>();
	}
	return inActor->mFluidDescriptor;
}

bool UTFITBPLib::TFIT_HasProperty(FName propertyName, UObject* onObject) {
	if (!onObject) {
		UE_LOG(LogTFITCpp, Error, TEXT("Passed onObject is invalid"));
		return false;
	}
	if (propertyName.IsNone()) {
		UE_LOG(LogTFITCpp, Error, TEXT("Passed propertyName is invalid"));
		return false;
	}
	return onObject->GetClass()->FindPropertyByName(propertyName)->IsValidLowLevel();
}

bool UTFITBPLib::TFIT_HasFunction(FName functionName, UObject* onObject) {
	if (!onObject) {
		UE_LOG(LogTFITCpp, Error, TEXT("Passed onObject is invalid"));
		return false;
	}
	if (functionName.IsNone()) {
		UE_LOG(LogTFITCpp, Error, TEXT("Passed functionName is invalid"));
		return false;
	}
	return onObject->GetClass()->FindFunctionByName(functionName)->IsValidLowLevelFast();
}
