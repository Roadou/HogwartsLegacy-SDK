// BlueprintGeneratedClass CO_BD_Tech.CO_BD_Tech_C
// Size: 0x278 (Inherited: 0x250)
struct ACO_BD_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TArray<enum class AmbientChatterTopicIDs> Topics Pool; // 0x258(0x10)
	struct UUIManager* Target; // 0x268(0x08)
	struct UObject* Target_1; // 0x270(0x08)

	void BndEvt__CO_BD_Tech_HAM_Cragcroft_Chatter_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function CO_BD_Tech.CO_BD_Tech_C.BndEvt__CO_BD_Tech_HAM_Cragcroft_Chatter_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__CO_BD_Tech_HAM_Cragcroft_Chatter_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function CO_BD_Tech.CO_BD_Tech_C.BndEvt__CO_BD_Tech_HAM_Cragcroft_Chatter_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function CO_BD_Tech.CO_BD_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void COM_10_Updated(struct UObject* Caller, struct FName& String); // Function CO_BD_Tech.CO_BD_Tech_C.COM_10_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FIG_07_Updated(struct UObject* Caller, struct FName& String); // Function CO_BD_Tech.CO_BD_Tech_C.FIG_07_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_CO_BD_Tech(int32_t EntryPoint); // Function CO_BD_Tech.CO_BD_Tech_C.ExecuteUbergraph_CO_BD_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

