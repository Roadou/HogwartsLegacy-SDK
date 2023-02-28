// BlueprintGeneratedClass BP_SceneAction_SetFXParam.BP_SceneAction_SetFXParam_C
// Size: 0x248 (Inherited: 0xa8)
struct UBP_SceneAction_SetFXParam_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UFXSystemComponent* FXComponent; // 0xb0(0x08)
	struct TMap<struct FName, struct UBoolProvider*> BoolParameters; // 0xb8(0x50)
	struct TMap<struct FName, struct UIntProvider*> IntParameters; // 0x108(0x50)
	struct TMap<struct FName, struct UFloatProvider*> FloatParameters; // 0x158(0x50)
	struct TMap<struct FName, struct UTransformProvider*> VectorParameters; // 0x1a8(0x50)
	struct TMap<struct FName, struct UColorProvider*> ColorParameters; // 0x1f8(0x50)

	bool IsProxyRequiredBP(); // Function BP_SceneAction_SetFXParam.BP_SceneAction_SetFXParam_C.IsProxyRequiredBP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	struct FLinearColor GetActionColor(); // Function BP_SceneAction_SetFXParam.BP_SceneAction_SetFXParam_C.GetActionColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	struct FText GetDisplayName(); // Function BP_SceneAction_SetFXParam.BP_SceneAction_SetFXParam_C.GetDisplayName // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_SetFXParam.BP_SceneAction_SetFXParam_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_SetFXParam.BP_SceneAction_SetFXParam_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetTimeInsideInterval(float Time, float LocalTime, bool IsScrubbing); // Function BP_SceneAction_SetFXParam.BP_SceneAction_SetFXParam_C.OnSetTimeInsideInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_SetFXParam(int32_t EntryPoint); // Function BP_SceneAction_SetFXParam.BP_SceneAction_SetFXParam_C.ExecuteUbergraph_BP_SceneAction_SetFXParam // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

