// BlueprintGeneratedClass HN_AS_Tech.HN_AS_Tech_C
// Size: 0x2a8 (Inherited: 0x250)
struct AHN_AS_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	bool Named_Inferius_1_Dead; // 0x258(0x01)
	bool FGM_HUFF_HelenGone; // 0x259(0x01)
	enum class AmbientChatterTopicIDs UpperHogsfield-GermainKilled; // 0x25a(0x01)
	char pad_25B[0x5]; // 0x25b(0x05)
	struct TArray<enum class AmbientChatterTopicIDs> Topics Pool; // 0x260(0x10)
	enum class AmbientChatterTopicIDs In Topic_1; // 0x270(0x01)
	enum class AmbientChatterTopicIDs CurrentChaterTopic; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct ANone* BP_StationDrinkTea5_2_ExecuteUbergraph_HN_AS_Tech_RefProperty; // 0x278(0x08)
	struct ANone* BP_FastTravel_2_ExecuteUbergraph_HN_AS_Tech_RefProperty; // 0x280(0x08)
	struct ABP_Stand4PGossipStation_C* BP_Stand4PGossipStation4_5_ExecuteUbergraph_HN_AS_Tech_RefProperty; // 0x288(0x08)
	struct ABP_Stand4PGossipStation_C* BP_Stand4PGossipStation3_2_ExecuteUbergraph_HN_AS_Tech_RefProperty; // 0x290(0x08)
	struct ABP_Stand4PFriendlyConvoStation_C* BP_Stand4PFriendlyConvoStation_2_ExecuteUbergraph_HN_AS_Tech_RefProperty; // 0x298(0x08)
	struct ABP_Stand4PStation_C* BP_Stand4PStation2_2_ExecuteUbergraph_HN_AS_Tech_RefProperty; // 0x2a0(0x08)

	void BndEvt__HN_AS_Tech_Chatter_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_AS_Tech.HN_AS_Tech_C.BndEvt__HN_AS_Tech_Chatter_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HN_AS_Tech_Chatter_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_AS_Tech.HN_AS_Tech_C.BndEvt__HN_AS_Tech_Chatter_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HN_AS_Tech.HN_AS_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_AS_Tech(int32_t EntryPoint); // Function HN_AS_Tech.HN_AS_Tech_C.ExecuteUbergraph_HN_AS_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

