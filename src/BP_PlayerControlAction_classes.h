// BlueprintGeneratedClass BP_PlayerControlAction.BP_PlayerControlAction_C
// Size: 0xba (Inherited: 0xa8)
struct UBP_PlayerControlAction_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool EnableCasualMode; // 0xb0(0x01)
	bool DisableMoveInput; // 0xb1(0x01)
	bool DisableJumping; // 0xb2(0x01)
	bool DisableDodging; // 0xb3(0x01)
	bool DisableSpells; // 0xb4(0x01)
	bool DisableAimMode; // 0xb5(0x01)
	bool DisableIdleBreaks; // 0xb6(0x01)
	bool DisableUIMenus; // 0xb7(0x01)
	bool DisableContextualInput; // 0xb8(0x01)
	bool DisablePhotoMode; // 0xb9(0x01)

	struct FLinearColor GetActionColor(); // Function BP_PlayerControlAction.BP_PlayerControlAction_C.GetActionColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	struct FText GetDisplayName(); // Function BP_PlayerControlAction.BP_PlayerControlAction_C.GetDisplayName // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool IsProxyRequiredBP(); // Function BP_PlayerControlAction.BP_PlayerControlAction_C.IsProxyRequiredBP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_PlayerControlAction.BP_PlayerControlAction_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_PlayerControlAction.BP_PlayerControlAction_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PlayerControlAction(int32_t EntryPoint); // Function BP_PlayerControlAction.BP_PlayerControlAction_C.ExecuteUbergraph_BP_PlayerControlAction // (Final|UbergraphFunction) // @ game+0x38a7480
};

