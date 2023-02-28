// BlueprintGeneratedClass BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C
// Size: 0x2e8 (Inherited: 0x248)
struct ABP_Sphinx_Puzzle_C_Manager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct ABP_Sphinx_Puzzle_C_Platform_C* Puzzle; // 0x258(0x08)
	struct TArray<struct ABP_Sphinx_Puzzle_C_Part_C*> Platforms; // 0x260(0x10)
	struct AActor* Player; // 0x270(0x08)
	struct UCapsuleComponent* PlayerCapsule; // 0x278(0x08)
	int32_t NumPlatforms; // 0x280(0x04)
	bool bOnPlatform; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	int32_t ActivatedPlatforms; // 0x288(0x04)
	int32_t TotalPlatforms; // 0x28c(0x04)
	int32_t NewVar_1; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FHermesBPDelegateHandle SwimmingHandle; // 0x298(0x10)
	struct FHermesBPDelegateHandle FlyingStartHandle; // 0x2a8(0x10)
	struct FHermesBPDelegateHandle FlyingEndHandle; // 0x2b8(0x10)
	struct FHermesBPDelegateHandle MountHandle; // 0x2c8(0x10)
	struct FHermesBPDelegateHandle DismountHandle; // 0x2d8(0x10)

	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Activated_Event(); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.Activated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetPlayer_Event(struct AActor* Player); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.SetPlayer_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPlatform_Event(bool bEntered); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.OnPlatform_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.PlayerHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSwimmingStart(struct UObject* Caller); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.OnSwimmingStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ResetFail(); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.ResetFail // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBroomFlightStart(struct UObject* Caller); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.OnBroomFlightStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DeactivateAllPlatforms(); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.DeactivateAllPlatforms // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBroomFlightEnd(struct UObject* Caller); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.OnBroomFlightEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Flying_Event(); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.Flying_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureMountComplete(struct UObject* Caller); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.CreatureMountComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreatureDismountComplete(struct UObject* Caller); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.CreatureDismountComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_C_Manager(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.ExecuteUbergraph_BP_Sphinx_Puzzle_C_Manager // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

