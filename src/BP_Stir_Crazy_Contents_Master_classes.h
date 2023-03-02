// BlueprintGeneratedClass BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C
// Size: 0x290 (Inherited: 0x248)
struct ABP_Stir_Crazy_Contents_Master_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* ParticleSystemBase; // 0x250(0x08)
	struct USphereComponent* Root; // 0x258(0x08)
	struct UStaticMeshComponent* Plane; // 0x260(0x08)
	float StirringTimeline_StirringAngle_029F67D144CAAF21511A7EBA8966423A; // 0x268(0x04)
	enum class ETimelineDirection StirringTimeline__Direction_029F67D144CAAF21511A7EBA8966423A; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* StirringTimeline; // 0x270(0x08)
	float TransitionTimeline_Transition_257915984EC654FB5149EAA30A806755; // 0x278(0x04)
	enum class ETimelineDirection TransitionTimeline__Direction_257915984EC654FB5149EAA30A806755; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* TransitionTimeline; // 0x280(0x08)
	struct UMaterialInstanceDynamic* PlaneMaterial; // 0x288(0x08)

	void ToggleBubblingAudioLoop(struct UAkComponent* AudioComponent, bool Enable); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.ToggleBubblingAudioLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetUpMaterial(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.SetUpMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StirringTimeline__FinishedFunc(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.StirringTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void StirringTimeline__UpdateFunc(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.StirringTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void TransitionTimeline__FinishedFunc(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.TransitionTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void TransitionTimeline__UpdateFunc(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.TransitionTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Open_Lid_Event(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.Open_Lid_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Close_Lid_Event(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.Close_Lid_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Start_Stirring_Event(bool IsStirringClockwise); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.Start_Stirring_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Stop_Stirring_Event(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.Stop_Stirring_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Start_Stirring_Timeline(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.Start_Stirring_Timeline // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Stop_Stirring_Timeline(); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.Stop_Stirring_Timeline // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Stir_Crazy_Contents_Master(int32_t EntryPoint); // Function BP_Stir_Crazy_Contents_Master.BP_Stir_Crazy_Contents_Master_C.ExecuteUbergraph_BP_Stir_Crazy_Contents_Master // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

