// BlueprintGeneratedClass BTT_Biped_Slide.BTT_Biped_Slide_C
// Size: 0x16a (Inherited: 0x150)
struct UBTT_Biped_Slide_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct FTimerHandle ButtslideSurfaceTimer; // 0x158(0x08)
	struct UAmbulatory_MovementComponent* AmbulatoryMovementComponent; // 0x160(0x08)
	bool SlideBySurfaceType; // 0x168(0x01)
	enum class EPhysicalSurface CurrentSurfaceType; // 0x169(0x01)

	void InpActEvt_JumpButton_K2Node_CustomInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Slide.BTT_Biped_Slide_C.InpActEvt_JumpButton_K2Node_CustomInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_Slide.BTT_Biped_Slide_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void SpawnRock(); // Function BTT_Biped_Slide.BTT_Biped_Slide_C.SpawnRock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TimerComplete(); // Function BTT_Biped_Slide.BTT_Biped_Slide_C.TimerComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_Slide.BTT_Biped_Slide_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_Slide.BTT_Biped_Slide_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_Slide.BTT_Biped_Slide_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void AllowJumping(); // Function BTT_Biped_Slide.BTT_Biped_Slide_C.AllowJumping // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_Slide(int32_t EntryPoint); // Function BTT_Biped_Slide.BTT_Biped_Slide_C.ExecuteUbergraph_BTT_Biped_Slide // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

