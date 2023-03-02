// BlueprintGeneratedClass BP_WoodenShelfC.BP_WoodenShelfC_C
// Size: 0x368 (Inherited: 0x357)
struct ABP_WoodenShelfC_C : ANone {
	char pad_357[0x1]; // 0x357(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x360(0x08)

	bool DecreaseFire(float decreaseAmount); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FireStarted(); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.FireStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WoodenShelfC(int32_t EntryPoint); // Function BP_WoodenShelfC.BP_WoodenShelfC_C.ExecuteUbergraph_BP_WoodenShelfC // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

