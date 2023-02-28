// BlueprintGeneratedClass BP_AddRotation_HerbologyPlot.BP_AddRotation_HerbologyPlot_C
// Size: 0x1bc (Inherited: 0x1b8)
struct UBP_AddRotation_HerbologyPlot_C : UCameraStackBehaviorBlend {
	float YawOffset; // 0x1b8(0x04)

	bool OnActivateEvent(); // Function BP_AddRotation_HerbologyPlot.BP_AddRotation_HerbologyPlot_C.OnActivateEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FString OnGetDebugStatsEvent(); // Function BP_AddRotation_HerbologyPlot.BP_AddRotation_HerbologyPlot_C.OnGetDebugStatsEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool OnUpdateEvent(float DeltaSeconds); // Function BP_AddRotation_HerbologyPlot.BP_AddRotation_HerbologyPlot_C.OnUpdateEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool OnWriteCameraDataEvent(struct FCameraData& CameraData); // Function BP_AddRotation_HerbologyPlot.BP_AddRotation_HerbologyPlot_C.OnWriteCameraDataEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void ComputeYawOffset(float& Yaw); // Function BP_AddRotation_HerbologyPlot.BP_AddRotation_HerbologyPlot_C.ComputeYawOffset // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

