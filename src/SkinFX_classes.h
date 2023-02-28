// Class SkinFX.LocatorTrackerLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULocatorTrackerLibrary : UBlueprintFunctionLibrary {

	void MakeSocketTracker(struct AActor* Actor, struct FName SocketName, struct FSocketTracker& Tracker, bool& bTrackerValid); // Function SkinFX.LocatorTrackerLibrary.MakeSocketTracker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e3200
	void MakeRefPoseTracker(struct AActor* Actor, struct FName BoneName, struct FRefPoseTracker& Tracker, bool& bTrackerValid); // Function SkinFX.LocatorTrackerLibrary.MakeRefPoseTracker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e3000
	void MakeComponentTracker(struct USceneComponent* Component, struct FLocatorTracker& Tracker, bool& bTrackerValid); // Function SkinFX.LocatorTrackerLibrary.MakeComponentTracker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e2ed0
	void MakeBoneTracker(struct AActor* Actor, struct FName BoneName, struct FBoneTracker& Tracker, bool& bTrackerValid); // Function SkinFX.LocatorTrackerLibrary.MakeBoneTracker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e2d10
	void MakeActorTracker(struct AActor* Actor, struct FActorTracker& Tracker, bool& bTrackerValid); // Function SkinFX.LocatorTrackerLibrary.MakeActorTracker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e2bb0
	void GetRefPoseTransform(struct AActor* Actor, struct FName BoneName, struct FTransform& Transform, bool& bValid); // Function SkinFX.LocatorTrackerLibrary.GetRefPoseTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17e2870
	void GetLocatorTrackerVelocity(struct FLocatorTracker& Tracker, struct FVector& Velocity, bool& bTrackerValid); // Function SkinFX.LocatorTrackerLibrary.GetLocatorTrackerVelocity // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x17e2720
	void GetLocatorTrackerValid(struct FLocatorTracker& Tracker, bool& bTrackerValid); // Function SkinFX.LocatorTrackerLibrary.GetLocatorTrackerValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17e2640
	void GetLocatorTrackerTransform(struct FLocatorTracker& Tracker, struct FTransform& Transform, bool& bTrackerValid); // Function SkinFX.LocatorTrackerLibrary.GetLocatorTrackerTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x17e2490
	void GetLocatorTrackerSceneComponent(struct FLocatorTracker& Tracker, struct USceneComponent*& SceneComponent, bool& bTrackerValid); // Function SkinFX.LocatorTrackerLibrary.GetLocatorTrackerSceneComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17e2340
	void GetLocatorTrackerActor(struct FLocatorTracker& Tracker, struct AActor*& Actor, bool& bTrackerValid); // Function SkinFX.LocatorTrackerLibrary.GetLocatorTrackerActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17e21f0
};

// Class SkinFX.NiagaraMaterialDriverComponent
// Size: 0x2b0 (Inherited: 0x220)
struct UNiagaraMaterialDriverComponent : USceneComponent {
	struct FNiagaraMaterialDriverSetup Setup; // 0x218(0x78)
	struct FNiagaraMaterialDriverState State; // 0x290(0x18)

	void Reset(); // Function SkinFX.NiagaraMaterialDriverComponent.Reset // (Native|Public|BlueprintCallable) // @ game+0x17e3930
	void OnNiagaraSystemFinished(struct UNiagaraComponent* PSystem); // Function SkinFX.NiagaraMaterialDriverComponent.OnNiagaraSystemFinished // (Native|Protected) // @ game+0x17e3440
};

// Class SkinFX.NiagaraMIDDriverComponent
// Size: 0x2c0 (Inherited: 0x2b0)
struct UNiagaraMIDDriverComponent : UNiagaraMaterialDriverComponent {
	struct TArray<struct TSoftObjectPtr<UMaterialInstanceDynamic>> MaterialInstanceDynamics; // 0x2a8(0x10)

