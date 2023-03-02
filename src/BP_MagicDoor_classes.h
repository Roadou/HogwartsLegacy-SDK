// BlueprintGeneratedClass BP_MagicDoor.BP_MagicDoor_C
// Size: 0x319 (Inherited: 0x248)
struct ABP_MagicDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBP_AutosaveComponent_C* BP_AutosaveComponent; // 0x250(0x08)
	struct UAkComponent* Ak_BP_MagicDoor_Spooky_Loop; // 0x258(0x08)
	struct UObjectStateComponent* ObjectState; // 0x260(0x08)
	struct UAkComponent* Ak_BP_MagicDoor; // 0x268(0x08)
	struct UStaticMeshComponent* StaticMeshComponent08; // 0x270(0x08)
	struct UStaticMeshComponent* StaticMeshComponent07; // 0x278(0x08)
	struct UStaticMeshComponent* StaticMeshComponent06; // 0x280(0x08)
	struct UStaticMeshComponent* StaticMeshComponent05; // 0x288(0x08)
	struct UStaticMeshComponent* DoorSlab4; // 0x290(0x08)
	struct UStaticMeshComponent* DoorSlab3; // 0x298(0x08)
	struct UStaticMeshComponent* DoorSlab2; // 0x2a0(0x08)
	struct UStaticMeshComponent* DoorSlab1; // 0x2a8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x2b0(0x08)
	struct USceneComponent* SharedRoot; // 0x2b8(0x08)
	float Timeline_1_Lerp_9549F715418451554DDAA591625B7E70; // 0x2c0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_9549F715418451554DDAA591625B7E70; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2c8(0x08)
	float Timeline_0_Lerp_5E26D82F426FD234FF8819BB06BB11E7; // 0x2d0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5E26D82F426FD234FF8819BB06BB11E7; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2d8(0x08)
	int32_t Counter; // 0x2e0(0x04)
	int32_t #ofSwitches; // 0x2e4(0x04)
	struct TArray<struct FTransform> TargetLocations; // 0x2e8(0x10)
	struct TArray<struct UStaticMeshComponent*> DoorArray; // 0x2f8(0x10)
	struct TArray<struct FTransform> StartingLocations; // 0x308(0x10)
	bool Ready; // 0x318(0x01)

	void Timeline_0__FinishedFunc(); // Function BP_MagicDoor.BP_MagicDoor_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_MagicDoor.BP_MagicDoor_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_MagicDoor.BP_MagicDoor_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_MagicDoor.BP_MagicDoor_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_MagicDoor.BP_MagicDoor_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_MagicDoor.BP_MagicDoor_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_MagicDoor.BP_MagicDoor_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Open(); // Function BP_MagicDoor.BP_MagicDoor_C.Open // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Close(); // Function BP_MagicDoor.BP_MagicDoor_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_MagicDoor.BP_MagicDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_MagicDoor.BP_MagicDoor_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MagicDoor(int32_t EntryPoint); // Function BP_MagicDoor.BP_MagicDoor_C.ExecuteUbergraph_BP_MagicDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

