// BlueprintGeneratedClass BP_Arithmancy_Door.BP_Arithmancy_Door_C
// Size: 0x328 (Inherited: 0x248)
struct ABP_Arithmancy_Door_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* ChalkBoardMesh; // 0x250(0x08)
	struct UAkComponent* Ak; // 0x258(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x260(0x08)
	struct USkeletalMeshComponent* chalkMesh; // 0x268(0x08)
	struct UStaticMeshComponent* Symbols; // 0x270(0x08)
	struct UStaticMeshComponent* SymbolsFrame; // 0x278(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x280(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x288(0x08)
	struct USceneComponent* SceneRoot; // 0x290(0x08)
	struct UObjectStateComponent* ObjectState; // 0x298(0x08)
	float Timeline_1_Draw_On_422938DA47DA2AF5409D9AAAC4E78C59; // 0x2a0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_422938DA47DA2AF5409D9AAAC4E78C59; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2a8(0x08)
	float Chalk_FadeIn_Draw_On_5A7105F5493741BE34D239BFF3D46982; // 0x2b0(0x04)
	enum class ETimelineDirection Chalk_FadeIn__Direction_5A7105F5493741BE34D239BFF3D46982; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Chalk_FadeIn; // 0x2b8(0x08)
	float Timeline_0_NewTrack_0_891C46C94B285AD1C393D9B50F229DB2; // 0x2c0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_891C46C94B285AD1C393D9B50F229DB2; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2c8(0x08)
	bool FocusedOnPuzzle?; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	int32_t PuzzleNumber; // 0x2d4(0x04)
	struct ABP_ArithmancyDice_C* OddDice; // 0x2d8(0x08)
	struct ABP_ArithmancyDice_C* EvenDice; // 0x2e0(0x08)
	bool PuzzleSolved; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float NewVar_1; // 0x2ec(0x04)
	struct UABP_Puzzle_Arithmancy_Door_C* AnimBP; // 0x2f0(0x08)
	struct AAkAcousticPortal* AkAcousticPortal; // 0x2f8(0x08)
	struct UDecalComponent* Option 1; // 0x300(0x08)
	bool FirstTime; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FString DoorOpenedString; // 0x310(0x10)
	struct UMaterialInstanceDynamic* PuzzleMaterial; // 0x320(0x08)

	void CheckSolved(); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.CheckSolved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Chalk_FadeIn__FinishedFunc(); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.Chalk_FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Chalk_FadeIn__UpdateFunc(); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.Chalk_FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PuzzleSovled(); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.PuzzleSovled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Arithmancy_Door(int32_t EntryPoint); // Function BP_Arithmancy_Door.BP_Arithmancy_Door_C.ExecuteUbergraph_BP_Arithmancy_Door // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