	void RemoveMID(struct UMaterialInstanceDynamic* Mid); // Function SkinFX.NiagaraMIDDriverComponent.RemoveMID // (Final|Native|Public|BlueprintCallable) // @ game+0x17e36f0
	void EmptyMIDs(); // Function SkinFX.NiagaraMIDDriverComponent.EmptyMIDs // (Final|Native|Public|BlueprintCallable) // @ game+0x17e2170
	void AddMID(struct UMaterialInstanceDynamic* Mid); // Function SkinFX.NiagaraMIDDriverComponent.AddMID // (Final|Native|Public|BlueprintCallable) // @ game+0x17e1db0
};

// Class SkinFX.NiagaraSwapParamsDriverComponent
// Size: 0x300 (Inherited: 0x2b0)
struct UNiagaraSwapParamsDriverComponent : UNiagaraMaterialDriverComponent {
	struct FMaterialSwapParameters ParameterSet; // 0x2a8(0x50)
};

// Class SkinFX.NiagaraMaterialDriver
// Size: 0xb8 (Inherited: 0x28)
struct UNiagaraMaterialDriver : UObject {
	struct FNiagaraMaterialDriverSetup Setup; // 0x28(0x78)
	struct FNiagaraMaterialDriverState State; // 0xa0(0x18)

	void OnNiagaraSystemFinished(struct UNiagaraComponent* PSystem); // Function SkinFX.NiagaraMaterialDriver.OnNiagaraSystemFinished // (Native|Protected) // @ game+0x17e33b0
};

// Class SkinFX.NiagaraMaterialSwapDriver
// Size: 0x108 (Inherited: 0xb8)
struct UNiagaraMaterialSwapDriver : UNiagaraMaterialDriver {
	struct FMaterialSwapParameters ParameterSet; // 0xb8(0x50)
};

// Class SkinFX.SkinFX
// Size: 0x28 (Inherited: 0x28)
struct USkinFX : UBlueprintFunctionLibrary {

