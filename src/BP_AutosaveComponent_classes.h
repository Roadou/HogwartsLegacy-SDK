// BlueprintGeneratedClass BP_AutosaveComponent.BP_AutosaveComponent_C
// Size: 0x151 (Inherited: 0xc8)
struct UBP_AutosaveComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	bool TriggerSave; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FName StatToSet; // 0xd4(0x08)
	int32_t StatToSetValue; // 0xdc(0x04)
	struct FName StatToCheckOnReload; // 0xe0(0x08)
	int32_t StatToCheckValue; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct AActor*> ActorsToRestore; // 0xf0(0x10)
	struct TArray<struct AActor*> ActorsToRemove; // 0x100(0x10)
	bool SetNewSpawnLocation; // 0x110(0x01)
	bool UsePlayerLocationForSpawn; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct AActor* Respawnlocation; // 0x118(0x08)
	struct FTransform SpawnLocation; // 0x120(0x30)
	bool TestRestoreFromSave; // 0x150(0x01)

	void SetRespawnTransform(); // Function BP_AutosaveComponent.BP_AutosaveComponent_C.SetRespawnTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RestoreOnReload(); // Function BP_AutosaveComponent.BP_AutosaveComponent_C.RestoreOnReload // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStats(); // Function BP_AutosaveComponent.BP_AutosaveComponent_C.SetStats // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CallSave(); // Function BP_AutosaveComponent.BP_AutosaveComponent_C.CallSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AutosaveComponent.BP_AutosaveComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EventTriggerSave(); // Function BP_AutosaveComponent.BP_AutosaveComponent_C.EventTriggerSave // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AutosaveComponent(int32_t EntryPoint); // Function BP_AutosaveComponent.BP_AutosaveComponent_C.ExecuteUbergraph_BP_AutosaveComponent // (Final|UbergraphFunction) // @ game+0x38a7480
};

