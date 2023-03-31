#include "Kismet/BlueprintFunctionLibrary.h"

#include "FGFoliageIdentifier.h"
#include "ItemAmount.h"
#include "FGRecipe.h"
#include "FGFoliageResourceUserData.h"
#include "FGResourceSinkSubsystem.h"

#include "TFITBPLib.generated.h"


UCLASS()
class TFIT_API UTFITBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	friend class UFGFoliageResourceUserData;
	friend class AFGResourceSinkSubsystem;

	UFUNCTION(BlueprintCallable)
		static UFGFoliageResourceUserData* TFIT_GetStaticMesh_FoliageResourceUserData(UStaticMesh* inMesh);

	UFUNCTION(BlueprintCallable)
		static const TArray<FItemDropWithChance>& TFIT_GetAssetUserData_Drops(UFGFoliageResourceUserData* inData);

	UFUNCTION(BlueprintCallable)
		static bool TFIT_HasFoliageIdentifier(UFGFoliageResourceUserData* inData, TSubclassOf< class UFGFoliageIdentifier > identifier);

	UFUNCTION(BlueprintCallable)
		static void TFIT_GetItemDropWithChanceData(FItemDropWithChance inData, float& out_DropChance, TSubclassOf<class UFGItemDescriptor>& out_ItemClass, int32& out_Min, int32& out_Max);

	UFUNCTION(BlueprintCallable)
		static bool TFIT_GetSinkPointsForItem(AFGResourceSinkSubsystem* subsystem, TSubclassOf<class UFGItemDescriptor> descriptor, int32& out_points, EResourceSinkTrack& out_trackType);
};