	struct FMaterialPermuterKey SkinFXNameMaterialPermuterKey(struct FName FX); // Function SkinFX.SkinFX.SkinFXNameMaterialPermuterKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x17e3b60
	void SkinFXName(struct ASkinFXDefinition* FX, struct FName& Name); // Function SkinFX.SkinFX.SkinFXName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17e2090
	struct FMaterialPermuterKey SkinFXMaterialPermuterKey(struct ASkinFXDefinition* FX); // Function SkinFX.SkinFX.SkinFXMaterialPermuterKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x17e3aa0
	struct FMaterialPermuterKey SkinFXEffectMaterialPermuterKey(struct ASkinFXDefinition* Effect); // Function SkinFX.SkinFX.SkinFXEffectMaterialPermuterKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x17e39e0
	void EffectName(struct ASkinFXDefinition* FX, struct FName& Name); // Function SkinFX.SkinFX.EffectName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e2090
	void ActorUpdateSkinFXRules(struct AActor* Actor, struct FName FX, struct FMaterialSwapRules newRules, bool& Result); // Function SkinFX.SkinFX.ActorUpdateSkinFXRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e1950
	void ActorStartSkinFXWithRulesAndInitialParameters(struct AActor* Actor, struct USkinFXComponent*& SkinFXComponent, struct FName StartFX, struct FMaterialSwapRules swapRules, struct FMaterialSwapParameters& parameterValues, bool detachAndDestroyWhenDone); // Function SkinFX.SkinFX.ActorStartSkinFXWithRulesAndInitialParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e1440
	void ActorStartSkinFXWithRules(struct AActor* Actor, struct USkinFXComponent*& SkinFXComponent, struct FName StartFX, struct FMaterialSwapRules swapRules, bool detachAndDestroyWhenDone); // Function SkinFX.SkinFX.ActorStartSkinFXWithRules // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e1020
	void ActorStartSkinFXWithInitialParameters(struct AActor* Actor, struct FName StartFX, struct FMaterialSwapParameters& parameterValues, struct USkinFXComponent*& SkinFXComponent, bool detachAndDestroyWhenDone); // Function SkinFX.SkinFX.ActorStartSkinFXWithInitialParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e0e00
	void ActorStartSkinFX(struct AActor* Actor, struct USkinFXComponent*& SkinFXComponent, struct FName StartFX, bool detachAndDestroyWhenDone); // Function SkinFX.SkinFX.ActorStartSkinFX // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e0ca0
	void ActorSetSkinFXTimeFactor(struct AActor* Actor, struct FName FXName, float TimeFactor, bool& Success); // Function SkinFX.SkinFX.ActorSetSkinFXTimeFactor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e0b50
	void ActorSetExternalVectorParameter(struct AActor* Actor, struct FName FXName, struct FName ParameterName, struct FVector Value, float packAlpha); // Function SkinFX.SkinFX.ActorSetExternalVectorParameter // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x17e09b0
	void ActorSetExternalTextureParameter(struct AActor* Owner, struct FName FXName, struct FName ParameterName, struct UTexture* Value); // Function SkinFX.SkinFX.ActorSetExternalTextureParameter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17e0860
	void ActorSetExternalScalarParameter(struct AActor* Actor, struct FName FXName, struct FName ParameterName, float Value); // Function SkinFX.SkinFX.ActorSetExternalScalarParameter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17e0710
	void ActorSetExternalParameters(struct AActor* Actor, struct FName FXName, struct FMaterialSwapParameters& parameterValues); // Function SkinFX.SkinFX.ActorSetExternalParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e0590
	void ActorSetExternalColorParameter(struct AActor* Actor, struct FName FXName, struct FName ParameterName, struct FLinearColor Value); // Function SkinFX.SkinFX.ActorSetExternalColorParameter // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x17e0440
	void ActorIsSkinFXRunning(struct AActor* Actor, struct FName FXName, bool& IsRunning); // Function SkinFX.SkinFX.ActorIsSkinFXRunning // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17e0330
	void ActorGetSkinFXTimeFactor(struct AActor* Actor, struct FName FXName, float& TimeFactor); // Function SkinFX.SkinFX.ActorGetSkinFXTimeFactor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17e0220
	void ActorGetSkinFX(struct AActor* Actor, struct USkinFXComponent*& SkinFXComponent); // Function SkinFX.SkinFX.ActorGetSkinFX // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17e0140
	void ActorEndSkinFX(struct AActor* Actor, struct FName endFX, enum class ESkinFXEffectEndStyle EndStyle); // Function SkinFX.SkinFX.ActorEndSkinFX // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17e0040
	void ActorEndAllSkinFX(struct AActor* Actor, enum class ESkinFXEffectEndStyle EndStyle); // Function SkinFX.SkinFX.ActorEndAllSkinFX // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17dff80
	void ActorAnySkinFXRunning(struct AActor* Actor, bool& IsRunning); // Function SkinFX.SkinFX.ActorAnySkinFXRunning // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17dfeb0
	void ActorAddSkinFXComponent(struct AActor* Actor, struct USkinFXComponent*& SkinFXComponent, bool detachAndDestroyWhenDone); // Function SkinFX.SkinFX.ActorAddSkinFXComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17dfd90
};

// Class SkinFX.SkinFXAutoTriggerDriver
// Size: 0x30 (Inherited: 0x28)
struct USkinFXAutoTriggerDriver : UObject {
	bool bDisabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class SkinFX.SkinFXAutoTriggerComponent
// Size: 0x150 (Inherited: 0xc8)
struct USkinFXAutoTriggerComponent : UActorComponent {
	struct TArray<struct USkinFXAutoTriggerDriver*> Drivers; // 0xc8(0x10)
	struct FMulticastInlineDelegate DynamicEventDelegate; // 0xd8(0x10)
	struct FSkinFXAutoTriggerDriverTracker Tracker; // 0xe8(0x60)
	bool bDisabled; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)

