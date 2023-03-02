// BlueprintGeneratedClass BP_QuestItem_EVL_Conv_08_AnneNote.BP_QuestItem_EVL_Conv_08_AnneNote_C
// Size: 0x380 (Inherited: 0x350)
struct ABP_QuestItem_EVL_Conv_08_AnneNote_C : ANone {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FText ObjectName; // 0x358(0x18)
	struct FMulticastInlineDelegate NotePickedUp; // 0x370(0x10)

	void Deactivate_Quest_Item(); // Function BP_QuestItem_EVL_Conv_08_AnneNote.BP_QuestItem_EVL_Conv_08_AnneNote_C.Deactivate_Quest_Item // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Activate_Quest_Item(); // Function BP_QuestItem_EVL_Conv_08_AnneNote.BP_QuestItem_EVL_Conv_08_AnneNote_C.Activate_Quest_Item // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_QuestItem_EVL_Conv_08_AnneNote.BP_QuestItem_EVL_Conv_08_AnneNote_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_QuestItem_EVL_Conv_08_AnneNote.BP_QuestItem_EVL_Conv_08_AnneNote_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_QuestItem_EVL_Conv_08_AnneNote(int32_t EntryPoint); // Function BP_QuestItem_EVL_Conv_08_AnneNote.BP_QuestItem_EVL_Conv_08_AnneNote_C.ExecuteUbergraph_BP_QuestItem_EVL_Conv_08_AnneNote // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void NotePickedUp__DelegateSignature(); // Function BP_QuestItem_EVL_Conv_08_AnneNote.BP_QuestItem_EVL_Conv_08_AnneNote_C.NotePickedUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

