// BlueprintGeneratedClass BP_SetRotationToTarget.BP_SetRotationToTarget_C
// Size: 0x1c4 (Inherited: 0x1b8)
struct UBP_SetRotationToTarget_C : UCameraStackBehaviorBlend {
	struct FRotator RotationOffset; // 0x1b8(0x0c)

	bool OnActivateEvent(); // Function BP_SetRotationToTarget.BP_SetRotationToTarget_C.OnActivateEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FString OnGetDebugStatsEvent(); // Function BP_SetRotationToTarget.BP_SetRotationToTarget_C.OnGetDebugStatsEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool OnUpdateEvent(float DeltaSeconds); // Function BP_SetRotationToTarget.BP_SetRotationToTarget_C.OnUpdateEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool OnWriteCameraDataEvent(struct FCameraData& CameraData); // Function BP_SetRotationToTarget.BP_SetRotationToTarget_C.OnWriteCameraDataEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
};

