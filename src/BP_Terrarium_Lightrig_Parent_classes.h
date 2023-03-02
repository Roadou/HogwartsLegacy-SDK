// BlueprintGeneratedClass BP_Terrarium_Lightrig_Parent.BP_Terrarium_Lightrig_Parent_C
// Size: 0x25c (Inherited: 0x248)
struct ABP_Terrarium_Lightrig_Parent_C : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float LightIntensityMultiplier; // 0x250(0x04)
	float InitialSpotlightIntensity; // 0x254(0x04)
	float InitialPointlightIntensity; // 0x258(0x04)

	void MultiplyLightIntensity(struct USpotLightComponent* Spotlight component, struct UPointLightComponent* Pointlight Component ); // Function BP_Terrarium_Lightrig_Parent.BP_Terrarium_Lightrig_Parent_C.MultiplyLightIntensity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

