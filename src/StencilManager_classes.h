// Class StencilManager.LocalStencilEffectActorOverrides
// Size: 0x50 (Inherited: 0x30)
struct ULocalStencilEffectActorOverrides : UDataAsset {
	struct TArray<struct FLocalStencilEffectActorOverride> GeneralActorOverrides; // 0x30(0x10)
	struct TArray<struct FLocalStencilEffectActorOverrideList> EffectOverrides; // 0x40(0x10)

	void Validate(); // Function StencilManager.LocalStencilEffectActorOverrides.Validate // (Final|Native|Public) // @ game+0x1074730
};

// Class StencilManager.LocalStencilBoundsHintComponentBase
// Size: 0x220 (Inherited: 0x220)
struct ULocalStencilBoundsHintComponentBase : USceneComponent {
};

// Class StencilManager.LocalStencilBoundsHintComponent
// Size: 0x220 (Inherited: 0x220)
struct ULocalStencilBoundsHintComponent : ULocalStencilBoundsHintComponentBase {
	enum class ELocalStencilBoundsHintMode Mode; // 0x218(0x01)
	bool bIgnoreVisibility; // 0x219(0x01)
	bool bEnabled; // 0x21a(0x01)
};

// Class StencilManager.LocalStencilComponentBase
// Size: 0x2e0 (Inherited: 0xc8)
struct ULocalStencilComponentBase : UActorComponent {
	struct UStaticMesh* Mesh; // 0xc8(0x08)
	float MeshScaleFactor; // 0xd0(0x04)
	int32_t TranslucentSortPriority; // 0xd4(0x04)
	bool bSetTranslucentSortPriority; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FLocalStencilEffect CurrentEffect; // 0xe0(0x1d0)
	struct FBox WorldObjectBounds; // 0x2b0(0x1c)
	float Age; // 0x2cc(0x04)
	float FadeInAge; // 0x2d0(0x04)
	float FadeOutAge; // 0x2d4(0x04)
	enum class ELocalStencilMaterialMode MaterialMode; // 0x2d8(0x01)
	bool bEffectActive; // 0x2d9(0x01)
	bool bStencilManagerLock; // 0x2da(0x01)
	bool bFadingOut; // 0x2db(0x01)
	char pad_2DC[0x4]; // 0x2dc(0x04)

	bool StartLocalStencilEffect(struct FLocalStencilEffect Effect); // Function StencilManager.LocalStencilComponentBase.StartLocalStencilEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x17b76f0
	void LocalStencilEffectIsRunning(bool& bIsRunning, struct FLocalStencilEffect& RunningEffect); // Function StencilManager.LocalStencilComponentBase.LocalStencilEffectIsRunning // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17b7570
	bool EndLocalStencilEffect(); // Function StencilManager.LocalStencilComponentBase.EndLocalStencilEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x17b7540
	void ActorStartLocalStencilEffect(struct AActor* Actor, struct FLocalStencilEffect Effect, bool& Success); // Function StencilManager.LocalStencilComponentBase.ActorStartLocalStencilEffect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17b7340
	void ActorLocalStencilEffectIsRunning(struct AActor* Actor, bool& bIsRunning, struct FLocalStencilEffect& RunningEffect); // Function StencilManager.LocalStencilComponentBase.ActorLocalStencilEffectIsRunning // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17b71a0
	void ActorEndLocalStencilEffect(struct AActor* Actor, bool& Success); // Function StencilManager.LocalStencilComponentBase.ActorEndLocalStencilEffect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17b70c0
};

// Class StencilManager.LocalStencilComponent
// Size: 0x340 (Inherited: 0x2e0)
struct ULocalStencilComponent : ULocalStencilComponentBase {
	struct FLocalStencilEffectMesh EffectMesh; // 0x2e0(0x60)
};

// Class StencilManager.LocalStencilComponentOrientCamera
// Size: 0x350 (Inherited: 0x340)
struct ULocalStencilComponentOrientCamera : ULocalStencilComponent {
	float MeshNearClipTweak; // 0x340(0x04)
	char pad_344[0xc]; // 0x344(0x0c)
};

