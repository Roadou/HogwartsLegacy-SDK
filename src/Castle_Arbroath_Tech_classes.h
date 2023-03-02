// BlueprintGeneratedClass Castle_Arbroath_Tech.Castle_Arbroath_Tech_C
// Size: 0x478 (Inherited: 0x250)
struct ACastle_Arbroath_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct AActor* NamedEnemyRef; // 0x258(0x08)
	struct TMap<struct FString, struct FString> Parameters_DarkWizardMaleA; // 0x260(0x50)
	struct TMap<struct FString, struct FString> Parameters_DarkWizardMaleB; // 0x2b0(0x50)
	struct TMap<struct FString, struct FString> Parameters_DarkWizardMaleC; // 0x300(0x50)
	struct TMap<struct FString, struct FString> Parameters_DarkWizardMaleD; // 0x350(0x50)
	struct TMap<struct FString, struct FString> Parameters_DarkWitchA; // 0x3a0(0x50)
	struct TMap<struct FString, struct FString> Parameters_DarkWitchB; // 0x3f0(0x50)
	struct ATriggerBox* COM_29_SelwynShout2_ExecuteUbergraph_Castle_Arbroath_Tech_RefProperty; // 0x440(0x08)
	struct ADynamicObjectVolume* Arbroath_CampAi_LOC_Patrol_1_DOV_0_ExecuteUbergraph_Castle_Arbroath_Tech_RefProperty; // 0x448(0x08)
	struct ADynamicObjectVolume* Arbroath_CampAi_LOC_Patrol_1_DOV_6_ExecuteUbergraph_Castle_Arbroath_Tech_RefProperty; // 0x450(0x08)
	struct ATriggerBox* COM_29_ThievesOnSelwyn_ExecuteUbergraph_Castle_Arbroath_Tech_RefProperty; // 0x458(0x08)
	struct ATriggerBox* COM_29_ThievesOnSelwyn2_ExecuteUbergraph_Castle_Arbroath_Tech_RefProperty; // 0x460(0x08)
	struct ATriggerBox* COM_29_ThievesOnSelwyn3_ExecuteUbergraph_Castle_Arbroath_Tech_RefProperty; // 0x468(0x08)
	struct ATriggerBox* COM_29_SelwynShout_ExecuteUbergraph_Castle_Arbroath_Tech_RefProperty; // 0x470(0x08)

	bool CheckMissionLocks(); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.CheckMissionLocks // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetVOLocation(struct AActor* Actor, struct FVector& Location); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.GetVOLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Arbroath_Tech_COM_29_SeeSelwyn_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.BndEvt__Castle_Arbroath_Tech_COM_29_SeeSelwyn_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void COM29_NameEnemySpawn(struct AActor* SpawnedActor, struct FName& GroupName); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.COM29_NameEnemySpawn // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Arbroath_Tech_COM_29_SelwynShout_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.BndEvt__Castle_Arbroath_Tech_COM_29_SelwynShout_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void COM29_GuardRobbin2(); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.COM29_GuardRobbin2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Arbroath_Tech_COM_29_ThievesOnSelwyn_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.BndEvt__Castle_Arbroath_Tech_COM_29_ThievesOnSelwyn_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Arbroath_Tech_COM_29_GuardRobbin_1_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.BndEvt__Castle_Arbroath_Tech_COM_29_GuardRobbin_1_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Arbroath_Tech_COM_29_GuardRobbin_2_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.BndEvt__Castle_Arbroath_Tech_COM_29_GuardRobbin_2_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void COM29_SelwynPercieve(struct ANPC_Character* NPCChar); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.COM29_SelwynPercieve // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Arbroath_Tech_COM_29_SelwynShout2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.BndEvt__Castle_Arbroath_Tech_COM_29_SelwynShout2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Arbroath_Tech_COM_29_ThievesOnSelwyn2_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.BndEvt__Castle_Arbroath_Tech_COM_29_ThievesOnSelwyn2_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Castle_Arbroath_Tech_COM_29_ThievesOnSelwyn3_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.BndEvt__Castle_Arbroath_Tech_COM_29_ThievesOnSelwyn3_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void COM29_DialgoueEventComplete(); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.COM29_DialgoueEventComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM29_SelwynFollowUp(); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.COM29_SelwynFollowUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM29_SelwynShoutReset(); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.COM29_SelwynShoutReset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_Castle_Arbroath_Tech(int32_t EntryPoint); // Function Castle_Arbroath_Tech.Castle_Arbroath_Tech_C.ExecuteUbergraph_Castle_Arbroath_Tech // (Final|UbergraphFunction) // @ game+0x38a7480
};

