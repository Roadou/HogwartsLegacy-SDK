// BlueprintGeneratedClass BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C
// Size: 0x2b8 (Inherited: 0x248)
struct ABP_VFX_Trigger_Volume_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBillboardComponent* Billboard; // 0x250(0x08)
	struct UBoxComponent* Box; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct FVector Box Size; // 0x268(0x0c)
	float Offset Amount; // 0x274(0x04)
	struct ABP_VFX_Container_C* Particle Rig; // 0x278(0x08)
	struct TArray<struct FSTR_TriggerVolumes_Particles> Particle Systems; // 0x280(0x10)
	struct TArray<struct FSTR_TriggerVolumes_Niagara> Niagara System; // 0x290(0x10)
	bool Debug Volume Setup; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TArray<struct UAkAudioEvent*> AudioEvents; // 0x2a8(0x10)

	void UserConstructionScript(); // Function BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Event TriggerVolume(); // Function BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.Event TriggerVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_VFX_Trigger_Volume(int32_t EntryPoint); // Function BP_VFX_Trigger_Volume.BP_VFX_Trigger_Volume_C.ExecuteUbergraph_BP_VFX_Trigger_Volume // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