// Class StencilManager.LocalStencilAutoStartComponent
// Size: 0x520 (Inherited: 0x340)
struct ULocalStencilAutoStartComponent : ULocalStencilComponent {
	struct FLocalStencilEffect AutoStartEffect; // 0x340(0x1d0)
	bool bStartOnBeginPlay; // 0x510(0x01)
	char pad_511[0xf]; // 0x511(0x0f)

	bool LocalStencilEffectStart(); // Function StencilManager.LocalStencilAutoStartComponent.LocalStencilEffectStart // (Final|Native|Public|BlueprintCallable) // @ game+0x17b76c0
};

// Class StencilManager.LocalStencilComponentMultiMesh
// Size: 0x2f0 (Inherited: 0x2e0)
struct ULocalStencilComponentMultiMesh : ULocalStencilComponentBase {
	struct TArray<struct FLocalStencilEffectMeshAttached> EffectMeshes; // 0x2e0(0x10)
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverride
// Size: 0x28 (Inherited: 0x28)
struct ULocalStencilEffectDelegatedActorOverride : UObject {
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverrideFiltered
// Size: 0x38 (Inherited: 0x28)
struct ULocalStencilEffectDelegatedActorOverrideFiltered : ULocalStencilEffectDelegatedActorOverride {
	struct FStencilManagerEffectName Effect; // 0x28(0x08)
	bool bFilterByEffectName; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverrideRadius
// Size: 0x40 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorOverrideRadius : ULocalStencilEffectDelegatedActorOverrideFiltered {
	float OutlineRadius; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverrideRadiusAlpha
// Size: 0x50 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorOverrideRadiusAlpha : ULocalStencilEffectDelegatedActorOverrideFiltered {
	float OutlineRadius; // 0x38(0x04)
	float OutlineColorAlpha; // 0x3c(0x04)
	float OutlineColorAlphaPower; // 0x40(0x04)
	float FinalIntensityMod; // 0x44(0x04)
	char bSetOutlineRadius : 1; // 0x48(0x01)
	char bSetOutlineAlpha : 1; // 0x48(0x01)
	char bSetOutlineAlphaPower : 1; // 0x48(0x01)
	char bSetFinalIntensityMod : 1; // 0x48(0x01)
	char pad_48_4 : 4; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverrideBottomFade
// Size: 0x50 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorOverrideBottomFade : ULocalStencilEffectDelegatedActorOverrideFiltered {
	struct UMaterialInterface* OverrideMaterial; // 0x38(0x08)
	float ObjectBottomFadeStart; // 0x40(0x04)
	float ObjectBottomFadeFull; // 0x44(0x04)
	float ObjectBottomFadePower; // 0x48(0x04)
	char bSetObjectBottomFadeStart : 1; // 0x4c(0x01)
	char bSetObjectBottomFadeFull : 1; // 0x4c(0x01)
	char bSetObjectBottomFadePower : 1; // 0x4c(0x01)
	char pad_4C_3 : 5; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverrideFade
// Size: 0x48 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorOverrideFade : ULocalStencilEffectDelegatedActorOverrideFiltered {
	float FadeInTime; // 0x38(0x04)
	float FadeOutTime; // 0x3c(0x04)
	char bOverride_FadeInTime : 1; // 0x40(0x01)
	char bOverride_FadeOutTime : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverrideOverdraw
// Size: 0x50 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorOverrideOverdraw : ULocalStencilEffectDelegatedActorOverrideFiltered {
	float MeshScaleFactor; // 0x38(0x04)
	struct FVector MeshInflateBounds; // 0x3c(0x0c)
	enum class ELocalStencilBoundsMethod BoundsMethod; // 0x48(0x01)
	char bOverride_MeshScaleFactor : 1; // 0x49(0x01)
	char bOverride_MeshInflateBounds : 1; // 0x49(0x01)
	char bOverride_BoundsMethod : 1; // 0x49(0x01)
	char pad_49_3 : 5; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverrideBoundsMethod
// Size: 0x40 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorOverrideBoundsMethod : ULocalStencilEffectDelegatedActorOverrideFiltered {
	enum class ELocalStencilBoundsMethod BoundsMethod; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverrideClassAndMaterial
// Size: 0x48 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorOverrideClassAndMaterial : ULocalStencilEffectDelegatedActorOverrideFiltered {
	struct ULocalStencilComponentBase* OverrideClass; // 0x38(0x08)
	struct UMaterialInterface* OverrideMaterial; // 0x40(0x08)
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverrideEverything
// Size: 0x200 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorOverrideEverything : ULocalStencilEffectDelegatedActorOverrideFiltered {
	struct FLocalStencilEffectActorOverrideParameters Parameters; // 0x38(0x1c8)
};

// Class StencilManager.LocalStencilEffectDelegatedActorOverrideParameters
// Size: 0x130 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorOverrideParameters : ULocalStencilEffectDelegatedActorOverrideFiltered {
	struct UMaterialInterface* OverrideMaterial; // 0x38(0x08)
	struct FLocalStencilEffectParams Parameters; // 0x40(0xf0)
};

// Class StencilManager.LocalStencilEffectDelegatedActorExtraParameters
// Size: 0x60 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorExtraParameters : ULocalStencilEffectDelegatedActorOverrideFiltered {
	struct TArray<struct FLocalStencilEffectScalar> ExtraScalars; // 0x38(0x10)
	struct TArray<struct FLocalStencilEffectColor> ExtraColors; // 0x48(0x10)
	char bSetExtraScalars : 1; // 0x58(0x01)
	char bSetExtraColors : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class StencilManager.LocalStencilEffectDelegatedActorExtraCurveParameters
// Size: 0x60 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedActorExtraCurveParameters : ULocalStencilEffectDelegatedActorOverrideFiltered {
	struct TArray<struct FLocalStencilEffectScalarCurve> ExtraScalarCurves; // 0x38(0x10)
	struct TArray<struct FLocalStencilEffectColorCurve> ExtraColorCurves; // 0x48(0x10)
	char bSetExtraScalarCurves : 1; // 0x58(0x01)
	char bSetExtraColorCurves : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class StencilManager.LocalStencilEffectDelegatedForcePlayerCustomDepth
// Size: 0x40 (Inherited: 0x38)
struct ULocalStencilEffectDelegatedForcePlayerCustomDepth : ULocalStencilEffectDelegatedActorOverrideFiltered {
	bool bForcePlayerCustomDepth; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class StencilManager.StencilManager
// Size: 0x28 (Inherited: 0x28)
struct UStencilManager : UBlueprintFunctionLibrary {

