// BlueprintGeneratedClass BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C
// Size: 0x2c0 (Inherited: 0x248)
struct ABP_Sanctuary_BiomeTransition_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPostProcessComponent* PostProcess; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float TransitionTimeline_FogDensity_B80A08B84AD0F01894788FAA327D078C; // 0x260(0x04)
	float TransitionTimeline_TerrariumOpacity_B80A08B84AD0F01894788FAA327D078C; // 0x264(0x04)
	float TransitionTimeline_PostProcessStrength_B80A08B84AD0F01894788FAA327D078C; // 0x268(0x04)
	enum class ETimelineDirection TransitionTimeline__Direction_B80A08B84AD0F01894788FAA327D078C; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* TransitionTimeline; // 0x270(0x08)
	struct TArray<struct TSoftObjectPtr<UMeshComponent>> ForceFadeMeshComponents; // 0x278(0x10)
	struct UMaterialInstanceDynamic* PostProcessDynMat; // 0x288(0x08)
	struct FVector WalkDirection; // 0x290(0x0c)
	bool ManualPlayerControl; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct ABP_Sanctuary_BiomeTransition_Fog_C* FogActor; // 0x2a0(0x08)
	struct APlayerStart* TeleportTarget; // 0x2a8(0x08)
	struct FName TargetZone; // 0x2b0(0x08)
	struct FName MeshFadeTag; // 0x2b8(0x08)

	void TransitionTimeline__FinishedFunc(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.TransitionTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void TransitionTimeline__UpdateFunc(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.TransitionTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void TransitionTimeline__CameraFramingBlendBack__EventFunc(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.TransitionTimeline__CameraFramingBlendBack__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void TransitionTimeline__PlayerControlRestore__EventFunc(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.TransitionTimeline__PlayerControlRestore__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void TransitionTimeline__TeleportEvent__EventFunc(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.TransitionTimeline__TeleportEvent__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void FadeMeshesWithTag(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.FadeMeshesWithTag // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnfadeMeshesWithTag(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.UnfadeMeshesWithTag // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatePostProcess(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.CreatePostProcess // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyPostProcess(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.DestroyPostProcess // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerControlStart(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.PlayerControlStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerControlRestore(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.PlayerControlRestore // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerControlUpdate(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.PlayerControlUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnFog(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.SpawnFog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyFog(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.DestroyFog // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TeleportPlayer(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.TeleportPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableForceFadeAll(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.EnableForceFadeAll // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableForceFadeAll(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.DisableForceFadeAll // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StartFadeToZero(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.StartFadeToZero // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinishFadeToZero(); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.FinishFadeToZero // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanctuary_BiomeTransition(int32_t EntryPoint); // Function BP_Sanctuary_BiomeTransition.BP_Sanctuary_BiomeTransition_C.ExecuteUbergraph_BP_Sanctuary_BiomeTransition // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

