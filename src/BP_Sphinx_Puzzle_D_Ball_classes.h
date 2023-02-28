// BlueprintGeneratedClass BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C
// Size: 0x458 (Inherited: 0x3b1)
struct ABP_Sphinx_Puzzle_D_Ball_C : ABP_SphinxPuzzle_Base_C {
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct USkeletalMeshComponent* Vine; // 0x3c0(0x08)
	struct USkeletalMeshComponent* Vine2; // 0x3c8(0x08)
	struct UChildActorComponent* Bowl; // 0x3d0(0x08)
	struct UBoxComponent* OverlapTrigger; // 0x3d8(0x08)
	struct FTransform BoulderPlacement; // 0x3e0(0x30)
	struct FTransform TargetPlacement; // 0x410(0x30)
	struct ABP_Sphinx_Puzzle_D_Part_C* Boulder; // 0x440(0x08)
	struct TArray<struct AActor*> ResetTriggers; // 0x448(0x10)

	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NotifyCurrentState(enum class EInteractiveState CurrentObjectState); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.NotifyCurrentState // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void NotifyBeginPuzzle(enum class EInteractiveState State); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.NotifyBeginPuzzle // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Solved(); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.Solved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature(); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void EndHighlight(); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.EndHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PuzzleStart(); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.PuzzleStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnResetTrigger(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.OnResetTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_D_Ball(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_D_Ball.BP_Sphinx_Puzzle_D_Ball_C.ExecuteUbergraph_BP_Sphinx_Puzzle_D_Ball // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

