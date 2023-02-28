// Class ActorMeshStates.ActorMeshSetupMatch
// Size: 0x28 (Inherited: 0x28)
struct UActorMeshSetupMatch : UObject {
};

// Class ActorMeshStates.ActorMeshSetupProcess
// Size: 0x28 (Inherited: 0x28)
struct UActorMeshSetupProcess : UObject {
};

// Class ActorMeshStates.ActorMeshSetupMeshFilter
// Size: 0x28 (Inherited: 0x28)
struct UActorMeshSetupMeshFilter : UObject {
};

// Class ActorMeshStates.ActorMeshSetupProcessFiltered
// Size: 0x30 (Inherited: 0x28)
struct UActorMeshSetupProcessFiltered : UActorMeshSetupProcess {
	struct UActorMeshSetupMeshFilter* MeshFilter; // 0x28(0x08)
};

// Class ActorMeshStates.ActorMeshSetupDefinitions
// Size: 0x50 (Inherited: 0x30)
struct UActorMeshSetupDefinitions : UDataAsset {
	struct TArray<struct FActorMeshSetupAutoDefinition> AutoDefinitions; // 0x30(0x10)
	struct TArray<struct FActorMeshSetupNamedDefinition> NamedDefinitions; // 0x40(0x10)
};

// Class ActorMeshStates.ActorMeshSetupLibrary
// Size: 0x28 (Inherited: 0x28)
struct UActorMeshSetupLibrary : UBlueprintFunctionLibrary {

	void ActorMeshSetupRemoveMeshAlwaysIgnore(struct UMeshComponent* MeshComponent); // Function ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupRemoveMeshAlwaysIgnore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4a5b0
	void ActorMeshSetupRemoveAlwaysIgnore(struct AActor* Actor, bool bIncludeChildren); // Function ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupRemoveAlwaysIgnore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4a4f0
	bool ActorMeshSetupProcessRefresh(struct AActor* Actor, bool bIncludeChildren); // Function ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupProcessRefresh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4a420
	bool ActorMeshSetupProcessNamed(struct AActor* Actor, struct FActorMeshSetupName MeshSetup, bool bIncludeChildren); // Function ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupProcessNamed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4a320
	bool ActorMeshSetupProcessAuto(struct AActor* Actor, bool bIncludeChildren); // Function ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupProcessAuto // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4a250
	void ActorMeshSetupAlwaysIgnoreMesh(struct UMeshComponent* MeshComponent); // Function ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupAlwaysIgnoreMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4a1d0
	void ActorMeshSetupAlwaysIgnore(struct AActor* Actor, bool bIncludeChildren); // Function ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupAlwaysIgnore // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c4a110
};

// Class ActorMeshStates.ActorMeshSetupMatchTrue
// Size: 0x28 (Inherited: 0x28)
struct UActorMeshSetupMatchTrue : UActorMeshSetupMatch {
};

// Class ActorMeshStates.ActorMeshSetupMatchFalse
// Size: 0x28 (Inherited: 0x28)
struct UActorMeshSetupMatchFalse : UActorMeshSetupMatch {
};

// Class ActorMeshStates.ActorMeshSetupMatchAnd
// Size: 0x38 (Inherited: 0x28)
struct UActorMeshSetupMatchAnd : UActorMeshSetupMatch {
	struct TArray<struct UActorMeshSetupMatch*> AND; // 0x28(0x10)
};

// Class ActorMeshStates.ActorMeshSetupMatchOr
// Size: 0x38 (Inherited: 0x28)
struct UActorMeshSetupMatchOr : UActorMeshSetupMatch {
	struct TArray<struct UActorMeshSetupMatch*> OR; // 0x28(0x10)
};

// Class ActorMeshStates.ActorMeshSetupMatchNot
// Size: 0x30 (Inherited: 0x28)
struct UActorMeshSetupMatchNot : UActorMeshSetupMatch {
	struct UActorMeshSetupMatch* Not; // 0x28(0x08)
};

