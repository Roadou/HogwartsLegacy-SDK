// BlueprintGeneratedClass BP_ProxyContainerActor.BP_ProxyContainerActor_C
// Size: 0x2c8 (Inherited: 0x2b0)
struct ABP_ProxyContainerActor_C : ALODProxyContainer {
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	enum class E_ProxyVaultType VaultType; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	struct FVector LandscapeMeshLocation; // 0x2bc(0x0c)

	void GetLocation(int32_t Index, struct FVector& Output_Position, float& Output_Yaw); // Function BP_ProxyContainerActor.BP_ProxyContainerActor_C.GetLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void CheckSeasonMaterialsValid(bool& AllValid); // Function BP_ProxyContainerActor.BP_ProxyContainerActor_C.CheckSeasonMaterialsValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_ProxyContainerActor.BP_ProxyContainerActor_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

