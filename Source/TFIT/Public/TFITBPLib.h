#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "FGFoliageIdentifier.h"
#include "ItemAmount.h"
#include "FGRecipe.h"
#include "FGFoliageResourceUserData.h"
#include "FGResourceSinkSubsystem.h"
#include "FGRailroadVehicle.h"
#include "Creature/FGCreature.h"
#include "Creature/Enemy/FGCrabHatcher.h"
#include "FGInventoryComponent.h"
#include "FGItemPickup.h"
#include "FGBuildablePipelineFlowIndicator.h"

#include "TFITBPLib.generated.h"


UCLASS()
class TFIT_API UTFITBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "TFIT|Foliage")
		static UFGFoliageResourceUserData* TFIT_GetStaticMesh_FoliageResourceUserData(UStaticMesh* inMesh);

	UFUNCTION(BlueprintCallable, Category = "TFIT|Foliage")
		static const TArray<FItemDropWithChance>& TFIT_GetAssetUserData_Drops(UFGFoliageResourceUserData* inData);

	UFUNCTION(BlueprintCallable, Category = "TFIT|Foliage")
		static bool TFIT_HasFoliageIdentifier(UFGFoliageResourceUserData* inData, TSubclassOf< class UFGFoliageIdentifier > identifier);

	UFUNCTION(BlueprintCallable, Category = "TFIT|Foliage")
		static void TFIT_GetItemDropWithChanceData(FItemDropWithChance inData, float& out_DropChance, TSubclassOf<class UFGItemDescriptor>& out_ItemClass, int32& out_Min, int32& out_Max);

	UFUNCTION(BlueprintCallable, Category = "TFIT")
		static bool TFIT_GetCppRailroadVehicleData(AFGRailroadVehicle* inVehicle, bool& out_Docked, bool& out_Derailed, UFGPowerConnectionComponent*& out_PowerConnection);
	
	// Done in C++ to avoid spamming logs with CDO access
	UFUNCTION(BlueprintCallable, Category = "TFIT")
		static AFGItemPickup* TFIT_GetPickupCDO(TSubclassOf<AFGItemPickup> pickupClass);

	UFUNCTION(BlueprintCallable, Category = "TFIT")
		static bool TFIT_GetCreatureDrop(AFGCreature* inCreature, FInventoryStack& out_ItemStack);

	UFUNCTION(BlueprintCallable, Category = "TFIT")
		static void TFIT_WriteStringToFile(FString Path, FString resultString, bool Relative);

	UFUNCTION(BlueprintCallable)
		static TSubclassOf<UFGItemDescriptor> TFIT_PipelineIndicatorCachedFluid(AFGBuildablePipelineFlowIndicator* inActor);

	// Returns true if the object has a property of the given name of any type
	UFUNCTION(BlueprintCallable, Category = "Reflection|TFIT")
		static bool TFIT_HasProperty(FName propertyName, UObject* onObject);

	// Returns true if the object has a function of the given name with any signature
	UFUNCTION(BlueprintCallable, Category = "Reflection|TFIT")
		static bool TFIT_HasFunction(FName functionName, UObject* onObject);
};
