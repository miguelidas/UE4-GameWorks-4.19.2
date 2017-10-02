#pragma once
#include "Particles/ParticleEmitter.h"
#include "FlexAsset.h"
#include "FlexParticleEmitter.generated.h"


UCLASS(hidecategories=Object, editinlinenew, abstract, MinimalAPI)
class UFlexParticleEmitter : public UParticleEmitter
{
	GENERATED_UCLASS_BODY()

	/** The Flex container to emit into */
	UPROPERTY(EditAnywhere, Category = Flex)
	class UFlexContainer* FlexContainerTemplate;

	/** Phase assigned to spawned Flex particles */
	UPROPERTY(EditAnywhere, Category = Flex)
	FFlexPhase Phase;

	/** Enable local-space simulation when parented */
	UPROPERTY(EditAnywhere, Category = Flex)
	uint32 bLocalSpace : 1;

	/** Control Local Inertial components */
	UPROPERTY(EditAnywhere, Category = Flex)
	FFlexInertialScale InertialScale;

	/** Mass assigned to Flex particles */
	UPROPERTY(EditAnywhere, Category = Flex)
	float Mass;

	/** Optional Flex fluid surface for rendering */
	UPROPERTY(EditAnywhere, Category = Flex)
	class UFlexFluidSurface* FlexFluidSurfaceTemplate;
};

FORCEINLINE UFlexParticleEmitter::UFlexParticleEmitter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Mass = 1.0f;
	bLocalSpace = false;
}