	void SetEnabled(bool Enabled); // Function SkinFX.SkinFXAutoTriggerComponent.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x17e3950
	void RemoveDriverByName(struct FName TriggerName); // Function SkinFX.SkinFXAutoTriggerComponent.RemoveDriverByName // (Final|Native|Public|BlueprintCallable) // @ game+0x17e3660
	void RemoveDriver(struct USkinFXAutoTriggerDriver* Driver); // Function SkinFX.SkinFXAutoTriggerComponent.RemoveDriver // (Final|Native|Public|BlueprintCallable) // @ game+0x17e35d0
	void RefreshAll(struct UObject* WorldContextObject); // Function SkinFX.SkinFXAutoTriggerComponent.RefreshAll // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17e3550
	void Refresh(struct AActor* Actor); // Function SkinFX.SkinFXAutoTriggerComponent.Refresh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17e34d0
	bool IsEnabled(); // Function SkinFX.SkinFXAutoTriggerComponent.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e2b80
	bool HasDriverByName(struct FName TriggerName); // Function SkinFX.SkinFXAutoTriggerComponent.HasDriverByName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e2ae0
	bool HasDriver(struct USkinFXAutoTriggerDriver* Driver); // Function SkinFX.SkinFXAutoTriggerComponent.HasDriver // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e2a40
	void AddDriver(struct USkinFXAutoTriggerDriver* Driver); // Function SkinFX.SkinFXAutoTriggerComponent.AddDriver // (Final|Native|Public|BlueprintCallable) // @ game+0x17e1d20
};

// Class SkinFX.SkinFXBlueprintInterface
// Size: 0x28 (Inherited: 0x28)
struct USkinFXBlueprintInterface : UInterface {
};

// Class SkinFX.SkinFXDefinition
// Size: 0x5c0 (Inherited: 0x248)
struct ASkinFXDefinition : AActor {
	enum class ESkinFXEffectPriority Priority; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	struct FName MaterialSuffixOverride; // 0x24c(0x08)
	struct FSkinFXSubTypeProperty MaterialSubTypeOverride; // 0x254(0x08)
	enum class ESkinFXEffectSwapType SwapType; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct TSoftObjectPtr<UMaterialInterface> OverrideMaterial; // 0x260(0x28)
	struct FMaterialSwapRules DefaultSwapRules; // 0x288(0xe0)
	struct TArray<struct UMaterialSwapMeshState*> DefaultMeshStates; // 0x368(0x10)
	struct FSkinFXASREnvelope ASREnvelope; // 0x378(0x2c)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct TArray<struct USkinFXEventTrigger*> EventTriggers; // 0x3a8(0x10)
	struct TArray<struct FSkinFXScalar> Scalars; // 0x3b8(0x10)
	struct TArray<struct FSkinFXScalarCurve> ScalarCurves; // 0x3c8(0x10)
	struct TArray<struct FSkinFXColor> Colors; // 0x3d8(0x10)
	struct TArray<struct FSkinFXColorCurve> ColorCurves; // 0x3e8(0x10)
	struct TArray<struct FSkinFXSocket> Sockets; // 0x3f8(0x10)
	struct TArray<struct FSkinFXSocketLerp> LerpSockets; // 0x408(0x10)
	struct TArray<struct FSkinFXTexture> Textures; // 0x418(0x10)
	struct TArray<struct USkinFXParameterDriver*> Drivers; // 0x428(0x10)
	struct TArray<struct FSkinFXFunctionMod> FunctionMods; // 0x438(0x10)
	struct TArray<struct FSkinFXNoiseFunctionMod> NoiseFunctionMods; // 0x448(0x10)
	struct FNiagaraMaterialDriverSetup NiagaraParameters; // 0x458(0x78)
	struct FSkinFXStandardParamsInitial StandardParamsStartOnly; // 0x4d0(0x60)
	struct FSkinFXStandardParams StandardParamsEveryFrame; // 0x530(0x78)
	struct TArray<struct TSoftObjectPtr<UObject>> ExtraPreloads; // 0x5a8(0x10)
	bool bAllowInBackground; // 0x5b8(0x01)
	enum class ESkinFXEffectTimeSource TimeSource; // 0x5b9(0x01)
	bool bDestroyActorWhenDone; // 0x5ba(0x01)
	bool bFullRetriggerOnRestart; // 0x5bb(0x01)
	bool bShowSwapErrors; // 0x5bc(0x01)
	char pad_5BD[0x3]; // 0x5bd(0x03)
};

