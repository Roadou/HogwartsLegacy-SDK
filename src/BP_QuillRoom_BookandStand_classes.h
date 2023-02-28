// BlueprintGeneratedClass BP_QuillRoom_BookandStand.BP_QuillRoom_BookandStand_C
// Size: 0x27a (Inherited: 0x248)
struct ABP_QuillRoom_BookandStand_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)
	struct USkeletalMeshComponent* SK_HW_QuillRoom_BookandStand; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct TArray<struct UAnimSequence*> Anims; // 0x268(0x10)
	bool IsPlaying; // 0x278(0x01)
	bool IsAwake; // 0x279(0x01)

	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_QuillRoom_BookandStand.BP_QuillRoom_BookandStand_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_QuillRoom_BookandStand.BP_QuillRoom_BookandStand_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_QuillRoom_BookandStand.BP_QuillRoom_BookandStand_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_QuillRoom_BookandStand.BP_QuillRoom_BookandStand_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_QuillRoom_BookandStand(int32_t EntryPoint); // Function BP_QuillRoom_BookandStand.BP_QuillRoom_BookandStand_C.ExecuteUbergraph_BP_QuillRoom_BookandStand // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

