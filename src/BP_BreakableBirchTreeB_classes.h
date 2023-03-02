// BlueprintGeneratedClass BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C
// Size: 0x3f8 (Inherited: 0x360)
struct ABP_BreakableBirchTreeB_C : ABP_ResourceTree_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x368(0x08)
	struct FHitResult Hit Result_1; // 0x370(0x88)

	bool DecreaseFire(float decreaseAmount); // Function BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BreakableBirchTreeB(int32_t EntryPoint); // Function BP_BreakableBirchTreeB.BP_BreakableBirchTreeB_C.ExecuteUbergraph_BP_BreakableBirchTreeB // (Final|UbergraphFunction) // @ game+0x38a7480
};

