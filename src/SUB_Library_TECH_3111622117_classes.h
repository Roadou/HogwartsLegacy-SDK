// BlueprintGeneratedClass SUB_Library_TECH_3111622117.SUB_Library_TECH_C
// Size: 0x268 (Inherited: 0x250)
struct ASUB_Library_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	bool PIP_DialogueReady; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct ABP_Hog_LibraryDrawer_C* BP_Hog_LibraryDrawer_432_ExecuteUbergraph_SUB_Library_TECH_RefProperty; // 0x260(0x08)

	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_Library_TECH_3111622117.SUB_Library_TECH_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function SUB_Library_TECH_3111622117.SUB_Library_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SUB_Library_TECH_TriggerBox_PIP01_01_PostMissionLibraryVO_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function SUB_Library_TECH_3111622117.SUB_Library_TECH_C.BndEvt__SUB_Library_TECH_TriggerBox_PIP01_01_PostMissionLibraryVO_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_Library_TECH(int32_t EntryPoint); // Function SUB_Library_TECH_3111622117.SUB_Library_TECH_C.ExecuteUbergraph_SUB_Library_TECH // (Final|UbergraphFunction) // @ game+0x38a7480
};

