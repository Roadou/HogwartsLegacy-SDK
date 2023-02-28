// BlueprintGeneratedClass BP_AddRotation.BP_AddRotation_C
// Size: 0x1c4 (Inherited: 0x1b8)
struct UBP_AddRotation_C : UCameraStackBehaviorBlend {
	struct FRotator RotationDelta; // 0x1b8(0x0c)

	bool OnActivateEvent(); // Function BP_AddRotation.BP_AddRotation_C.OnActivateEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FString OnGetDebugStatsEvent(); // Function BP_AddRotation.BP_AddRotation_C.OnGetDebugStatsEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool OnUpdateEvent(float DeltaSeconds); // Function BP_AddRotation.BP_AddRotation_C.OnUpdateEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool OnWriteCameraDataEvent(struct FCameraData& CameraData); // Function BP_AddRotation.BP_AddRotation_C.OnWriteCameraDataEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
};

