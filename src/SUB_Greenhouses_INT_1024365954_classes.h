// BlueprintGeneratedClass SUB_Greenhouses_INT_1024365954.SUB_Greenhouses_INT_C
// Size: 0x270 (Inherited: 0x250)
struct ASUB_Greenhouses_INT_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ABP_Door_Template_C* BP_Door_GreenhouseTentaculaRoom_ExecuteUbergraph_SUB_Greenhouses_INT_RefProperty; // 0x258(0x08)
	struct ABP_Door_Template_C* BP_Door_GreenhouseCabbagesInnerDoorBottom_ExecuteUbergraph_SUB_Greenhouses_INT_RefProperty; // 0x260(0x08)
	struct ATriggerBox* Trig_ZZH_Planter_ExecuteUbergraph_SUB_Greenhouses_INT_RefProperty; // 0x268(0x08)

	void ReceiveBeginPlay(); // Function SUB_Greenhouses_INT_1024365954.SUB_Greenhouses_INT_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SUB_Greenhouses_INT_ForgottenHerbology_DoorUnlockTrigger_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function SUB_Greenhouses_INT_1024365954.SUB_Greenhouses_INT_C.BndEvt__SUB_Greenhouses_INT_ForgottenHerbology_DoorUnlockTrigger_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void DestroyZZHPlant(); // Function SUB_Greenhouses_INT_1024365954.SUB_Greenhouses_INT_C.DestroyZZHPlant // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ZZH_01_Updated(struct UObject* Caller, struct FName& String); // Function SUB_Greenhouses_INT_1024365954.SUB_Greenhouses_INT_C.ZZH_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_Greenhouses_INT_1024365954.SUB_Greenhouses_INT_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_Greenhouses_INT(int32_t EntryPoint); // Function SUB_Greenhouses_INT_1024365954.SUB_Greenhouses_INT_C.ExecuteUbergraph_SUB_Greenhouses_INT // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

