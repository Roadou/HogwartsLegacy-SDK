// BlueprintGeneratedClass BP_HM_Braizer_C.BP_HM_Braizer_C_C
// Size: 0xb18 (Inherited: 0xaec)
struct ABP_HM_Braizer_C_C : ABP_LightFixture_Master_C {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UStaticMeshComponent* Embers; // 0xaf8(0x08)
	struct UNiagaraComponent* Niagara; // 0xb00(0x08)
	struct UNiagaraComponent* NS_3; // 0xb08(0x08)
	struct UParticleSystemComponent* Protego; // 0xb10(0x08)

	bool DecreaseFire(float decreaseAmount); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseWetness(struct AActor* Instigator, float increaseAmount, struct FVector Location); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.IncreaseWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartWetness(struct AActor* Instigator, float Amount, struct FVector Location); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.StartWetness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToApplyWetness(float Amount, struct FVector Location); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.OnAttemptToApplyWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDecreaseWetness(float decreaseAmount); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.OnDecreaseWetness // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnDry(struct AActor* Instigator); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.OnDry // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToWet(); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.OnFailedToWet // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_Braizer_C(int32_t EntryPoint); // Function BP_HM_Braizer_C.BP_HM_Braizer_C_C.ExecuteUbergraph_BP_HM_Braizer_C // (Final|UbergraphFunction) // @ game+0x38a7480
};

