// BlueprintGeneratedClass BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C
// Size: 0x1c0 (Inherited: 0x150)
struct UBTT_Biped_CriticalFinisher_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AActor* TargetActor; // 0x158(0x08)
	struct TArray<struct UInteractionArchitectAsset*> MunitionDataAsset; // 0x160(0x10)
	float TimeDilation; // 0x170(0x04)
	bool AllowTimeDilation; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	struct UAblAbility* CriticalFinisherAbility; // 0x178(0x08)
	struct FGameplayTagContainer MunitionTags; // 0x180(0x20)
	struct TArray<struct AActor*> Exclude List Always; // 0x1a0(0x10)
	struct TArray<struct AActor*> Exclude List Once; // 0x1b0(0x10)

	void AutoTargetOnlyTarget(struct APawn* Player, bool Flag); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.AutoTargetOnlyTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Enable Auto Target(struct ABiped_Player* BipedPlayer, bool Flag); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.Enable Auto Target // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ApplyAchievement(); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ApplyAchievement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableHUD(bool Flag); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.EnableHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyAllMunitions(struct ABiped_Player* BipedPlayer); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.DestroyAllMunitions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProtectCharacterFromDamage(struct AActor* InActor, bool Flag); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ProtectCharacterFromDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetAbilityAndTimeDilationFromNPC(); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.GetAbilityAndTimeDilationFromNPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct AActor* GetTargetActor(struct APawn* BipedPlayer); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.GetTargetActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SendMunitionImpactToTarget(float Damage); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.SendMunitionImpactToTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RestoreTimeDilation(); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.RestoreTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartTimeDilationOnTarget(); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.StartTimeDilationOnTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetTargetTrackers(struct AActor* InActor); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.SetTargetTrackers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetContexts(bool Flag); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.SetContexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_4(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_4 // (BlueprintEvent) // @ game+0x38a7480
	void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_ApplyFinisherDamage_K2Node_BTCustomActionEvent_3(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.CustActionEvt_ApplyFinisherDamage_K2Node_BTCustomActionEvent_3 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireWandNoFinisherDamage_K2Node_BTCustomActionEvent_2(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.CustActionEvt_FireWandNoFinisherDamage_K2Node_BTCustomActionEvent_2 // (BlueprintEvent) // @ game+0x38a7480
	void CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_CriticalFinisher(int32_t EntryPoint); // Function BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ExecuteUbergraph_BTT_Biped_CriticalFinisher // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

