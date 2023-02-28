// BlueprintGeneratedClass BP_WorldEvent_DropComponentsToGround.BP_WorldEvent_DropComponentsToGround_C
// Size: 0x102 (Inherited: 0xc8)
struct UBP_WorldEvent_DropComponentsToGround_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct TArray<struct USceneComponent*> SceneComponentsToDrop; // 0xd0(0x10)
	bool DropToGround; // 0xe0(0x01)
	bool RotateToGround; // 0xe1(0x01)
	bool UseCollisionCenter; // 0xe2(0x01)
	char pad_E3[0x1]; // 0xe3(0x01)
	struct FVector TraceStartOffset; // 0xe4(0x0c)
	float TraceLength; // 0xf0(0x04)
	struct FVector DropLocOffset; // 0xf4(0x0c)
	bool AddRandomZRotation; // 0x100(0x01)
	enum class EComponentMobility PrevMobility; // 0x101(0x01)

	void DropComponentToGround(struct USceneComponent* Component); // Function BP_WorldEvent_DropComponentsToGround.BP_WorldEvent_DropComponentsToGround_C.DropComponentToGround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartDroppingComponents(); // Function BP_WorldEvent_DropComponentsToGround.BP_WorldEvent_DropComponentsToGround_C.StartDroppingComponents // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WorldEvent_DropComponentsToGround.BP_WorldEvent_DropComponentsToGround_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WorldEvent_DropComponentsToGround(int32_t EntryPoint); // Function BP_WorldEvent_DropComponentsToGround.BP_WorldEvent_DropComponentsToGround_C.ExecuteUbergraph_BP_WorldEvent_DropComponentsToGround // (Final|UbergraphFunction) // @ game+0x38a7480
};

