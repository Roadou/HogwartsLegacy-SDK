// BlueprintGeneratedClass BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C
// Size: 0x390 (Inherited: 0x268)
struct ABP_Sphinx_Puzzle_B_Part_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USkeletalMeshComponent* Vine; // 0x270(0x08)
	struct UParticleSystemComponent* AmbientSplash; // 0x278(0x08)
	struct UParticleSystemComponent* WaterSplash; // 0x280(0x08)
	struct UParticleSystemComponent* EmergeSplash; // 0x288(0x08)
	struct UParticleSystemComponent* BowlDrips; // 0x290(0x08)
	struct UNiagaraComponent* Steam; // 0x298(0x08)
	struct UAkComponent* Ak_BP_Sphinx_Puzzle_B_Brazier; // 0x2a0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2a8(0x08)
	struct UChildActorComponent* TorchChild; // 0x2b0(0x08)
	struct UStaticMeshComponent* Base; // 0x2b8(0x08)
	struct USceneComponent* Root; // 0x2c0(0x08)
	struct UStaticMeshComponent* Column; // 0x2c8(0x08)
	struct UStaticMeshComponent* Brazier; // 0x2d0(0x08)
	enum class E_Size Size; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct FRotator Rotation; // 0x2dc(0x0c)
	struct FVector ExtendLOC; // 0x2e8(0x0c)
	struct FVector RetractLOC; // 0x2f4(0x0c)
	struct FVector TargetLoc; // 0x300(0x0c)
	struct FVector SubmergeLOC; // 0x30c(0x0c)
	float MovementSpeed; // 0x318(0x04)
	float BaseMovementSpeed; // 0x31c(0x04)
	bool bIsLit; // 0x320(0x01)
	bool bMoving; // 0x321(0x01)
	bool bDone; // 0x322(0x01)
	bool bFailed; // 0x323(0x01)
	bool bActivated; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	float ArrestoDilation; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct TArray<struct UStaticMesh*> ColumnVariants; // 0x330(0x10)
	struct FMulticastInlineDelegate Lit; // 0x340(0x10)
	struct FMulticastInlineDelegate Fail; // 0x350(0x10)
	struct FMulticastInlineDelegate Drop; // 0x360(0x10)
	struct ABP_Torch_C* Torch; // 0x370(0x08)
	struct UArrestoMomentumComponent* ArrestoComp; // 0x378(0x08)
	struct FMulticastInlineDelegate Restart; // 0x380(0x10)

	bool DisallowArrestoMomentum(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.DisallowArrestoMomentum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Build(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Build // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Move(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Move // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Success(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Success // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Start(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Clear(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Clear // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Torch_K2Node_ComponentBoundEvent_0_OnLit__DelegateSignature(struct ABP_Torch_C* Torch); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.BndEvt__Torch_K2Node_ComponentBoundEvent_0_OnLit__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Torch_K2Node_ComponentBoundEvent_2_OnExtinguished__DelegateSignature(struct ABP_Torch_C* Torch); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.BndEvt__Torch_K2Node_ComponentBoundEvent_2_OnExtinguished__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumBegin(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.OnArrestoMomentumBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumEnd(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.OnArrestoMomentumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Torch_K2Node_ComponentBoundEvent_1_ArrestoStart__DelegateSignature(bool bStart, struct UArrestoMomentumComponent* ArrestoComp, float TimeDilation); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.BndEvt__Torch_K2Node_ComponentBoundEvent_1_ArrestoStart__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Reveal(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Reveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadSolution(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.LoadSolution // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_B_Part(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.ExecuteUbergraph_BP_Sphinx_Puzzle_B_Part // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Restart__DelegateSignature(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Restart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Drop__DelegateSignature(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Drop__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Fail__DelegateSignature(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Fail__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Lit__DelegateSignature(); // Function BP_Sphinx_Puzzle_B_Part.BP_Sphinx_Puzzle_B_Part_C.Lit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

