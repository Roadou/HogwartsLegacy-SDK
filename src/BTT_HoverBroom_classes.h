// BlueprintGeneratedClass BTT_HoverBroom.BTT_HoverBroom_C
// Size: 0x175 (Inherited: 0x150)
struct UBTT_HoverBroom_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct UParticleSystemComponent* EmitterComponent; // 0x158(0x08)
	struct AFlyingBroom* HoverBroom; // 0x160(0x08)
	struct AFlyingBroom* PropBroom; // 0x168(0x08)
	bool DiveDismount; // 0x170(0x01)
	enum class EBroomMountType MountTransition; // 0x171(0x01)
	enum class EBroomDismountType DismountTransition; // 0x172(0x01)
	bool MountImpulse; // 0x173(0x01)
	bool Mounted; // 0x174(0x01)

	void StopCastingAnimation(); // Function BTT_HoverBroom.BTT_HoverBroom_C.StopCastingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleMuntitionImpact(struct FMunitionImpactData& MunitionImpactData); // Function BTT_HoverBroom.BTT_HoverBroom_C.HandleMuntitionImpact // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DismountBroomCompleted(struct FVariantMapHandle Variant Map Handle); // Function BTT_HoverBroom.BTT_HoverBroom_C.DismountBroomCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DismountBroomStarted(struct FVariantMapHandle Variant Map Handle); // Function BTT_HoverBroom.BTT_HoverBroom_C.DismountBroomStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyBroomDismount(bool Instant); // Function BTT_HoverBroom.BTT_HoverBroom_C.DestroyBroomDismount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Show Dismount Prop(struct AFlyingBroom* Prop); // Function BTT_HoverBroom.BTT_HoverBroom_C.Show Dismount Prop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnBroomInHand(struct ABiped_Player* ParentActor, bool ScaleIn, float StartScale, bool Attatch); // Function BTT_HoverBroom.BTT_HoverBroom_C.SpawnBroomInHand // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyBroom(struct ABiped_Player* BipedPlayer); // Function BTT_HoverBroom.BTT_HoverBroom_C.DestroyBroom // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnFlyingBroom(struct ABiped_Player* ParentActor, struct AFlyingBroom* BroomProp); // Function BTT_HoverBroom.BTT_HoverBroom_C.SpawnFlyingBroom // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_Mount_K2Node_BTCustomActionEvent_6(struct FVariantMapHandle VariantMapHandle); // Function BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_Mount_K2Node_BTCustomActionEvent_6 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_BroomAcceleration_K2Node_CustomAnalogInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_HoverBroom.BTT_HoverBroom_C.InpActEvt_BroomAcceleration_K2Node_CustomAnalogInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_HoverBroom.BTT_HoverBroom_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_HoverBroom.BTT_HoverBroom_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void MunitionImpactDamage(struct UObject* Caller, struct FMunitionImpactData& MunitionImpactData); // Function BTT_HoverBroom.BTT_HoverBroom_C.MunitionImpactDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_HoverBroom.BTT_HoverBroom_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_HoverBroom(int32_t EntryPoint); // Function BTT_HoverBroom.BTT_HoverBroom_C.ExecuteUbergraph_BTT_HoverBroom // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