// Class ActorMeshStates.ActorMeshSetupMatchActorTag
// Size: 0x30 (Inherited: 0x28)
struct UActorMeshSetupMatchActorTag : UActorMeshSetupMatch {
	struct FName ActorTag; // 0x28(0x08)
};

// Class ActorMeshStates.ActorMeshSetupMatchActorHasTag
// Size: 0x30 (Inherited: 0x30)
struct UActorMeshSetupMatchActorHasTag : UActorMeshSetupMatchActorTag {
};

// Class ActorMeshStates.ActorMeshSetupMatchActorNoTag
// Size: 0x30 (Inherited: 0x30)
struct UActorMeshSetupMatchActorNoTag : UActorMeshSetupMatchActorTag {
};

// Class ActorMeshStates.ActorMeshSetupMatchActorTags
// Size: 0x38 (Inherited: 0x28)
struct UActorMeshSetupMatchActorTags : UActorMeshSetupMatch {
	struct TArray<struct FName> ActorTags; // 0x28(0x10)
};

// Class ActorMeshStates.ActorMeshSetupMatchActorHasAnyTag
// Size: 0x38 (Inherited: 0x38)
struct UActorMeshSetupMatchActorHasAnyTag : UActorMeshSetupMatchActorTags {
};

// Class ActorMeshStates.ActorMeshSetupMatchActorClass
// Size: 0x58 (Inherited: 0x28)
struct UActorMeshSetupMatchActorClass : UActorMeshSetupMatch {
	struct TSoftClassPtr<UObject> ActorClass; // 0x28(0x28)
	bool bIncludeSubclasses; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class ActorMeshStates.ActorMeshSetupMatchActorClasses
// Size: 0x40 (Inherited: 0x28)
struct UActorMeshSetupMatchActorClasses : UActorMeshSetupMatch {
	struct TArray<struct TSoftClassPtr<UObject>> ActorClasses; // 0x28(0x10)
	bool bIncludeSubclasses; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class ActorMeshStates.ActorMeshSetupMatchCharacter
// Size: 0x28 (Inherited: 0x28)
struct UActorMeshSetupMatchCharacter : UActorMeshSetupMatch {
};

// Class ActorMeshStates.ActorMeshSetupMatchPlayer
// Size: 0x28 (Inherited: 0x28)
struct UActorMeshSetupMatchPlayer : UActorMeshSetupMatch {
};

// Class ActorMeshStates.ActorMeshSetupProcessIgnoreLightLeaking
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessIgnoreLightLeaking : UActorMeshSetupProcessFiltered {
	bool bIgnoreLightLeakingCorrection; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessReceivesWeatherDecals
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessReceivesWeatherDecals : UActorMeshSetupProcessFiltered {
	bool bReceivesWeatherDecals; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessReceivesDecals
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessReceivesDecals : UActorMeshSetupProcessFiltered {
	bool bReceivesDecals; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessUseAsOccluder
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessUseAsOccluder : UActorMeshSetupProcessFiltered {
	bool bUseAsOccluder; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessTreatAsBackgroundForOcclusion
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessTreatAsBackgroundForOcclusion : UActorMeshSetupProcessFiltered {
	bool bTreatAsBackgroundForOcclusion; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessAddTag
// Size: 0x30 (Inherited: 0x28)
struct UActorMeshSetupProcessAddTag : UActorMeshSetupProcess {
	struct FName ActorTag; // 0x28(0x08)
};

// Class ActorMeshStates.ActorMeshSetupProcessRemoveTag
// Size: 0x30 (Inherited: 0x28)
struct UActorMeshSetupProcessRemoveTag : UActorMeshSetupProcess {
	struct FName ActorTag; // 0x28(0x08)
};

// Class ActorMeshStates.ActorMeshSetupProcessRenderCustomDepth
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessRenderCustomDepth : UActorMeshSetupProcessFiltered {
	bool bRenderCustomDepth; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessTranslucencySortPriority
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessTranslucencySortPriority : UActorMeshSetupProcessFiltered {
	int32_t TranslucencySortPriority; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class ActorMeshStates.ActorMeshSetupProcessTranslucencySortDistanceOffset
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessTranslucencySortDistanceOffset : UActorMeshSetupProcessFiltered {
	float TranslucencySortDistanceOffset; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class ActorMeshStates.ActorMeshSetupProcessLightingChannels
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessLightingChannels : UActorMeshSetupProcessFiltered {
	struct FLightingChannels LightingChannels; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessLightingChannelZero
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessLightingChannelZero : UActorMeshSetupProcessFiltered {
	bool bLightingChannelZero; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessLightingChannelOne
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessLightingChannelOne : UActorMeshSetupProcessFiltered {
	bool bLightingChannelOne; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessLightingChannelTwo
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessLightingChannelTwo : UActorMeshSetupProcessFiltered {
	bool bLightingChannelTwo; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessBoundsScale
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessBoundsScale : UActorMeshSetupProcessFiltered {
	float BoundsScale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class ActorMeshStates.ActorMeshSetupProcessDitheredAlpha
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessDitheredAlpha : UActorMeshSetupProcessFiltered {
	float DitheredAlpha; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class ActorMeshStates.ActorMeshSetupProcessCastShadow
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessCastShadow : UActorMeshSetupProcessFiltered {
	bool bCastShadow; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessDynamicShadow
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessDynamicShadow : UActorMeshSetupProcessFiltered {
	bool bCastDynamicShadow; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessStaticShadow
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessStaticShadow : UActorMeshSetupProcessFiltered {
	bool bCastStaticShadow; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessContactShadow
// Size: 0x40 (Inherited: 0x30)
struct UActorMeshSetupProcessContactShadow : UActorMeshSetupProcessFiltered {
	bool bCastContactShadow; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName NoContactShadowTag; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ActorMeshStates.ActorMeshSetupProcessHiddenShadow
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessHiddenShadow : UActorMeshSetupProcessFiltered {
	bool bCastHiddenShadow; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessShadowAsTwoSided
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessShadowAsTwoSided : UActorMeshSetupProcessFiltered {
	bool bCastShadowAsTwoSided; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessSelfShadowOnly
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupProcessSelfShadowOnly : UActorMeshSetupProcessFiltered {
	bool bSelfShadowOnly; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ActorMeshStates.ActorMeshSetupProcessShadows
// Size: 0x40 (Inherited: 0x30)
struct UActorMeshSetupProcessShadows : UActorMeshSetupProcessFiltered {
	bool bCastShadow; // 0x30(0x01)
	bool bCastDynamicShadow; // 0x31(0x01)
	bool bCastStaticShadow; // 0x32(0x01)
	bool bCastContactShadow; // 0x33(0x01)
	struct FName NoContactShadowTag; // 0x34(0x08)
	bool bOverride_bCastShadow; // 0x3c(0x01)
	bool bOverride_bCastDynamicShadow; // 0x3d(0x01)
	bool bOverride_bCastStaticShadow; // 0x3e(0x01)
	bool bOverride_bCastContactShadow; // 0x3f(0x01)
};

// Class ActorMeshStates.ActorMeshSetupProcessCapsuleShadows
// Size: 0x40 (Inherited: 0x30)
struct UActorMeshSetupProcessCapsuleShadows : UActorMeshSetupProcessFiltered {
	bool bCastCapsuleDirectShadow; // 0x30(0x01)
	bool bCastCapsuleIndirectShadow; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float CapsuleIndirectShadowMinVisibility; // 0x34(0x04)
	bool bCanUsePhysicsCapsulesToShadow; // 0x38(0x01)
	bool bForcePhysicsCapsulesToShadow; // 0x39(0x01)
	bool bOverride_bCastCapsuleDirectShadow; // 0x3a(0x01)
	bool bOverride_bCastCapsuleIndirectShadow; // 0x3b(0x01)
	bool bOverride_CapsuleIndirectShadowMinVisibility; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class ActorMeshStates.ActorMeshSetupProcessSetupCharacterShadows
// Size: 0x50 (Inherited: 0x40)
struct UActorMeshSetupProcessSetupCharacterShadows : UActorMeshSetupProcessCapsuleShadows {
	bool bCastShadow; // 0x40(0x01)
	bool bCastDynamicShadow; // 0x41(0x01)
	bool bCastStaticShadow; // 0x42(0x01)
	bool bCastContactShadow; // 0x43(0x01)
	struct FName NoContactShadowTag; // 0x44(0x08)
	bool bOverride_bCastShadow; // 0x4c(0x01)
	bool bOverride_bCastDynamicShadow; // 0x4d(0x01)
	bool bOverride_bCastStaticShadow; // 0x4e(0x01)
	bool bOverride_bCastContactShadow; // 0x4f(0x01)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterNot
// Size: 0x30 (Inherited: 0x28)
struct UActorMeshSetupMeshFilterNot : UActorMeshSetupMeshFilter {
	struct UActorMeshSetupMeshFilter* MeshFilter; // 0x28(0x08)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterOr
// Size: 0x38 (Inherited: 0x28)
struct UActorMeshSetupMeshFilterOr : UActorMeshSetupMeshFilter {
	struct TArray<struct UActorMeshSetupMeshFilter*> MeshFilters; // 0x28(0x10)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterAnd
// Size: 0x38 (Inherited: 0x28)
struct UActorMeshSetupMeshFilterAnd : UActorMeshSetupMeshFilter {
	struct TArray<struct UActorMeshSetupMeshFilter*> MeshFilters; // 0x28(0x10)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterHasTag
// Size: 0x30 (Inherited: 0x28)
struct UActorMeshSetupMeshFilterHasTag : UActorMeshSetupMeshFilter {
	struct FName ComponentTag; // 0x28(0x08)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterNotHasTag
// Size: 0x30 (Inherited: 0x28)
struct UActorMeshSetupMeshFilterNotHasTag : UActorMeshSetupMeshFilter {
	struct FName ComponentTag; // 0x28(0x08)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterStartsWith
// Size: 0x40 (Inherited: 0x28)
struct UActorMeshSetupMeshFilterStartsWith : UActorMeshSetupMeshFilter {
	struct FString STARTSWITH; // 0x28(0x10)
	enum class ESearchCase SearchCase; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterIsComponentType
// Size: 0x50 (Inherited: 0x28)
struct UActorMeshSetupMeshFilterIsComponentType : UActorMeshSetupMeshFilter {
	struct TSoftClassPtr<UObject> MeshComponentType; // 0x28(0x28)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterHasStaticMeshAsset
// Size: 0x50 (Inherited: 0x28)
struct UActorMeshSetupMeshFilterHasStaticMeshAsset : UActorMeshSetupMeshFilter {
	struct TSoftObjectPtr<UStaticMesh> MeshAsset; // 0x28(0x28)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterHasSkeletalMeshAsset
// Size: 0x50 (Inherited: 0x28)
struct UActorMeshSetupMeshFilterHasSkeletalMeshAsset : UActorMeshSetupMeshFilter {
	struct TSoftObjectPtr<USkeletalMesh> MeshAsset; // 0x28(0x28)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterAsset
// Size: 0x38 (Inherited: 0x30)
struct UActorMeshSetupMeshFilterAsset : UDataAsset {
	struct UActorMeshSetupMeshFilter* MeshFilter; // 0x30(0x08)
};

// Class ActorMeshStates.ActorMeshSetupMeshFilterUseAsset
// Size: 0x30 (Inherited: 0x28)
struct UActorMeshSetupMeshFilterUseAsset : UActorMeshSetupMeshFilter {
	struct UActorMeshSetupMeshFilterAsset* FilterAsset; // 0x28(0x08)
};