// Class SkinFX.SkinFXDefinitionGraph
// Size: 0x5c8 (Inherited: 0x5c0)
struct ASkinFXDefinitionGraph : ASkinFXDefinition {
	bool bWantPerTickUpdateEvent; // 0x5c0(0x01)
	bool bSignalFinished; // 0x5c1(0x01)
	char pad_5C2[0x6]; // 0x5c2(0x06)

	void WantPerTickUpdateEvent(bool tickMe); // Function SkinFX.SkinFXDefinitionGraph.WantPerTickUpdateEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x17e8750
	void SkinFXUpdateTick(float DeltaTime); // Function SkinFX.SkinFXDefinitionGraph.SkinFXUpdateTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXSignalFinished(); // Function SkinFX.SkinFXDefinitionGraph.SkinFXSignalFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x17e7aa0
	void SkinFXSetVectorParameter(struct FName ParameterName, struct FVector Value, float packAlpha); // Function SkinFX.SkinFXDefinitionGraph.SkinFXSetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x17e7960
	void SkinFXSetTextureParameter(struct FName ParameterName, struct UTexture* Value); // Function SkinFX.SkinFXDefinitionGraph.SkinFXSetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x17e7770
	void SkinFXSetScalarParameter(struct FName ParameterName, float Value); // Function SkinFX.SkinFXDefinitionGraph.SkinFXSetScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x17e76a0
	void SkinFXSetParameters(struct FMaterialSwapParameters& parameterValues); // Function SkinFX.SkinFXDefinitionGraph.SkinFXSetParameters // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x17e75a0
	void SkinFXSetColorParameter(struct FName ParameterName, struct FLinearColor Value); // Function SkinFX.SkinFXDefinitionGraph.SkinFXSetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x17e6eb0
	void SkinFXNotifyStart(); // Function SkinFX.SkinFXDefinitionGraph.SkinFXNotifyStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyRetrigger(float CurrentTime); // Function SkinFX.SkinFXDefinitionGraph.SkinFXNotifyRetrigger // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyKill(); // Function SkinFX.SkinFXDefinitionGraph.SkinFXNotifyKill // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyEnd(enum class ESkinFXEffectEndStyle EndStyle, float CurrentTime); // Function SkinFX.SkinFXDefinitionGraph.SkinFXNotifyEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXInitialUpdate(); // Function SkinFX.SkinFXDefinitionGraph.SkinFXInitialUpdate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXGetSkinFXComponent(struct USkinFXComponent*& RunningSkinFXComponent); // Function SkinFX.SkinFXDefinitionGraph.SkinFXGetSkinFXComponent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6c90
	void SkinFXGetMyEffectName(struct FName& MyEffectName); // Function SkinFX.SkinFXDefinitionGraph.SkinFXGetMyEffectName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6c00
	float SkinFXGetEnvelopeValueLinear(); // Function SkinFX.SkinFXDefinitionGraph.SkinFXGetEnvelopeValueLinear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6bd0
	float SkinFXGetEnvelopeValueCurve(); // Function SkinFX.SkinFXDefinitionGraph.SkinFXGetEnvelopeValueCurve // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6ba0
	void SkinFXGetCurrentScalarParameter(struct FName ParameterName, float& ParameterValue, bool& bParameterFound); // Function SkinFX.SkinFXDefinitionGraph.SkinFXGetCurrentScalarParameter // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6820
	void SkinFXGetCurrentParameters(struct FMaterialSwapParameters& CurrentParameters); // Function SkinFX.SkinFXDefinitionGraph.SkinFXGetCurrentParameters // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e65d0
	void SkinFXGetCurrentColorParameter(struct FName ParameterName, struct FLinearColor& ParameterValue, bool& bParameterFound); // Function SkinFX.SkinFXDefinitionGraph.SkinFXGetCurrentColorParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6340
	void SkinFXGetAffectedActor(struct AActor*& AffectedActor); // Function SkinFX.SkinFXDefinitionGraph.SkinFXGetAffectedActor // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17e62b0
	void SkinFXEventNotify(struct USkinFXComponent* RunningSkinFXComponent, enum class ESkinFXDelegateEvent Event); // Function SkinFX.SkinFXDefinitionGraph.SkinFXEventNotify // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	bool SkinFXApplyParameters(); // Function SkinFX.SkinFXDefinitionGraph.SkinFXApplyParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x17e6090
};

