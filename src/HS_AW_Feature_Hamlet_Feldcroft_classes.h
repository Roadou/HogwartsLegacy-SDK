// BlueprintGeneratedClass HS_AW_Feature_Hamlet_Feldcroft.HS_AW_Feature_Hamlet_Feldcroft_C
// Size: 0x278 (Inherited: 0x250)
struct AHS_AW_Feature_Hamlet_Feldcroft_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	bool DoorLocked; // 0x258(0x01)
	bool ChimneysDeactivated; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)
	struct ANone* BP_Hamlet_Class_A_06_2_ExecuteUbergraph_HS_AW_Feature_Hamlet_Feldcroft_RefProperty; // 0x260(0x08)
	struct ANone* BP_Hamlet_Class_A_2_ExecuteUbergraph_HS_AW_Feature_Hamlet_Feldcroft_RefProperty; // 0x268(0x08)
	struct ANone* BP_Hamlet_Class_A_3_ExecuteUbergraph_HS_AW_Feature_Hamlet_Feldcroft_RefProperty; // 0x270(0x08)

	void EVC_01_Updated(struct UObject* Caller, struct FName& String); // Function HS_AW_Feature_Hamlet_Feldcroft.HS_AW_Feature_Hamlet_Feldcroft_C.EVC_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVL_02_Updated(struct UObject* Caller, struct FName& String); // Function HS_AW_Feature_Hamlet_Feldcroft.HS_AW_Feature_Hamlet_Feldcroft_C.EVL_02_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HS_AW_Feature_Hamlet_Feldcroft.HS_AW_Feature_Hamlet_Feldcroft_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void EVL_CONV_07_Updated(struct UObject* Caller, struct FName& String); // Function HS_AW_Feature_Hamlet_Feldcroft.HS_AW_Feature_Hamlet_Feldcroft_C.EVL_CONV_07_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AW_Feature_Hamlet_Feldcroft(int32_t EntryPoint); // Function HS_AW_Feature_Hamlet_Feldcroft.HS_AW_Feature_Hamlet_Feldcroft_C.ExecuteUbergraph_HS_AW_Feature_Hamlet_Feldcroft // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

