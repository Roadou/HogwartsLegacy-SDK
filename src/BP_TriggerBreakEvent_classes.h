// BlueprintGeneratedClass BP_TriggerBreakEvent.BP_TriggerBreakEvent_C
// Size: 0x378 (Inherited: 0x248)
struct ABP_TriggerBreakEvent_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UTextRenderComponent* TextRender; // 0x250(0x08)
	struct UBillboardComponent* Billboard; // 0x258(0x08)
	struct FText EventName; // 0x260(0x18)
	struct TArray<struct AActor*> ActorsToBreak; // 0x278(0x10)
	struct TArray<struct FSTR_TriggerBreakParticleInstance> ParticlesToPlay; // 0x288(0x10)
	float LoopDelay; // 0x298(0x04)
	float BreakDamage; // 0x29c(0x04)
	float AdditionalForce; // 0x2a0(0x04)
	bool AOE_Damage; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	float AOERadius; // 0x2a8(0x04)
	float AOEForce; // 0x2ac(0x04)
	float AOEDamage; // 0x2b0(0x04)
	float AOEAdditionalForce; // 0x2b4(0x04)
	enum class EImpactTypes AOEImpactType; // 0x2b8(0x01)
	bool UseRadialForce; // 0x2b9(0x01)
	char pad_2BA[0x2]; // 0x2ba(0x02)
	struct FVector RadialForceLocation; // 0x2bc(0x0c)
	float RadialForceImpulse; // 0x2c8(0x04)
	float RadialForceRadius; // 0x2cc(0x04)
	float RadialForce; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct AActor*> ActorsToDelete; // 0x2d8(0x10)
	struct UAkAudioEvent* Ak Event; // 0x2e8(0x08)
	struct FHitResult Hit Result; // 0x2f0(0x88)

	void DeleteActors(); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.DeleteActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BreakActors(); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.BreakActors // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayParticles(); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.PlayParticles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FireAOE(); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.FireAOE // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddRadialForce(); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.AddRadialForce // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerBreakEvent(); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.TriggerBreakEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TriggerBreakEvent(int32_t EntryPoint); // Function BP_TriggerBreakEvent.BP_TriggerBreakEvent_C.ExecuteUbergraph_BP_TriggerBreakEvent // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

