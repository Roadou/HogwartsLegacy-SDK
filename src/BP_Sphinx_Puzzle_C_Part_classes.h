// BlueprintGeneratedClass BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C
// Size: 0x329 (Inherited: 0x268)
struct ABP_Sphinx_Puzzle_C_Part_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct ULocalStencilBoundsHintComponent* LocalStencilBoundsHint; // 0x270(0x08)
	struct USkeletalMeshComponent* Vine; // 0x278(0x08)
	struct UStaticMeshComponent* Activation; // 0x280(0x08)
	struct UStaticMeshComponent* Overlap; // 0x288(0x08)
	struct UObjectStateComponent* ObjectState; // 0x290(0x08)
	struct UStaticMeshComponent* Platform; // 0x298(0x08)
	struct USceneComponent* Root; // 0x2a0(0x08)
	struct FMulticastInlineDelegate Activated; // 0x2a8(0x10)
	enum class E_Platform_Sizes Size; // 0x2b8(0x01)
	bool bFloating; // 0x2b9(0x01)
	bool bActivated; // 0x2ba(0x01)
	char pad_2BB[0x5]; // 0x2bb(0x05)
	struct AActor* Player; // 0x2c0(0x08)
	struct FMulticastInlineDelegate SetPlayer; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnPlatform; // 0x2d8(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> PlatformVariants; // 0x2e8(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> OverlapVariants; // 0x2f8(0x10)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> ActivationVariants; // 0x308(0x10)
	struct FMulticastInlineDelegate Flying; // 0x318(0x10)
	bool bMounted; // 0x328(0x01)

	void Activate(bool ACTIVE); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Activate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Build(); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Build // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Success(); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Success // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Reveal(); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Reveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSolution(); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.LoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_C_Part(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.ExecuteUbergraph_BP_Sphinx_Puzzle_C_Part // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Flying__DelegateSignature(); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Flying__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPlatform__DelegateSignature(bool bEntered); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.OnPlatform__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPlayer__DelegateSignature(struct AActor* Player); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.SetPlayer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Activated__DelegateSignature(); // Function BP_Sphinx_Puzzle_C_Part.BP_Sphinx_Puzzle_C_Part_C.Activated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

