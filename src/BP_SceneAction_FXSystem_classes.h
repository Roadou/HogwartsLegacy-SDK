// BlueprintGeneratedClass BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C
// Size: 0x25c (Inherited: 0xa8)
struct UBP_SceneAction_FXSystem_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UFXSystemAsset* DefaultParticleSystem; // 0xb0(0x08)
	struct UFXSystemComponent* FXComponent; // 0xb8(0x08)
	struct TArray<struct FFXOverride> ParticleSystemOverrides; // 0xc0(0x10)
	struct FName AttachPointName; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FTransform Transform; // 0xe0(0x30)
	enum class EAttachLocation LocationType; // 0x110(0x01)
	enum class E_ParticleCompletionMethod CompletionMethod; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct TMap<struct FName, struct UBoolProvider*> BoolParameters; // 0x118(0x50)
	struct TMap<struct FName, struct UFloatProvider*> FloatParameters; // 0x168(0x50)
	struct TMap<struct FName, struct UTransformProvider*> VectorParameters; // 0x1b8(0x50)
	struct TMap<struct FName, struct UColorProvider*> ColorParameters; // 0x208(0x50)
	int32_t Translucent Sort Priority; // 0x258(0x04)

	void GetParticleSystem(struct UFXSystemAsset*& ParticleSystem); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.GetParticleSystem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnComplete(); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.OnComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnFXSystem(); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.SpawnFXSystem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsProxyRequiredBP(); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.IsProxyRequiredBP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool IsInstant(); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.IsInstant // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	struct FLinearColor GetActionColor(); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.GetActionColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38a7480
	struct FText GetDisplayName(); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.GetDisplayName // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnInstant(float Time, bool IsScrubbing); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.OnInstant // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetTimeInsideInterval(float Time, float LocalTime, bool IsScrubbing); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.OnSetTimeInsideInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_FXSystem(int32_t EntryPoint); // Function BP_SceneAction_FXSystem.BP_SceneAction_FXSystem_C.ExecuteUbergraph_BP_SceneAction_FXSystem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

