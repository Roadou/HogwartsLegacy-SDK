// BlueprintGeneratedClass HN_AP_Render.HN_AP_Render_C
// Size: 0x268 (Inherited: 0x250)
struct AHN_AP_Render_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ABP_Cav05_Entrance_Broken_C* BP_Cav05_Entrance_Broken_2_ExecuteUbergraph_HN_AP_Render_RefProperty; // 0x258(0x08)
	struct ABP_Cav05_Entrance_Intact_C* BP_Cav05_Entrance_Intact_2_ExecuteUbergraph_HN_AP_Render_RefProperty; // 0x260(0x08)

	void ReceiveBeginPlay(); // Function HN_AP_Render.HN_AP_Render_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void EVJ_ClearEntranceBlocker(struct UObject* Caller); // Function HN_AP_Render.HN_AP_Render_C.EVJ_ClearEntranceBlocker // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_AP_Render(int32_t EntryPoint); // Function HN_AP_Render.HN_AP_Render_C.ExecuteUbergraph_HN_AP_Render // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

