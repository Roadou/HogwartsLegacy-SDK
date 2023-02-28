// BlueprintGeneratedClass HN_AW_Mission.HN_AW_Mission_C
// Size: 0x260 (Inherited: 0x250)
struct AHN_AW_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ABP_BalloonGroup_C* BP_BalloonGroup_TrainStation_ExecuteUbergraph_HN_AW_Mission_RefProperty; // 0x258(0x08)

	void HST_01_Updated(struct UObject* Caller, struct FName& String); // Function HN_AW_Mission.HN_AW_Mission_C.HST_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ZSG_01_Updated(struct UObject* Caller, struct FName& String); // Function HN_AW_Mission.HN_AW_Mission_C.ZSG_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HN_AW_Mission.HN_AW_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_AW_Mission(int32_t EntryPoint); // Function HN_AW_Mission.HN_AW_Mission_C.ExecuteUbergraph_HN_AW_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

