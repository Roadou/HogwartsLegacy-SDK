// BlueprintGeneratedClass BP_TriggerVolume.BP_TriggerVolume_C
// Size: 0x2e8 (Inherited: 0x248)
struct ABP_TriggerVolume_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UTextRenderComponent* TextRender; // 0x250(0x08)
	struct USceneComponent* Scene; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct TArray<struct AActor*> Target; // 0x268(0x10)
	bool CanReset; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float Pre-Delay; // 0x27c(0x04)
	bool ExtinguishLitTorches; // 0x280(0x01)
	bool TriggerExitOnlyOnEmpty; // 0x281(0x01)
	bool TriggerOnPlayer; // 0x282(0x01)
	char pad_283[0x5]; // 0x283(0x05)
	struct TArray<struct AActor*> TriggeringActors; // 0x288(0x10)
	struct TArray<struct AActor*> ActorsInside; // 0x298(0x10)
	bool StartActivated; // 0x2a8(0x01)
	bool InvertToggle; // 0x2a9(0x01)
	bool MultiTrigger; // 0x2aa(0x01)
	char pad_2AB[0x5]; // 0x2ab(0x05)
	struct TArray<struct ADynamicObjectVolume*> DynamicObjectVolumes; // 0x2b0(0x10)
	struct FMulticastInlineDelegate Triggered; // 0x2c0(0x10)
	float StartupDelay; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct AActor*> InvertTarget; // 0x2d8(0x10)

	void ActivateDOVs(); // Function BP_TriggerVolume.BP_TriggerVolume_C.ActivateDOVs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_TriggerVolume.BP_TriggerVolume_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TriggerVolume.BP_TriggerVolume_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_TriggerVolume.BP_TriggerVolume_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_TriggerVolume.BP_TriggerVolume_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_TriggerVolume.BP_TriggerVolume_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_TriggerVolume.BP_TriggerVolume_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TriggerVolume(int32_t EntryPoint); // Function BP_TriggerVolume.BP_TriggerVolume_C.ExecuteUbergraph_BP_TriggerVolume // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Triggered__DelegateSignature(); // Function BP_TriggerVolume.BP_TriggerVolume_C.Triggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

