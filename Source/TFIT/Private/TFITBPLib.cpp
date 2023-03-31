#include "TFITBPLib.h"
#include "TFIT.h"
#include "FGFoliageResourceUserData.h"
#include "FGResourceSinkSubsystem.h"

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
