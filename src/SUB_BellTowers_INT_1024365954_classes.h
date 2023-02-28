// BlueprintGeneratedClass SUB_BellTowers_INT_1024365954.SUB_BellTowers_INT_C
// Size: 0x288 (Inherited: 0x250)
struct ASUB_BellTowers_INT_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FString ReturnBellToTower; // 0x258(0x10)
	struct FString TalkTo_Melibeus; // 0x268(0x10)
	struct FString Activate; // 0x278(0x10)

	void WBB_01_Updated(struct UObject* Caller, struct FName& String); // Function SUB_BellTowers_INT_1024365954.SUB_BellTowers_INT_C.WBB_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function SUB_BellTowers_INT_1024365954.SUB_BellTowers_INT_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_BellTowers_INT(int32_t EntryPoint); // Function SUB_BellTowers_INT_1024365954.SUB_BellTowers_INT_C.ExecuteUbergraph_SUB_BellTowers_INT // (Final|UbergraphFunction) // @ game+0x38a7480
};

