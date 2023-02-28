// BlueprintGeneratedClass BP_SceneAction_ActivateFX.BP_SceneAction_ActivateFX_C
// Size: 0xb1 (Inherited: 0xa8)
struct UBP_SceneAction_ActivateFX_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool bInstant; // 0xb0(0x01)

	bool IsInstant(); // Function BP_SceneAction_ActivateFX.BP_SceneAction_ActivateFX_C.IsInstant // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool IsProxyRequiredBP(); // Function BP_SceneAction_ActivateFX.BP_SceneAction_ActivateFX_C.IsProxyRequiredBP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	struct FLinearColor GetActionColor(); // Function BP_SceneAction_ActivateFX.BP_SceneAction_ActivateFX_C.GetActionColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	struct FText GetDisplayName(); // Function BP_SceneAction_ActivateFX.BP_SceneAction_ActivateFX_C.GetDisplayName // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_ActivateFX.BP_SceneAction_ActivateFX_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_ActivateFX.BP_SceneAction_ActivateFX_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnInstant(float Time, bool IsScrubbing); // Function BP_SceneAction_ActivateFX.BP_SceneAction_ActivateFX_C.OnInstant // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_ActivateFX(int32_t EntryPoint); // Function BP_SceneAction_ActivateFX.BP_SceneAction_ActivateFX_C.ExecuteUbergraph_BP_SceneAction_ActivateFX // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

