// BlueprintGeneratedClass BP_CaveInEvent.BP_CaveInEvent_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_CaveInEvent_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_CaveInEvent; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct TArray<struct FSTR_CaveInElement> EventElements; // 0x260(0x10)
	bool bUpdateTransforms; // 0x270(0x01)
	bool bUseWorldTrigger; // 0x271(0x01)
	bool bUseWebTrigger; // 0x272(0x01)
	char pad_273[0x5]; // 0x273(0x05)
	struct ABP_spiderweb_C* WebTrigger; // 0x278(0x08)
	struct ATriggerVolume* WorldTriggerBox; // 0x280(0x08)

	void UserConstructionScript(); // Function BP_CaveInEvent.BP_CaveInEvent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_CaveInEvent.BP_CaveInEvent_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProcessEvent(); // Function BP_CaveInEvent.BP_CaveInEvent_C.ProcessEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_CaveInEvent.BP_CaveInEvent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void WebOnFire(struct FVector Location); // Function BP_CaveInEvent.BP_CaveInEvent_C.WebOnFire // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnActorBeginOverlap_Event_1(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_CaveInEvent.BP_CaveInEvent_C.OnActorBeginOverlap_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_CaveInEvent.BP_CaveInEvent_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CaveInEvent(int32_t EntryPoint); // Function BP_CaveInEvent.BP_CaveInEvent_C.ExecuteUbergraph_BP_CaveInEvent // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

