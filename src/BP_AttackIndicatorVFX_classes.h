// BlueprintGeneratedClass BP_AttackIndicatorVFX.BP_AttackIndicatorVFX_C
// Size: 0x2c8 (Inherited: 0x2a8)
struct ABP_AttackIndicatorVFX_C : APlayer_AttackIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	struct UNiagaraComponent* Niagara Component; // 0x2b8(0x08)
	struct AActor* AttackingEnemy; // 0x2c0(0x08)

	void ReceivePerfectParry(struct FMultiFX2Handle InParraybleFX2Handle, struct FMultiFX2Handle InPerfectParryFX2Handle); // Function BP_AttackIndicatorVFX.BP_AttackIndicatorVFX_C.ReceivePerfectParry // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveIndicatorStart(bool bIsParryIndicator, bool bIsUnblockableIndicator, struct FMultiFX2Handle InFX2Handle, float InEstimatedTime); // Function BP_AttackIndicatorVFX.BP_AttackIndicatorVFX_C.ReceiveIndicatorStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveIndicatorStop(bool bIsParryIndicator, bool bIsUnblockableIndicator, struct FMultiFX2Handle InFX2Handle); // Function BP_AttackIndicatorVFX.BP_AttackIndicatorVFX_C.ReceiveIndicatorStop // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AttackIndicatorVFX(int32_t EntryPoint); // Function BP_AttackIndicatorVFX.BP_AttackIndicatorVFX_C.ExecuteUbergraph_BP_AttackIndicatorVFX // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

