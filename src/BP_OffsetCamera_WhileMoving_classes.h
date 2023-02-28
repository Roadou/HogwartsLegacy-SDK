// BlueprintGeneratedClass BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C
// Size: 0x204 (Inherited: 0x1c8)
struct UBP_OffsetCamera_WhileMoving_C : UCameraStackBehaviorAddCameraSpaceTranslation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1c8(0x08)
	bool IsMoving; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	struct FVector CameraOffset; // 0x1d4(0x0c)
	struct FVector OffsetWhileMoving; // 0x1e0(0x0c)
	struct FVector OffsetWhileStill; // 0x1ec(0x0c)
	float InterpSpeedStopping; // 0x1f8(0x04)
	float InterpSpeedMoving; // 0x1fc(0x04)
	float DeltaSeconds; // 0x200(0x04)

	bool OnActivateEvent(); // Function BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C.OnActivateEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FString OnGetDebugStatsEvent(); // Function BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C.OnGetDebugStatsEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool OnUpdateEvent(float DeltaSeconds); // Function BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C.OnUpdateEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool OnWriteCameraDataEvent(struct FCameraData& CameraData); // Function BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C.OnWriteCameraDataEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OffsetCamera_WhileMoving(int32_t EntryPoint); // Function BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C.ExecuteUbergraph_BP_OffsetCamera_WhileMoving // (Final|UbergraphFunction) // @ game+0x38a7480
};