// Class SkinFX.SkinFXComponent
// Size: 0x108 (Inherited: 0xc8)
struct USkinFXComponent : UActorComponent {
	struct FMulticastInlineDelegate DynamicEventDelegate; // 0xc8(0x10)
	struct TArray<struct FSkinFXRunningEffectInstance> EffectStack; // 0xd8(0x10)
	struct TArray<struct FSkinFXExternalContext> ExternalContexts; // 0xe8(0x10)
	struct FName FXSignalKillOwner; // 0xf8(0x08)
	bool bOwnerKilled; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)

	bool SkinFXUpdateRules(struct FName FX, struct FMaterialSwapRules newRules); // Function SkinFX.SkinFXComponent.SkinFXUpdateRules // (Final|Native|Public|BlueprintCallable) // @ game+0x17e8410
	bool SkinFXStartWithRulesAndEnvelope(struct ASkinFXDefinition* FX, struct FMaterialSwapRules swapRules, struct FSkinFXASREnvelope UseEnvelope); // Function SkinFX.SkinFXComponent.SkinFXStartWithRulesAndEnvelope // (Final|Native|Public|BlueprintCallable) // @ game+0x17e7ff0
	bool SkinFXStartWithRules(struct ASkinFXDefinition* FX, struct FMaterialSwapRules swapRules); // Function SkinFX.SkinFXComponent.SkinFXStartWithRules // (Final|Native|Public|BlueprintCallable) // @ game+0x17e7cb0
	bool SkinFXStartWithEnvelope(struct ASkinFXDefinition* FX, struct FSkinFXASREnvelope UseEnvelope); // Function SkinFX.SkinFXComponent.SkinFXStartWithEnvelope // (Final|Native|Public|BlueprintCallable) // @ game+0x17e7b60
	bool SkinFXStart(struct ASkinFXDefinition* FX); // Function SkinFX.SkinFXComponent.SkinFXStart // (Final|Native|Public|BlueprintCallable) // @ game+0x17e7ac0
	void SkinFXSetTimeFactor(struct ASkinFXDefinition* FX, float TimeFactor, bool& Success); // Function SkinFX.SkinFXComponent.SkinFXSetTimeFactor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x17e7840
	void SkinFXSetExternalVectorParameter(struct ASkinFXDefinition* FX, struct FName ParameterName, struct FVector Value, float packAlpha); // Function SkinFX.SkinFXComponent.SkinFXSetExternalVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x17e7420
	void SkinFXSetExternalTextureParameter(struct ASkinFXDefinition* FX, struct FName ParameterName, struct UTexture* Value); // Function SkinFX.SkinFXComponent.SkinFXSetExternalTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x17e7310
	void SkinFXSetExternalScalarParameter(struct ASkinFXDefinition* FX, struct FName ParameterName, float Value); // Function SkinFX.SkinFXComponent.SkinFXSetExternalScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x17e71f0
	void SkinFXSetExternalParameters(struct ASkinFXDefinition* FX, struct FMaterialSwapParameters& parameterValues); // Function SkinFX.SkinFXComponent.SkinFXSetExternalParameters // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x17e70a0
	void SkinFXSetExternalColorParameter(struct ASkinFXDefinition* FX, struct FName ParameterName, struct FLinearColor Value); // Function SkinFX.SkinFXComponent.SkinFXSetExternalColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x17e6f80
	bool SkinFXIsRunning(struct ASkinFXDefinition* FX); // Function SkinFX.SkinFXComponent.SkinFXIsRunning // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6e10
	void SkinFXGetTimeFactor(struct ASkinFXDefinition* FX, float& TimeFactor); // Function SkinFX.SkinFXComponent.SkinFXGetTimeFactor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x17e6d30
	void SkinFXGetEffectBlueprintGraph(struct ASkinFXDefinition* FX, struct ASkinFXDefinitionGraph*& EffectDefinitionGraph); // Function SkinFX.SkinFXComponent.SkinFXGetEffectBlueprintGraph // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6ac0
	void SkinFXGetCurrentScalarParameter(struct ASkinFXDefinition* FX, struct FName ParameterName, float& ParameterValue, bool& bParameterFound); // Function SkinFX.SkinFXComponent.SkinFXGetCurrentScalarParameter // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6950
	void SkinFXGetCurrentParameters(struct ASkinFXDefinition* FX, struct FMaterialSwapParameters& CurrentParameters); // Function SkinFX.SkinFXComponent.SkinFXGetCurrentParameters // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e66d0
	void SkinFXGetCurrentColorParameter(struct ASkinFXDefinition* FX, struct FName ParameterName, struct FLinearColor& ParameterValue, bool& bParameterFound); // Function SkinFX.SkinFXComponent.SkinFXGetCurrentColorParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6460
	bool SkinFXEndAll(enum class ESkinFXEffectEndStyle EndStyle); // Function SkinFX.SkinFXComponent.SkinFXEndAll // (Final|Native|Public|BlueprintCallable) // @ game+0x17e6220
	bool SkinFXEnd(struct ASkinFXDefinition* FX, enum class ESkinFXEffectEndStyle EndStyle); // Function SkinFX.SkinFXComponent.SkinFXEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x17e6150
	void SkinFXClearExternalParameters(struct ASkinFXDefinition* FX); // Function SkinFX.SkinFXComponent.SkinFXClearExternalParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x17e60c0
	bool SkinFXAnyRunning(); // Function SkinFX.SkinFXComponent.SkinFXAnyRunning // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17e6060
};

