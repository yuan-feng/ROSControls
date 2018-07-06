// Copyright 2018 RealSynth GmbH

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "WheeledVehicleController.generated.h"

/**
 * 
 */
UCLASS()
class ROSCONTROLS_API AWheeledVehicleController : public APlayerController
{
	GENERATED_BODY()
	
  /// @}
  // ===========================================================================
  /// @name APlayerController overrides
  // ===========================================================================
  /// @{
public:

  virtual void Possess(APawn *aPawn) override;

  void Tick(const float DeltaTime);
	
private:

    /** vehicle simulation component */
    UPROPERTY(Category = Vehicle, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    class UWheeledVehicleMovementComponent* VehicleMovement;

    UPROPERTY(EditAnywhere)
    float RawThrottleInput;
    UPROPERTY(EditAnywhere)
    float RawSteeringInput;
    UPROPERTY(EditAnywhere)
    float RawHandbrakeInput;
};
