// BlueprintGeneratedClass BP_SceneAction_FlooAdvanceTime.BP_SceneAction_FlooAdvanceTime_C
// Size: 0xb0 (Inherited: 0xa8)
struct UBP_SceneAction_FlooAdvanceTime_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)

	void AdvanceTime(); // Function BP_SceneAction_FlooAdvanceTime.BP_SceneAction_FlooAdvanceTime_C.AdvanceTime // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsInstant(); // Function BP_SceneAction_FlooAdvanceTime.BP_SceneAction_FlooAdvanceTime_C.IsInstant // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnInstant(float Time, bool IsScrubbing); // Function BP_SceneAction_FlooAdvanceTime.BP_SceneAction_FlooAdvanceTime_C.OnInstant // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_FlooAdvanceTime(int32_t EntryPoint); // Function BP_SceneAction_FlooAdvanceTime.BP_SceneAction_FlooAdvanceTime_C.ExecuteUbergraph_BP_SceneAction_FlooAdvanceTime // (Final|UbergraphFunction) // @ game+0x38a7480
};

