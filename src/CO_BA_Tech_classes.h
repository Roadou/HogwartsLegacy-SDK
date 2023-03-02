// BlueprintGeneratedClass CO_BA_Tech.CO_BA_Tech_C
// Size: 0x290 (Inherited: 0x250)
struct ACO_BA_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume_2_ExecuteUbergraph_CO_BA_Tech_RefProperty; // 0x258(0x08)
	struct ADynamicObjectVolume* OL_COBA_CampAi_LOC_Common_1_DOV_0_ExecuteUbergraph_CO_BA_Tech_RefProperty; // 0x260(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume7_ExecuteUbergraph_CO_BA_Tech_RefProperty; // 0x268(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume3_ExecuteUbergraph_CO_BA_Tech_RefProperty; // 0x270(0x08)
	struct ABP_StatueHiddenDoor_C* BP_StatueHiddenDoor_CO_BA_BasementExit_ExecuteUbergraph_CO_BA_Tech_RefProperty; // 0x278(0x08)
	struct ABP_StatueHiddenDoor_C* BP_StatueHiddenDoor_CO_BA_MausoleumExit_ExecuteUbergraph_CO_BA_Tech_RefProperty; // 0x280(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume8_ExecuteUbergraph_CO_BA_Tech_RefProperty; // 0x288(0x08)

	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function CO_BA_Tech.CO_BA_Tech_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function CO_BA_Tech.CO_BA_Tech_C.BndEvt__TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function CO_BA_Tech.CO_BA_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_CO_BA_Tech(int32_t EntryPoint); // Function CO_BA_Tech.CO_BA_Tech_C.ExecuteUbergraph_CO_BA_Tech // (Final|UbergraphFunction) // @ game+0x38a7480
};

