// BlueprintGeneratedClass BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C
// Size: 0x1c2 (Inherited: 0x150)
struct UBTT_Biped_ShadowBlink_2_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	bool IKRestoreState; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	struct FVector LastDirection; // 0x15c(0x0c)
	bool AllowStickMovement; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct ABP_ShadowBlinkTravelActor_C* TravelActor; // 0x170(0x08)
	struct AActor* AutoTarget; // 0x178(0x08)
	bool AltModeOn; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct UCogGroupFocusDirection_ActorFacing* CogFocus_ActorFacing; // 0x188(0x08)
	struct UCogGroupUpDirection_World* CogUp_World; // 0x190(0x08)
	bool IsEnemy; // 0x198(0x01)
	bool IsGate; // 0x199(0x01)
	char pad_19A[0x2]; // 0x19a(0x02)
	float BlinkDistance; // 0x19c(0x04)
	bool AllowStick; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FHermesBPDelegateHandle SphereMadeContactHandle; // 0x1a8(0x10)
	struct UNiagaraComponent* ShadowParticleEmitterNA; // 0x1b8(0x08)
	bool OnButtslide; // 0x1c0(0x01)
	bool LastButtslide; // 0x1c1(0x01)

	void ClampButtslideVelocity(); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.ClampButtslideVelocity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TestForButtSlide(); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.TestForButtSlide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AcquireTarget(struct APawn* BipedPlayer); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.AcquireTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlinkEndBeforeEnemy(); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.BlinkEndBeforeEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destroy Shadow Blink FX(bool OnExit); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.Destroy Shadow Blink FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateShadowBlinkFX(); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.CreateShadowBlinkFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FallingTest(bool& Falling); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.FallingTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ShadowBlinkExit_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.CustActionEvt_ShadowBlinkExit_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ShadowBlinkSphereHitSomething(struct UObject* Caller, struct AActor* Actor); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.ShadowBlinkSphereHitSomething // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_ShadowBlink_3(int32_t EntryPoint); // Function BTT_Biped_ShadowBlink_3.BTT_Biped_ShadowBlink_2_C.ExecuteUbergraph_BTT_Biped_ShadowBlink_3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

