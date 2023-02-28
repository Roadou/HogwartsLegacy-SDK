// BlueprintGeneratedClass BP_SceneAction_ShadowSwitch.BP_SceneAction_ShadowSwitch_C
// Size: 0x108 (Inherited: 0xa8)
struct UBP_SceneAction_ShadowSwitch_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool bShadowsOn; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TMap<struct ULightComponent*, bool> LightToInitialShadowsMap; // 0xb8(0x50)

	struct FText GetDisplayName(); // Function BP_SceneAction_ShadowSwitch.BP_SceneAction_ShadowSwitch_C.GetDisplayName // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_ShadowSwitch.BP_SceneAction_ShadowSwitch_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_ShadowSwitch.BP_SceneAction_ShadowSwitch_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_ShadowSwitch(int32_t EntryPoint); // Function BP_SceneAction_ShadowSwitch.BP_SceneAction_ShadowSwitch_C.ExecuteUbergraph_BP_SceneAction_ShadowSwitch // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

