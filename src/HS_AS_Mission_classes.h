// BlueprintGeneratedClass HS_AS_Mission.HS_AS_Mission_C
// Size: 0x260 (Inherited: 0x250)
struct AHS_AS_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ANone* BP_BalloonGroup2_2_ExecuteUbergraph_HS_AS_Mission_RefProperty; // 0x258(0x08)

	void ZZM_01_Updated(struct UObject* Caller, struct FName& String); // Function HS_AS_Mission.HS_AS_Mission_C.ZZM_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HS_AS_Mission.HS_AS_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ZZM_01_Tower_Updated(struct UObject* Caller, struct FName& String); // Function HS_AS_Mission.HS_AS_Mission_C.ZZM_01_Tower_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BalloonPopped(struct UObject* Caller); // Function HS_AS_Mission.HS_AS_Mission_C.BalloonPopped // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AS_Mission(int32_t EntryPoint); // Function HS_AS_Mission.HS_AS_Mission_C.ExecuteUbergraph_HS_AS_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

