// BlueprintGeneratedClass HN_AS_Mission.HN_AS_Mission_C
// Size: 0x268 (Inherited: 0x250)
struct AHN_AS_Mission_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct AStaticMeshActor* SM_OL_CliffRock_B_ExecuteUbergraph_HN_AS_Mission_RefProperty; // 0x258(0x08)
	struct ANone* BP_MissionVO_COM8_DorothyBeckons_ExecuteUbergraph_HN_AS_Mission_RefProperty; // 0x260(0x08)

	void ReceiveBeginPlay(); // Function HN_AS_Mission.HN_AS_Mission_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function HN_AS_Mission.HN_AS_Mission_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_08_Updated(struct UObject* Caller, struct FName& String); // Function HN_AS_Mission.HN_AS_Mission_C.COM_08_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_AS_Mission(int32_t EntryPoint); // Function HN_AS_Mission.HN_AS_Mission_C.ExecuteUbergraph_HN_AS_Mission // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

