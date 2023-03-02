// BlueprintGeneratedClass BP_WoodenShelfA.BP_WoodenShelfA_C
// Size: 0x3f8 (Inherited: 0x357)
struct ABP_WoodenShelfA_C : ABP_Breakable_Persistent_C {
	char pad_357[0x1]; // 0x357(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UOdcAuthoredObstacleSetupComponent* OdcAuthoredObstacleSetup; // 0x360(0x08)
	struct UAkComponent* Ak_BP_WoodenShelfA; // 0x368(0x08)
	struct FHitResult NewVar_1; // 0x370(0x88)

	bool DecreaseFire(float decreaseAmount); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void FireStarted(); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.FireStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WoodenShelfA(int32_t EntryPoint); // Function BP_WoodenShelfA.BP_WoodenShelfA_C.ExecuteUbergraph_BP_WoodenShelfA // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

