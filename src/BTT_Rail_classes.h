// BlueprintGeneratedClass BTT_Rail.BTT_Rail_C
// Size: 0x1a0 (Inherited: 0x150)
struct UBTT_Rail_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AActor* RailActor; // 0x158(0x08)
	struct UParticleSystemComponent* EmitterComponent; // 0x160(0x08)
	bool ExitingRail; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct ARailTravelStatue* RailTravelObject; // 0x170(0x08)
	struct USplineComponent* RailSplineComponent; // 0x178(0x08)
	float TravelDirection; // 0x180(0x04)
	float AddToYaw; // 0x184(0x04)
	float FadeOutTime; // 0x188(0x04)
	float WaitTime; // 0x18c(0x04)
	float FadeInTime; // 0x190(0x04)
	bool StickPressed; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float StickX; // 0x198(0x04)
	float StickY; // 0x19c(0x04)

	void TeleportToSplineEnd(); // Function BTT_Rail.BTT_Rail_C.TeleportToSplineEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSplineTransformAtEnd(struct FVector& SplineLocation, struct FRotator& SplineRotation); // Function BTT_Rail.BTT_Rail_C.GetSplineTransformAtEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetInteractActor(); // Function BTT_Rail.BTT_Rail_C.GetInteractActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnStatue(struct AActor* ParentActor); // Function BTT_Rail.BTT_Rail_C.SpawnStatue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExitRail(); // Function BTT_Rail.BTT_Rail_C.ExitRail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Rail.BTT_Rail_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ComputeTravelDirection(struct USplineComponent* SplineComponent, float& TravelDirection); // Function BTT_Rail.BTT_Rail_C.ComputeTravelDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Rail.BTT_Rail_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Rail.BTT_Rail_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Rail.BTT_Rail_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Rail.BTT_Rail_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Rail.BTT_Rail_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void FadeOutComplete(); // Function BTT_Rail.BTT_Rail_C.FadeOutComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Rail.BTT_Rail_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Rail(int32_t EntryPoint); // Function BTT_Rail.BTT_Rail_C.ExecuteUbergraph_BTT_Rail // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