// Class SkinFX.SkinFXComponentAutoStart
// Size: 0x128 (Inherited: 0x108)
struct USkinFXComponentAutoStart : USkinFXComponent {
	struct ASkinFXDefinition* AutoStartEffect; // 0x108(0x08)
	float InitialDelay; // 0x110(0x04)
	float RepeatDelay; // 0x114(0x04)
	bool bRepeat; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float Timer; // 0x11c(0x04)
	enum class ESkinFXComponentAutoStartState State; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
};

// Class SkinFX.SkinFXEventTrigger
// Size: 0x28 (Inherited: 0x28)
struct USkinFXEventTrigger : UObject {
};

// Class SkinFX.SkinFXEventTriggerFiltered
// Size: 0x30 (Inherited: 0x28)
struct USkinFXEventTriggerFiltered : USkinFXEventTrigger {
	int32_t Events; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class SkinFX.SkinFXLibrary
// Size: 0x50 (Inherited: 0x30)
struct USkinFXLibrary : UDataAsset {
	struct TArray<struct FSkinFXEffectTypeOverrideEntry> TypeOverrides; // 0x30(0x10)
	struct TArray<struct FSkinFXEffectLibraryEntry> EffectEntries; // 0x40(0x10)
};

// Class SkinFX.SkinFXParameterDriver
// Size: 0x28 (Inherited: 0x28)
struct USkinFXParameterDriver : UObject {
};

// Class SkinFX.SkinFXParameterDriverMod
// Size: 0x30 (Inherited: 0x28)
struct USkinFXParameterDriverMod : USkinFXParameterDriver {
	struct FSkinFXMaterialParamProperty Parameter; // 0x28(0x08)
};

// Class SkinFX.SkinFXParameterDriverEndEffect
// Size: 0x28 (Inherited: 0x28)
struct USkinFXParameterDriverEndEffect : USkinFXParameterDriver {
};

// Class SkinFX.SkinFXParameterDriverModScalar
// Size: 0x40 (Inherited: 0x30)
struct USkinFXParameterDriverModScalar : USkinFXParameterDriverMod {
	struct FSkinFXMaterialScalarProperty ModByParameter; // 0x30(0x08)
	float DefaultValue; // 0x38(0x04)
	bool bUseDefaultValue; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class SkinFX.SkinFXParameterLocatorListLerpIndexDriver
// Size: 0x28 (Inherited: 0x28)
struct USkinFXParameterLocatorListLerpIndexDriver : UObject {
};

// Class SkinFX.SkinFXParameterLocatorListLerpDriver
// Size: 0x50 (Inherited: 0x28)
struct USkinFXParameterLocatorListLerpDriver : USkinFXParameterDriver {
	struct FSkinFXMaterialVectorProperty Parameter; // 0x28(0x08)
	struct TArray<struct FSkinFXLocatorListPositionalSource> Locators; // 0x30(0x10)
	struct USkinFXParameterLocatorListLerpIndexDriver* LerpIndexDriver; // 0x40(0x08)
	bool bLerpExtraColorsUsingHSV; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class SkinFX.SkinFXParameterLocatorListLerpIndexDriverDefault
// Size: 0x28 (Inherited: 0x28)
struct USkinFXParameterLocatorListLerpIndexDriverDefault : USkinFXParameterLocatorListLerpIndexDriver {
};

// Class SkinFX.SkinFXParameterLocatorListLerpIndexDriverFixedTime
// Size: 0x30 (Inherited: 0x28)
struct USkinFXParameterLocatorListLerpIndexDriverFixedTime : USkinFXParameterLocatorListLerpIndexDriver {
	float TotalLerpTime; // 0x28(0x04)
	bool bLooped; // 0x2c(0x01)
	bool bHermite; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// Class SkinFX.SkinFXParameterLocatorListLerpIndexDriverPerLocatorTime
// Size: 0x38 (Inherited: 0x28)
struct USkinFXParameterLocatorListLerpIndexDriverPerLocatorTime : USkinFXParameterLocatorListLerpIndexDriver {
	float PerLocatorTimeMin; // 0x28(0x04)
	float PerLocatorTimeMax; // 0x2c(0x04)
	bool bSmooth; // 0x30(0x01)
	bool bHermite; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// Class SkinFX.SkinFXParameterLocatorListLerpIndexDriverCurve
// Size: 0x38 (Inherited: 0x28)
struct USkinFXParameterLocatorListLerpIndexDriverCurve : USkinFXParameterLocatorListLerpIndexDriver {
	struct UCurveFloat* Curve; // 0x28(0x08)
	bool bHermite; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class SkinFX.SkinFXParameterLocatorListLerpIndexDriverRandom
// Size: 0x38 (Inherited: 0x28)
struct USkinFXParameterLocatorListLerpIndexDriverRandom : USkinFXParameterLocatorListLerpIndexDriver {
	float MinTimeBetweenChanges; // 0x28(0x04)
	float MaxTimeBetweenChanges; // 0x2c(0x04)
	bool bSmooth; // 0x30(0x01)
	bool bHermite; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// Class SkinFX.SkinFXPreviewComponent
// Size: 0x220 (Inherited: 0x220)
struct USkinFXPreviewComponent : USceneComponent {

	void ResetEnvelope(); // Function SkinFX.SkinFXPreviewComponent.ResetEnvelope // (Final|Native|Public|BlueprintCallable) // @ game+0x1074730
	void ResetAll(); // Function SkinFX.SkinFXPreviewComponent.ResetAll // (Final|Native|Public|BlueprintCallable) // @ game+0x1074730
	void ConstructPreview(); // Function SkinFX.SkinFXPreviewComponent.ConstructPreview // (Final|Native|Public|BlueprintCallable) // @ game+0x17edbf0
};

// Class SkinFX.SkinFXSingleton
// Size: 0x2e0 (Inherited: 0x248)
struct ASkinFXSingleton : AActor {
	struct USkinFXLibrary* Library; // 0x248(0x08)
	struct TMap<struct ASkinFXDefinition*, struct FSkinFXEffectDefinition> Definitions; // 0x250(0x50)
	struct USimpleDataSet* DataDependencies; // 0x2a0(0x08)
	char pad_2A8[0x30]; // 0x2a8(0x30)
	bool bSignalledAllReady; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
};

