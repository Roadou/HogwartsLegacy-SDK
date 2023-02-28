// BlueprintGeneratedClass BP_ArithmancyDice.BP_ArithmancyDice_C
// Size: 0x2a5 (Inherited: 0x248)
struct ABP_ArithmancyDice_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Plane; // 0x250(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x258(0x08)
	struct USphereComponent* Sphere; // 0x260(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	struct UABP_HW_Puzzle_Arithmancy_Dice_C* AnimBP; // 0x280(0x08)
	bool Even; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	int32_t SolvedDiceValue; // 0x28c(0x04)
	bool Solved; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct ABP_Arithmancy_Door_C* Door; // 0x298(0x08)
	float Scale; // 0x2a0(0x04)
	bool Interacting; // 0x2a4(0x01)

	void SetSolved(); // Function BP_ArithmancyDice.BP_ArithmancyDice_C.SetSolved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_ArithmancyDice.BP_ArithmancyDice_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_ArithmancyDice.BP_ArithmancyDice_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_ArithmancyDice.BP_ArithmancyDice_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_ArithmancyDice(int32_t EntryPoint); // Function BP_ArithmancyDice.BP_ArithmancyDice_C.ExecuteUbergraph_BP_ArithmancyDice // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

