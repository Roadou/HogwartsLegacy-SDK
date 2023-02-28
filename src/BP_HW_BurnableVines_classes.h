// BlueprintGeneratedClass BP_HW_BurnableVines.BP_HW_BurnableVines_C
// Size: 0x2d0 (Inherited: 0x2b0)
struct ABP_HW_BurnableVines_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UAkComponent* Ak_BP_HW_BurnableVines; // 0x2b8(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2c8(0x08)

	bool DecreaseFire(float decreaseAmount); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_BurnableVines(int32_t EntryPoint); // Function BP_HW_BurnableVines.BP_HW_BurnableVines_C.ExecuteUbergraph_BP_HW_BurnableVines // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