	void UnlockForStencil(struct UObject* WorldContextObject, struct UObject* LockOwner, struct UPrimitiveComponent* Component, bool& bSuccess, bool bRestore); // Function StencilManager.StencilManager.UnlockForStencil // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17bd2f0
	void UnlockAllForStencil(struct UObject* WorldContextObject, struct UObject* LockOwner, bool& bSuccess, bool bRestore); // Function StencilManager.StencilManager.UnlockAllForStencil // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17bd190
	bool StencilGroupEnabled(struct UObject* WorldContextObject, struct FName Group); // Function StencilManager.StencilManager.StencilGroupEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x17bd0c0
	bool StencilEnabled(struct UObject* WorldContextObject); // Function StencilManager.StencilManager.StencilEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x17bd030
	void SetStencilValueRenderCustomDepth(struct UPrimitiveComponent* PrimitiveComponent, struct FStencilValueRenderCustomDepth StencilValueRenderCustomDepth); // Function StencilManager.StencilManager.SetStencilValueRenderCustomDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bcf60
	void SetStencilValueAndRenderCustomDepth(struct UPrimitiveComponent* PrimitiveComponent, int32_t StencilValue, bool bRenderCustomDepth); // Function StencilManager.StencilManager.SetStencilValueAndRenderCustomDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bce60
	void SetStencilValue(struct UPrimitiveComponent* PrimitiveComponent, int32_t StencilValue); // Function StencilManager.StencilManager.SetStencilValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bcda0
	void SetStencilEffect(struct AActor* InTarget, struct FName StencilEffect, bool bFlag); // Function StencilManager.StencilManager.SetStencilEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bcca0
	void SetStencil(struct AActor* InTarget, char StencilValue, bool bFlag); // Function StencilManager.StencilManager.SetStencil // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bcba0
	void SetRenderCustomDepth(struct UPrimitiveComponent* PrimitiveComponent, bool bRenderCustomDepth); // Function StencilManager.StencilManager.SetRenderCustomDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bcae0
	void SetActorStencilValueRenderCustomDepth(struct AActor* Actor, struct FStencilValueRenderCustomDepth StencilValueRenderCustomDepth); // Function StencilManager.StencilManager.SetActorStencilValueRenderCustomDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bca10
	void SetActorStencilValueAndRenderCustomDepth(struct AActor* Actor, int32_t StencilValue, bool bRenderCustomDepth); // Function StencilManager.StencilManager.SetActorStencilValueAndRenderCustomDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bc910
	void SetActorStencilValue(struct AActor* Actor, int32_t StencilValue); // Function StencilManager.StencilManager.SetActorStencilValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bc850
	void SetActorRenderCustomDepth(struct AActor* Actor, bool bRenderCustomDepth); // Function StencilManager.StencilManager.SetActorRenderCustomDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bc790
	void LockOwnerForStencil(struct UObject* WorldContextObject, struct UPrimitiveComponent* Component, struct UObject*& Owner); // Function StencilManager.StencilManager.LockOwnerForStencil // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17bc680
	void LockForStencil(struct UObject* WorldContextObject, struct UObject* LockOwner, struct UPrimitiveComponent* Component, int32_t StencilValue, bool& bSuccess, bool bRenderCustomDepth); // Function StencilManager.StencilManager.LockForStencil // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17bc4b0
	void LockAllForStencil(struct UObject* WorldContextObject, struct UObject* LockOwner, struct AActor* Actor, int32_t StencilValue, bool& bSuccess, bool bRenderCustomDepth); // Function StencilManager.StencilManager.LockAllForStencil // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17bc2e0
	void IsLockedForStencil(struct UObject* WorldContextObject, struct UPrimitiveComponent* Component, bool& bLocked); // Function StencilManager.StencilManager.IsLockedForStencil // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17bc1d0
	struct AStencilManagerSingleton* GetStencilManager(struct UObject* WorldContextObject); // Function StencilManager.StencilManager.GetStencilManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x17bc140
	void GetCurrentStencilEffect(struct AActor* InTarget, struct FName& StencilEffect); // Function StencilManager.StencilManager.GetCurrentStencilEffect // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17bc070
	void EnableStencilGroups(struct UObject* WorldContextObject, struct TArray<struct FName> Groups, bool bEnable); // Function StencilManager.StencilManager.EnableStencilGroups // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bbf10
	void EnableStencilGroup(struct UObject* WorldContextObject, struct FName Group, bool bEnable); // Function StencilManager.StencilManager.EnableStencilGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bbe10
	void EnableStencil(struct UObject* WorldContextObject, bool bEnable); // Function StencilManager.StencilManager.EnableStencil // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bbd50
	void DisableStencilGroups(struct UObject* WorldContextObject, struct TArray<struct FName> Groups); // Function StencilManager.StencilManager.DisableStencilGroups // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bbbd0
	void DisableStencilGroup(struct UObject* WorldContextObject, struct FName Group); // Function StencilManager.StencilManager.DisableStencilGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bbb10
};

// Class StencilManager.StencilManagerExternalControl
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerExternalControl : UObject {
};

// Class StencilManager.StencilManagerExternalControlNot
// Size: 0x30 (Inherited: 0x28)
struct UStencilManagerExternalControlNot : UStencilManagerExternalControl {
	struct UStencilManagerExternalControl* Control; // 0x28(0x08)
};

// Class StencilManager.StencilManagerExternalControlTrue
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerExternalControlTrue : UStencilManagerExternalControl {
};

// Class StencilManager.StencilManagerExternalControlFalse
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerExternalControlFalse : UStencilManagerExternalControl {
};

// Class StencilManager.StencilManagerExternalControlLogicList
// Size: 0x38 (Inherited: 0x28)
struct UStencilManagerExternalControlLogicList : UStencilManagerExternalControl {
	struct TArray<struct UStencilManagerExternalControl*> Controls; // 0x28(0x10)
};

// Class StencilManager.StencilManagerExternalControlAnd
// Size: 0x38 (Inherited: 0x38)
struct UStencilManagerExternalControlAnd : UStencilManagerExternalControlLogicList {
};

// Class StencilManager.StencilManagerExternalControlOr
// Size: 0x38 (Inherited: 0x38)
struct UStencilManagerExternalControlOr : UStencilManagerExternalControlLogicList {
};

// Class StencilManager.StencilManagerExternalSystemControl
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerExternalSystemControl : UStencilManagerExternalControl {
};

// Class StencilManager.StencilManagerExternalGroupControl
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerExternalGroupControl : UStencilManagerExternalControl {
};

// Class StencilManager.StencilManagerExternalControls
// Size: 0x88 (Inherited: 0x30)
struct UStencilManagerExternalControls : UDataAsset {
	struct UStencilManagerExternalControl* SystemEnable; // 0x30(0x08)
	struct TMap<struct FName, struct UStencilManagerExternalControl*> GroupEnable; // 0x38(0x50)
};

// Class StencilManager.StencilManagerEnableInterface
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerEnableInterface : UInterface {
};

// Class StencilManager.StencilManagerMatchActor
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerMatchActor : UObject {
};

// Class StencilManager.StencilManagerMatchActorNOT
// Size: 0x30 (Inherited: 0x28)
struct UStencilManagerMatchActorNOT : UStencilManagerMatchActor {
	struct UStencilManagerMatchActor* Expression; // 0x28(0x08)
};

// Class StencilManager.StencilManagerMatchActorAND
// Size: 0x38 (Inherited: 0x28)
struct UStencilManagerMatchActorAND : UStencilManagerMatchActor {
	struct TArray<struct UStencilManagerMatchActor*> Expressions; // 0x28(0x10)
};

// Class StencilManager.StencilManagerMatchActorOR
// Size: 0x38 (Inherited: 0x28)
struct UStencilManagerMatchActorOR : UStencilManagerMatchActor {
	struct TArray<struct UStencilManagerMatchActor*> Expressions; // 0x28(0x10)
};

// Class StencilManager.StencilManagerMatchActorIF
// Size: 0x40 (Inherited: 0x28)
struct UStencilManagerMatchActorIF : UStencilManagerMatchActor {
	struct UStencilManagerMatchActor* Expression; // 0x28(0x08)
	struct UStencilManagerMatchActor* ExpressionTrue; // 0x30(0x08)
	struct UStencilManagerMatchActor* ExpressionFalse; // 0x38(0x08)
};

// Class StencilManager.StencilManagerMatchActorClass
// Size: 0x58 (Inherited: 0x28)
struct UStencilManagerMatchActorClass : UStencilManagerMatchActor {
	struct TSoftClassPtr<UObject> ActorClass; // 0x28(0x28)
	bool bAllowSubclasses; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class StencilManager.StencilManagerMatchActorHasChildClass
// Size: 0x58 (Inherited: 0x28)
struct UStencilManagerMatchActorHasChildClass : UStencilManagerMatchActor {
	struct TSoftClassPtr<UObject> ChildClass; // 0x28(0x28)
	bool bAllowSubclasses; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class StencilManager.StencilManagerMatchActorHasComponent
// Size: 0x50 (Inherited: 0x28)
struct UStencilManagerMatchActorHasComponent : UStencilManagerMatchActor {
	struct TSoftClassPtr<UObject> ComponentClass; // 0x28(0x28)
};

// Class StencilManager.StencilManagerMatchActorBounds
// Size: 0x30 (Inherited: 0x28)
struct UStencilManagerMatchActorBounds : UStencilManagerMatchActor {
	float Radius; // 0x28(0x04)
	bool bIncludeChildActors; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class StencilManager.StencilManagerMatchActorRadiusLessThan
// Size: 0x30 (Inherited: 0x30)
struct UStencilManagerMatchActorRadiusLessThan : UStencilManagerMatchActorBounds {
};

// Class StencilManager.StencilManagerMatchActorRadiusGreaterThan
// Size: 0x30 (Inherited: 0x30)
struct UStencilManagerMatchActorRadiusGreaterThan : UStencilManagerMatchActorBounds {
};

// Class StencilManager.StencilManagerMatchActorMovable
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerMatchActorMovable : UStencilManagerMatchActor {
};

// Class StencilManager.StencilManagerMatchActorStationary
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerMatchActorStationary : UStencilManagerMatchActorMovable {
};

// Class StencilManager.StencilManagerMatchActorTrue
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerMatchActorTrue : UStencilManagerMatchActor {
};

// Class StencilManager.StencilManagerMatchActorFalse
// Size: 0x28 (Inherited: 0x28)
struct UStencilManagerMatchActorFalse : UStencilManagerMatchActor {
};

// Class StencilManager.StencilManagerMatchActorName
// Size: 0x30 (Inherited: 0x28)
struct UStencilManagerMatchActorName : UStencilManagerMatchActor {
	bool bIgnoreCase; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class StencilManager.StencilManagerMatchActorNameStartsWith
// Size: 0x38 (Inherited: 0x30)
struct UStencilManagerMatchActorNameStartsWith : UStencilManagerMatchActorName {
	struct FName StartOfName; // 0x30(0x08)
};

// Class StencilManager.StencilManagerMatchActorNameContains
// Size: 0x38 (Inherited: 0x30)
struct UStencilManagerMatchActorNameContains : UStencilManagerMatchActorName {
	struct FName CONTAINS; // 0x30(0x08)
};

// Class StencilManager.StencilManagerMatchActorLevelStartsWith
// Size: 0x38 (Inherited: 0x38)
struct UStencilManagerMatchActorLevelStartsWith : UStencilManagerMatchActorNameStartsWith {
};

// Class StencilManager.StencilManagerMatchActorHasTag
// Size: 0x38 (Inherited: 0x28)
struct UStencilManagerMatchActorHasTag : UStencilManagerMatchActor {
	struct FName Tag; // 0x28(0x08)
	bool bIncludeChildActors; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class StencilManager.StencilManagerMatchActorHasStaticMesh
// Size: 0x58 (Inherited: 0x28)
struct UStencilManagerMatchActorHasStaticMesh : UStencilManagerMatchActor {
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x28(0x28)
	bool bIncludeChildActors; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class StencilManager.StencilManagerWholeActorOverrides
// Size: 0x40 (Inherited: 0x30)
struct UStencilManagerWholeActorOverrides : UDataAsset {
	struct TArray<struct FStencilManagerEffectInfoActorOverrides> WholeActorOverrides; // 0x30(0x10)

