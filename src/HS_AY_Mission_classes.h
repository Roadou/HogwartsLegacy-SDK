// BlueprintGeneratedClass HS_AY_Mission.HS_AY_Mission_C
// Size: 0x308 (Inherited: 0x250)
struct AHS_AY_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TSoftObjectPtr<ANone> HamletRef; // 0x258(0x28)
	struct FSceneRigParameters In Parameter; // 0x280(0x88)

	void ReceiveBeginPlay(); // Function HS_AY_Mission.HS_AY_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void COM_37_Updated(struct UObject* Caller, struct FName& String); // Function HS_AY_Mission.HS_AY_Mission_C.COM_37_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AY_Mission(int32_t EntryPoint); // Function HS_AY_Mission.HS_AY_Mission_C.ExecuteUbergraph_HS_AY_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

