// BlueprintGeneratedClass FO_AW_Mission.FO_AW_Mission_C
// Size: 0x260 (Inherited: 0x250)
struct AFO_AW_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FName NTR_01_MissionName; // 0x258(0x08)

	void NTR_01_Updated(struct UObject* Caller, struct FName& String); // Function FO_AW_Mission.FO_AW_Mission_C.NTR_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function FO_AW_Mission.FO_AW_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_FO_AW_Mission(int32_t EntryPoint); // Function FO_AW_Mission.FO_AW_Mission_C.ExecuteUbergraph_FO_AW_Mission // (Final|UbergraphFunction) // @ game+0x38a7480
};

