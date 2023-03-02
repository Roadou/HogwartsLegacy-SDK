// BlueprintGeneratedClass BP_FF_Spotlight_Manager.BP_FF_Spotlight_Manager_C
// Size: 0x2dd (Inherited: 0x248)
struct ABP_FF_Spotlight_Manager_C : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct FName Forest Spotlight Tag; // 0x250(0x08)
	struct FDayNightLightSkyAtmosphereComputeParams Day night atmosphere light params; // 0x258(0x78)
	struct UCurveFloat* Intensity Mod (By Sun Angle); // 0x2d0(0x08)
	float Spotlight base intensity; // 0x2d8(0x04)
	bool rerun construction script; // 0x2dc(0x01)

	void Set day night controller params(struct UDayNightAtmosphereLightControllerComponent* day night controller component, struct FDayNightLightSkyAtmosphereComputeParams Sky Params); // Function BP_FF_Spotlight_Manager.BP_FF_Spotlight_Manager_C.Set day night controller params // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FF_Spotlight_Manager.BP_FF_Spotlight_Manager_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