	void Validate(); // Function StencilManager.StencilManagerWholeActorOverrides.Validate // (Final|Native|Public) // @ game+0x1074730
};

// Class StencilManager.StencilManagerAccessibilityOverrides
// Size: 0x40 (Inherited: 0x30)
struct UStencilManagerAccessibilityOverrides : UDataAsset {
	struct TArray<struct FStencilManagerEffectInfoAccessibilityOverride> AccessibilityOverrides; // 0x30(0x10)
};

// Class StencilManager.StencilManagerSettings
// Size: 0xf0 (Inherited: 0x30)
struct UStencilManagerSettings : UDataAsset {
	struct TArray<struct UMaterialInterface*> StencilPostProcessingMaterials; // 0x30(0x10)
	struct UMaterialInterface* PreferredStencilPostProcessingMaterial; // 0x40(0x08)
	bool bForcePreferredStencilPostProcessingMaterial; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x50(0x08)
	struct FStencilManagerMPCGlobals MaterialParameterGlobals; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FName> Groups; // 0x68(0x10)
	struct TArray<struct FStencilManagerEffectInfo> EffectsList; // 0x78(0x10)
	struct UStencilManagerAccessibilityOverrides* AccessibilityOverrides; // 0x88(0x08)
	struct UStencilManagerWholeActorOverrides* WholeActorOverrides; // 0x90(0x08)
	struct FStencilPrimitiveTagRules DefaultLocalStencilTagRules; // 0x98(0x50)
	struct ULocalStencilEffectActorOverrides* LocalStencilFXOverrides; // 0xe8(0x08)
};

// Class StencilManager.StencilManagerSingleton
// Size: 0x4e8 (Inherited: 0x248)
struct AStencilManagerSingleton : AActor {
	struct UStencilManagerSettings* Settings; // 0x248(0x08)
	struct UStencilManagerExternalControls* ExternalControls; // 0x250(0x08)
	struct TArray<struct FName> DisabledGroups; // 0x258(0x10)
	struct FStencilManagerEnableInterfaceList EnableInterfaces; // 0x268(0x10)
	struct TArray<struct UObject*> HardReferences; // 0x278(0x10)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FStencilManagerTrackActorStencil> LegacyStencilActors; // 0x288(0x50)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FStencilManagerTrackActorLocalStencil> StencilLocalActors; // 0x2d8(0x50)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FStencilManagerTrackActorSkinFX> SkinFXActors; // 0x328(0x50)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FStencilManagerTrackActorStencil> StencilMaskActors; // 0x378(0x50)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FStencilManagerTrackActorStencil> AutoStencilMaskActors; // 0x3c8(0x50)
	struct TMap<struct TWeakObjectPtr<struct UPrimitiveComponent>, struct FSavePrimitiveRenderCustomDepthOwner> ExternalLocks; // 0x418(0x50)
	char pad_468[0x50]; // 0x468(0x50)
	float StencilBlend; // 0x4b8(0x04)
	bool bUpdatedStencilBlend; // 0x4bc(0x01)
	char pad_4BD[0x3]; // 0x4bd(0x03)
	struct FStencilManagerMPCGlobals MPCGlobals; // 0x4c0(0x0c)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct TArray<struct FName> ConsoleDisabledGroups; // 0x4d0(0x10)
	bool bConsoleDisableStencil; // 0x4e0(0x01)
	bool bDisableStencil; // 0x4e1(0x01)
	char pad_4E2[0x6]; // 0x4e2(0x06)

	void SetStencilPlayerNearFadeDisable(struct UObject* WorldContextObject, bool bPlayerNearFadeDisable); // Function StencilManager.StencilManagerSingleton.SetStencilPlayerNearFadeDisable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bfd10
	void SetStencilBlend(struct UObject* WorldContextObject, float blendVal); // Function StencilManager.StencilManagerSingleton.SetStencilBlend // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bfc50
	void SetOutdoorsDaytimeBoost(struct UObject* WorldContextObject, float boostVal); // Function StencilManager.StencilManagerSingleton.SetOutdoorsDaytimeBoost // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17bfb90
};

// Class StencilManager.StencilManagerDynamicLock
// Size: 0x38 (Inherited: 0x28)
struct UStencilManagerDynamicLock : UObject {
	struct TWeakObjectPtr<struct AStencilManagerSingleton> StencilManager; // 0x28(0x08)
	int32_t Priority; // 0x30(0x04)
	uint32_t LastUsedStencilValue; // 0x34(0x04)
};

