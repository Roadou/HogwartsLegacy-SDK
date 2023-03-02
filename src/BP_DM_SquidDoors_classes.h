// BlueprintGeneratedClass BP_DM_SquidDoors.BP_DM_SquidDoors_C
// Size: 0x331 (Inherited: 0x248)
struct ABP_DM_SquidDoors_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UArrowComponent* ArrowR; // 0x250(0x08)
	struct UStaticMeshComponent* DoorR; // 0x258(0x08)
	struct UArrowComponent* ArrowL; // 0x260(0x08)
	struct UStaticMeshComponent* DoorL; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float Timeline_2_NewTrack_0_6B5C04A4400C3304955114B0524DA7F4; // 0x278(0x04)
	enum class ETimelineDirection Timeline_2__Direction_6B5C04A4400C3304955114B0524DA7F4; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x280(0x08)
	float Timeline_1_NewTrack_0_7365BCF148C4171924D43AB36829D11F; // 0x288(0x04)
	enum class ETimelineDirection Timeline_1__Direction_7365BCF148C4171924D43AB36829D11F; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x290(0x08)
	bool NewVar_1; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FTransform LeftInitial; // 0x2a0(0x30)
	struct FTransform CenterInitial; // 0x2d0(0x30)
	struct FTransform RightInitial; // 0x300(0x30)
	bool IsMoving; // 0x330(0x01)

	void Timeline_1__FinishedFunc(); // Function BP_DM_SquidDoors.BP_DM_SquidDoors_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_DM_SquidDoors.BP_DM_SquidDoors_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function BP_DM_SquidDoors.BP_DM_SquidDoors_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function BP_DM_SquidDoors.BP_DM_SquidDoors_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DM_SquidDoors.BP_DM_SquidDoors_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SquidDoor(bool Open); // Function BP_DM_SquidDoors.BP_DM_SquidDoors_C.SquidDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DM_SquidDoors(int32_t EntryPoint); // Function BP_DM_SquidDoors.BP_DM_SquidDoors_C.ExecuteUbergraph_BP_DM_SquidDoors // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

