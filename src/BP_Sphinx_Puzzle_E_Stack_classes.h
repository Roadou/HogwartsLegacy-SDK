// BlueprintGeneratedClass BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C
// Size: 0x2cc (Inherited: 0x248)
struct ABP_Sphinx_Puzzle_E_Stack_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct UObjectStateComponent* ObjectState; // 0x258(0x08)
	struct UPrimitiveComponent* FlockComp; // 0x260(0x08)
	struct FMulticastInlineDelegate Start; // 0x268(0x10)
	struct TArray<struct ABP_Sphinx_Puzzle_E_Rock_C*> Rocks; // 0x278(0x10)
	struct TArray<struct ABP_Sphinx_Puzzle_E_Rock_C*> OppugnoRocks; // 0x288(0x10)
	bool bFlockingDisabled; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct APlayerCameraManager* PlayerCamManager; // 0x2a0(0x08)
	struct AActor* PlayerRef; // 0x2a8(0x08)
	bool bBlocked; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct TArray<float> CurTimes; // 0x2b8(0x10)
	float TimeLastRockAffectedBySpell; // 0x2c8(0x04)

	void GetLastTimeRockAffectedBySpell(struct ABP_Sphinx_Puzzle_E_Rock_C* Rock, float& LastTimeAffected); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.GetLastTimeRockAffectedBySpell // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void DampRocks(bool bDamp, bool bOppugno); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.DampRocks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AffectedBySpell(struct UPrimitiveComponent* HitComp); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.AffectedBySpell // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EndSpell(); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.EndSpell // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DisableFlocking(); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.DisableFlocking // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReplaceRock(struct ABP_Sphinx_Puzzle_E_Rock_C* OldRock, struct ABP_Sphinx_Puzzle_E_Rock_C* NewRock); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.ReplaceRock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OppugnoEvent(struct UPrimitiveComponent* HitComp); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.OppugnoEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckRockStackReset(); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.CheckRockStackReset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sphinx_Puzzle_E_Stack(int32_t EntryPoint); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.ExecuteUbergraph_BP_Sphinx_Puzzle_E_Stack // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Start__DelegateSignature(); // Function BP_Sphinx_Puzzle_E_Stack.BP_Sphinx_Puzzle_E_Stack_C.Start__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

