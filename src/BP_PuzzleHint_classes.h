// BlueprintGeneratedClass BP_PuzzleHint.BP_PuzzleHint_C
// Size: 0x315 (Inherited: 0x248)
struct ABP_PuzzleHint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBillboardComponent* Billboard; // 0x250(0x08)
	struct UTextRenderComponent* TextRender; // 0x258(0x08)
	struct UBoxComponent* Kill Hint Trigger Box; // 0x260(0x08)
	struct UBoxComponent* Hint Trigger Box; // 0x268(0x08)
	struct USphereComponent* Hint Trigger Sphere; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	struct TArray<struct FDialogueConversationReference> Hints; // 0x280(0x10)
	struct TArray<float> HintDelays; // 0x290(0x10)
	struct TArray<struct FCharacterName> VOCharacter; // 0x2a0(0x10)
	bool Use Look At; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct AActor* Look at Actor; // 0x2b8(0x08)
	int32_t LookAtCamHintLevel; // 0x2c0(0x04)
	float CameraReleaseDelay; // 0x2c4(0x04)
	float Hint Delay Timer; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FDialogueConversationReference Hint VO; // 0x2d0(0x10)
	struct FTimerHandle Timer; // 0x2e0(0x08)
	bool IsInside; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float Hint Delay 1; // 0x2ec(0x04)
	float Hint Delay 2; // 0x2f0(0x04)
	float Hint Delay 3; // 0x2f4(0x04)
	bool Use Sphere Collision; // 0x2f8(0x01)
	bool Kill Hint; // 0x2f9(0x01)
	bool Use Kill Hint Trigger; // 0x2fa(0x01)
	char pad_2FB[0x1]; // 0x2fb(0x01)
	int32_t HintLevel; // 0x2fc(0x04)
	bool CameraOn; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct AActor* CurrentVOActor; // 0x308(0x08)
	bool HintsActivated?; // 0x310(0x01)
	bool Activated By Switch On; // 0x311(0x01)
	bool RepeatLastHint; // 0x312(0x01)
	bool VOPlaying; // 0x313(0x01)
	bool NoHintInCombat; // 0x314(0x01)

	void Get VOActor(int32_t HintIndex); // Function BP_PuzzleHint.BP_PuzzleHint_C.Get VOActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_PuzzleHint.BP_PuzzleHint_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_PuzzleHint.BP_PuzzleHint_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_1(); // Function BP_PuzzleHint.BP_PuzzleHint_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_PuzzleHint_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_PuzzleHint.BP_PuzzleHint_C.BndEvt__BP_PuzzleHint_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_PuzzleHint_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_PuzzleHint.BP_PuzzleHint_C.BndEvt__BP_PuzzleHint_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_2(); // Function BP_PuzzleHint.BP_PuzzleHint_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PuzzleHint.BP_PuzzleHint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_PuzzleHint_Hint Trigger Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_PuzzleHint.BP_PuzzleHint_C.BndEvt__BP_PuzzleHint_Hint Trigger Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_PuzzleHint_Hint Trigger Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_PuzzleHint.BP_PuzzleHint_C.BndEvt__BP_PuzzleHint_Hint Trigger Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_PuzzleHint_Kill Hint Trigger Box_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_PuzzleHint.BP_PuzzleHint_C.BndEvt__BP_PuzzleHint_Kill Hint Trigger Box_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_PuzzleHint.BP_PuzzleHint_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HintCheck(); // Function BP_PuzzleHint.BP_PuzzleHint_C.HintCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartHint(); // Function BP_PuzzleHint.BP_PuzzleHint_C.StartHint // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void KillHint(); // Function BP_PuzzleHint.BP_PuzzleHint_C.KillHint // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PuzzleHint(int32_t EntryPoint); // Function BP_PuzzleHint.BP_PuzzleHint_C.ExecuteUbergraph_BP_PuzzleHint // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

