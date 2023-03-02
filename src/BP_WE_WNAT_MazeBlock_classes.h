// BlueprintGeneratedClass BP_WE_WNAT_MazeBlock.BP_WE_WNAT_MazeBlock_C
// Size: 0x29e (Inherited: 0x248)
struct ABP_WE_WNAT_MazeBlock_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x250(0x08)
	struct UNiagaraComponent* GrowthVFX; // 0x258(0x08)
	struct UStaticMeshComponent* Vines; // 0x260(0x08)
	struct UStaticMeshComponent* SW_WE_Hedge_1m; // 0x268(0x08)
	struct USceneComponent* Root; // 0x270(0x08)
	float GrowthTimeline_VinesGrowth_E296EF1041B67289730B968B3B9A5FBC; // 0x278(0x04)
	enum class ETimelineDirection GrowthTimeline__Direction_E296EF1041B67289730B968B3B9A5FBC; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* GrowthTimeline; // 0x280(0x08)
	struct UMaterialInstanceDynamic* VinesMaterial; // 0x288(0x08)
	struct FVector StartPosition; // 0x290(0x0c)
	bool IsEntranceBlock; // 0x29c(0x01)
	bool IsReversing; // 0x29d(0x01)

	void UserConstructionScript(); // Function BP_WE_WNAT_MazeBlock.BP_WE_WNAT_MazeBlock_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GrowthTimeline__FinishedFunc(); // Function BP_WE_WNAT_MazeBlock.BP_WE_WNAT_MazeBlock_C.GrowthTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void GrowthTimeline__UpdateFunc(); // Function BP_WE_WNAT_MazeBlock.BP_WE_WNAT_MazeBlock_C.GrowthTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void StartMoving(); // Function BP_WE_WNAT_MazeBlock.BP_WE_WNAT_MazeBlock_C.StartMoving // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReverseMoving(); // Function BP_WE_WNAT_MazeBlock.BP_WE_WNAT_MazeBlock_C.ReverseMoving // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_WNAT_MazeBlock.BP_WE_WNAT_MazeBlock_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_WNAT_MazeBlock(int32_t EntryPoint); // Function BP_WE_WNAT_MazeBlock.BP_WE_WNAT_MazeBlock_C.ExecuteUbergraph_BP_WE_WNAT_MazeBlock // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

