// BlueprintGeneratedClass BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C
// Size: 0x2d9 (Inherited: 0x248)
struct ABP_Sphinx_Puzzle_A_GlowBugs_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct ULocalStencilBoundsHintComponent* LocalStencilBoundsHint; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct UNiagaraComponent* Niagara; // 0x260(0x08)
	struct USphereComponent* Sphere; // 0x268(0x08)
	struct UAkComponent* Ak_BP_SphinxPuzzle_A_GlowBugs; // 0x270(0x08)
	struct FVector StartLoc; // 0x278(0x0c)
	struct FVector Target; // 0x284(0x0c)
	bool bIsActive; // 0x290(0x01)
	bool bComplete; // 0x291(0x01)
	bool bAttached; // 0x292(0x01)
	char pad_293[0x5]; // 0x293(0x05)
	struct AActor* LumosBP; // 0x298(0x08)
	struct ABP_GlowBugSwarm_C* GlowBugSwarm; // 0x2a0(0x08)
	float RetreatDelay; // 0x2a8(0x04)
	float RetreatSpeed; // 0x2ac(0x04)
	struct FMulticastInlineDelegate Grabbed; // 0x2b0(0x10)
	struct FMulticastInlineDelegate Dropped; // 0x2c0(0x10)
	struct UAkComponent* Ak_Butterfly_Hold_Motion; // 0x2d0(0x08)
	bool playerLookingAt; // 0x2d8(0x01)

	bool DisableLightRaytrace(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.DisableLightRaytrace // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DisableLightInteraction(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.DisableLightInteraction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayerLookAt(bool Flag); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.PlayerLookAt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Build(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Build // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLightProximity(struct AActor* LumosBP); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnEnteredLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredNearby(struct AActor* LumosBP); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnEnteredNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLightProximity(struct AActor* LumosBP); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnExitedLightProximity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedNearby(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnExitedNearby // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Retreat(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Retreat // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnteredLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnEnteredLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitedLight(struct AActor* LumosBP, bool bPlayerOwned); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.OnExitedLight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Move(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Move // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Success(struct FVector RestLoc); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Success // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndMove(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.EndMove // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reveal(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Reveal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_A_GlowBugs(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.ExecuteUbergraph_BP_Sphinx_Puzzle_A_GlowBugs // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Dropped__DelegateSignature(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Dropped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Grabbed__DelegateSignature(); // Function BP_Sphinx_Puzzle_A_GlowBugs.BP_Sphinx_Puzzle_A_GlowBugs_C.Grabbed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

