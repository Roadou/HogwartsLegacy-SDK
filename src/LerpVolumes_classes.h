// Class LerpVolumes.LerpVolumesBoundsCacheLevelRemapping
// Size: 0x80 (Inherited: 0x30)
struct ULerpVolumesBoundsCacheLevelRemapping : UDataAsset {
	struct TMap<struct FName, struct FName> FastLevelNameMap; // 0x30(0x50)

	void RebuildAll(); // Function LerpVolumes.LerpVolumesBoundsCacheLevelRemapping.RebuildAll // (Final|Native|Public) // @ game+0x1074730
};

// Class LerpVolumes.LerpVolumeInterpolant
// Size: 0x28 (Inherited: 0x28)
struct ULerpVolumeInterpolant : UObject {
};

// Class LerpVolumes.LerpVolumeScalarInterpolant
// Size: 0x38 (Inherited: 0x28)
struct ULerpVolumeScalarInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesScalarName Name; // 0x28(0x08)
	float Value; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class LerpVolumes.LerpVolumeRelativeScalarInterpolant
// Size: 0x38 (Inherited: 0x38)
struct ULerpVolumeRelativeScalarInterpolant : ULerpVolumeScalarInterpolant {
};

// Class LerpVolumes.LerpVolumeIntegerInterpolant
// Size: 0x38 (Inherited: 0x28)
struct ULerpVolumeIntegerInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesIntegerName Name; // 0x28(0x08)
	int32_t Value; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class LerpVolumes.LerpVolumeRelativeIntegerInterpolant
// Size: 0x38 (Inherited: 0x38)
struct ULerpVolumeRelativeIntegerInterpolant : ULerpVolumeIntegerInterpolant {
};

// Class LerpVolumes.LerpVolumeVectorInterpolant
// Size: 0x40 (Inherited: 0x28)
struct ULerpVolumeVectorInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesVectorName Name; // 0x28(0x08)
	struct FVector Value; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class LerpVolumes.LerpVolumeUnitDirectionInterpolant
// Size: 0x40 (Inherited: 0x28)
struct ULerpVolumeUnitDirectionInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesUnitDirectionName Name; // 0x28(0x08)
	struct FVector Value; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class LerpVolumes.LerpVolumeColorInterpolant
// Size: 0x40 (Inherited: 0x28)
struct ULerpVolumeColorInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesColorName Name; // 0x28(0x08)
	struct FLinearColor Value; // 0x30(0x10)
};

// Class LerpVolumes.LerpVolumeTagInterpolantBase
// Size: 0x30 (Inherited: 0x28)
struct ULerpVolumeTagInterpolantBase : ULerpVolumeInterpolant {
	struct FLerpVolumesTagName Name; // 0x28(0x08)
};

// Class LerpVolumes.LerpVolumeTagInterpolant
// Size: 0x48 (Inherited: 0x30)
struct ULerpVolumeTagInterpolant : ULerpVolumeTagInterpolantBase {
	struct FString Value; // 0x30(0x10)
	struct FName CachedNameValue; // 0x40(0x08)
};

// Class LerpVolumes.LerpVolumeNameInterpolant
// Size: 0x38 (Inherited: 0x30)
struct ULerpVolumeNameInterpolant : ULerpVolumeTagInterpolantBase {
	struct FName Value; // 0x30(0x08)
};

// Class LerpVolumes.LerpVolumeDefaultInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeDefaultInterpolant : ULerpVolumeTagInterpolantBase {
};

// Class LerpVolumes.LerpVolumeFinalInterpolant
// Size: 0x28 (Inherited: 0x28)
struct ULerpVolumeFinalInterpolant : ULerpVolumeInterpolant {
};

// Class LerpVolumes.LerpVolumeFinalTagInterpolant
// Size: 0x30 (Inherited: 0x28)
struct ULerpVolumeFinalTagInterpolant : ULerpVolumeFinalInterpolant {
	struct FLerpVolumesTagName Name; // 0x28(0x08)
};

// Class LerpVolumes.LerpVolumesPresistentContextDataBase
// Size: 0x28 (Inherited: 0x28)
struct ULerpVolumesPresistentContextDataBase : UObject {
};

// Class LerpVolumes.LerpVolumesLastValidTag
// Size: 0x40 (Inherited: 0x28)
struct ULerpVolumesLastValidTag : ULerpVolumesPresistentContextDataBase {
	struct FLerpVolumesTagEntry LastValid; // 0x28(0x18)
};

// Class LerpVolumes.LerpVolumeFinalLastValidTagInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeFinalLastValidTagInterpolant : ULerpVolumeFinalTagInterpolant {
};

// Class LerpVolumes.LerpVolumeFinalDefaultTagInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeFinalDefaultTagInterpolant : ULerpVolumeFinalTagInterpolant {
};

// Class LerpVolumes.LerpVolumesFinalTagHistory
// Size: 0x58 (Inherited: 0x28)
struct ULerpVolumesFinalTagHistory : ULerpVolumesPresistentContextDataBase {
	struct FLerpVolumesTagEntry Current; // 0x28(0x18)
	struct FLerpVolumesTagEntry Prior; // 0x40(0x18)
};

// Class LerpVolumes.LerpVolumeFinalLastTagInterpolant
// Size: 0x38 (Inherited: 0x30)
struct ULerpVolumeFinalLastTagInterpolant : ULerpVolumeFinalTagInterpolant {
	struct FLerpVolumesTagName SourceInterpolant; // 0x30(0x08)
};

// Class LerpVolumes.LerpVolumeScalarDayNightInterpolant
// Size: 0x38 (Inherited: 0x28)
struct ULerpVolumeScalarDayNightInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesScalarName Name; // 0x28(0x08)
	float DayValue; // 0x30(0x04)
	float NightValue; // 0x34(0x04)
};

// Class LerpVolumes.LerpVolumeIntegerDayNightInterpolant
// Size: 0x38 (Inherited: 0x28)
struct ULerpVolumeIntegerDayNightInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesIntegerName Name; // 0x28(0x08)
	int32_t DayValue; // 0x30(0x04)
	int32_t NightValue; // 0x34(0x04)
};

// Class LerpVolumes.LerpVolumeVectorDayNightInterpolant
// Size: 0x48 (Inherited: 0x28)
struct ULerpVolumeVectorDayNightInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesVectorName Name; // 0x28(0x08)
	struct FVector DayValue; // 0x30(0x0c)
	struct FVector NightValue; // 0x3c(0x0c)
};

// Class LerpVolumes.LerpVolumeUnitDirectionDayNightInterpolant
// Size: 0x48 (Inherited: 0x28)
struct ULerpVolumeUnitDirectionDayNightInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesUnitDirectionName Name; // 0x28(0x08)
	struct FVector DayValue; // 0x30(0x0c)
	struct FVector NightValue; // 0x3c(0x0c)
};

// Class LerpVolumes.LerpVolumeColorDayNightInterpolant
// Size: 0x50 (Inherited: 0x28)
struct ULerpVolumeColorDayNightInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesColorName Name; // 0x28(0x08)
	struct FLinearColor DayValue; // 0x30(0x10)
	struct FLinearColor NightValue; // 0x40(0x10)
};

// Class LerpVolumes.LerpVolumeTagDayNightInterpolant
// Size: 0x60 (Inherited: 0x28)
struct ULerpVolumeTagDayNightInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesTagName Name; // 0x28(0x08)
	struct FString DayValue; // 0x30(0x10)
	struct FString NightValue; // 0x40(0x10)
	struct FName DayValueName; // 0x50(0x08)
	struct FName NightValueName; // 0x58(0x08)
};

// Class LerpVolumes.LerpVolumeDynamicUnitDirectionInterpolant
// Size: 0x30 (Inherited: 0x28)
struct ULerpVolumeDynamicUnitDirectionInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesUnitDirectionName Name; // 0x28(0x08)
};

// Class LerpVolumes.LerpVolumeDiretionToCenterInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeDiretionToCenterInterpolant : ULerpVolumeDynamicUnitDirectionInterpolant {
};

// Class LerpVolumes.LerpVolumeDiretionToWallInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeDiretionToWallInterpolant : ULerpVolumeDynamicUnitDirectionInterpolant {
};

// Class LerpVolumes.LerpVolumeDynamicTagInterpolant
// Size: 0x30 (Inherited: 0x28)
struct ULerpVolumeDynamicTagInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesTagName Name; // 0x28(0x08)
};

// Class LerpVolumes.LerpVolumeNameTagInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeNameTagInterpolant : ULerpVolumeDynamicTagInterpolant {
};

// Class LerpVolumes.LerpVolumeScalarIndoorsOutdoorsInterpolant
// Size: 0x38 (Inherited: 0x28)
struct ULerpVolumeScalarIndoorsOutdoorsInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesScalarName Name; // 0x28(0x08)
	float IndoorsValue; // 0x30(0x04)
	float OutdoorsValue; // 0x34(0x04)
};

// Class LerpVolumes.LerpVolumeIntegerIndoorsOutdoorsInterpolant
// Size: 0x38 (Inherited: 0x28)
struct ULerpVolumeIntegerIndoorsOutdoorsInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesIntegerName Name; // 0x28(0x08)
	int32_t IndoorsValue; // 0x30(0x04)
	int32_t OutdoorsValue; // 0x34(0x04)
};

// Class LerpVolumes.LerpVolumeVectorIndoorsOutdoorsInterpolant
// Size: 0x48 (Inherited: 0x28)
struct ULerpVolumeVectorIndoorsOutdoorsInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesVectorName Name; // 0x28(0x08)
	struct FVector IndoorsValue; // 0x30(0x0c)
	struct FVector OutdoorsValue; // 0x3c(0x0c)
};

// Class LerpVolumes.LerpVolumeUnitDirectionIndoorsOutdoorsInterpolant
// Size: 0x48 (Inherited: 0x28)
struct ULerpVolumeUnitDirectionIndoorsOutdoorsInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesUnitDirectionName Name; // 0x28(0x08)
	struct FVector IndoorsValue; // 0x30(0x0c)
	struct FVector OutdoorsValue; // 0x3c(0x0c)
};

// Class LerpVolumes.LerpVolumeColorIndoorsOutdoorsInterpolant
// Size: 0x50 (Inherited: 0x28)
struct ULerpVolumeColorIndoorsOutdoorsInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesColorName Name; // 0x28(0x08)
	struct FLinearColor IndoorsValue; // 0x30(0x10)
	struct FLinearColor OutdoorsValue; // 0x40(0x10)
};

// Class LerpVolumes.LerpVolumeTagIndoorsOutdoorsInterpolant
// Size: 0x60 (Inherited: 0x28)
struct ULerpVolumeTagIndoorsOutdoorsInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesTagName Name; // 0x28(0x08)
	struct FString IndoorsValue; // 0x30(0x10)
	struct FString OutdoorsValue; // 0x40(0x10)
	struct FName IndoorsValueName; // 0x50(0x08)
	struct FName OutdoorsValueName; // 0x58(0x08)
};

// Class LerpVolumes.LerpVolumeLevelNameInterpolantBase
// Size: 0x28 (Inherited: 0x28)
struct ULerpVolumeLevelNameInterpolantBase : ULerpVolumeInterpolant {
};

// Class LerpVolumes.LerpVolumeManualLevelNameInterpolant
// Size: 0x38 (Inherited: 0x28)
struct ULerpVolumeManualLevelNameInterpolant : ULerpVolumeLevelNameInterpolantBase {
	struct FLerpVolumesTagName Name; // 0x28(0x08)
	struct FName UseLevelName; // 0x30(0x08)
};

// Class LerpVolumes.LerpVolumeLevelNameInterpolant
// Size: 0x38 (Inherited: 0x28)
struct ULerpVolumeLevelNameInterpolant : ULerpVolumeLevelNameInterpolantBase {
	struct FLerpVolumesTagName Name; // 0x28(0x08)
	struct FLerpVolumesLevelName LevelName; // 0x30(0x08)
};

// Class LerpVolumes.LerpVolumeLevelAudioLocationNameInterpolant
// Size: 0x38 (Inherited: 0x28)
struct ULerpVolumeLevelAudioLocationNameInterpolant : ULerpVolumeLevelNameInterpolantBase {
	struct FLerpVolumesTagName Name; // 0x28(0x08)
	struct FLerpVolumesAudioStateGroupLocation LevelName; // 0x30(0x08)
};

// Class LerpVolumes.LerpVolumeFinalLevelNameInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeFinalLevelNameInterpolant : ULerpVolumeFinalTagInterpolant {
};

// Class LerpVolumes.LerpVolumeFinalLastLevelNameInterpolant
// Size: 0x38 (Inherited: 0x30)
struct ULerpVolumeFinalLastLevelNameInterpolant : ULerpVolumeFinalTagInterpolant {
	struct FLerpVolumesTagName LevelNameInterpolant; // 0x30(0x08)
};

// Class LerpVolumes.LerpVolumeFullLevelNameInterpolant
// Size: 0x38 (Inherited: 0x28)
struct ULerpVolumeFullLevelNameInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesTagName Name; // 0x28(0x08)
	bool bExhaustiveLevels; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class LerpVolumes.LerpVolumeDistanceMetersInterpolant
// Size: 0x30 (Inherited: 0x28)
struct ULerpVolumeDistanceMetersInterpolant : ULerpVolumeInterpolant {
	struct FLerpVolumesScalarName Name; // 0x28(0x08)
};

// Class LerpVolumes.LerpVolumeDistanceFromWallInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeDistanceFromWallInterpolant : ULerpVolumeDistanceMetersInterpolant {
};

// Class LerpVolumes.LerpVolumeDistanceFromOppositeWallInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeDistanceFromOppositeWallInterpolant : ULerpVolumeDistanceFromWallInterpolant {
};

// Class LerpVolumes.LerpVolumeDistanceFromCenterInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeDistanceFromCenterInterpolant : ULerpVolumeDistanceMetersInterpolant {
};

// Class LerpVolumes.LerpVolumeDistanceFromCenterXYInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeDistanceFromCenterXYInterpolant : ULerpVolumeDistanceMetersInterpolant {
};

// Class LerpVolumes.LerpVolumeDistanceToCeilingInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeDistanceToCeilingInterpolant : ULerpVolumeDistanceMetersInterpolant {
};

// Class LerpVolumes.LerpVolumeDistanceToFloorInterpolant
// Size: 0x30 (Inherited: 0x30)
struct ULerpVolumeDistanceToFloorInterpolant : ULerpVolumeDistanceMetersInterpolant {
};

// Class LerpVolumes.LerpVolume
// Size: 0x2f0 (Inherited: 0x280)
struct ALerpVolume : AVolume {
	char pad_280[0x8]; // 0x280(0x08)
	struct TArray<struct ULerpVolumeInterpolant*> Interpolants; // 0x288(0x10)
	struct FVolumeCenterlineSettings Shape; // 0x298(0x0c)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FBlendDomain BlendDomain; // 0x2a8(0x38)
	float Priority; // 0x2e0(0x04)
	float BlendRadius; // 0x2e4(0x04)
	float BlendWeight; // 0x2e8(0x04)
	char bUnbounded : 1; // 0x2ec(0x01)
	char bEnabled : 1; // 0x2ec(0x01)
	char pad_2EC_2 : 6; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)

	void SetPriority(float NewPriority); // Function LerpVolumes.LerpVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1c3b570
};

// Class LerpVolumes.LerpVolumeAttached
// Size: 0x2c0 (Inherited: 0x248)
struct ALerpVolumeAttached : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	struct AVolume* AttachVolume; // 0x250(0x08)
	struct TArray<struct ULerpVolumeInterpolant*> Interpolants; // 0x258(0x10)
	struct FVolumeCenterlineSettings Shape; // 0x268(0x0c)
	char pad_274[0x4]; // 0x274(0x04)
	struct FBlendDomain BlendDomain; // 0x278(0x38)
	float Priority; // 0x2b0(0x04)
	float BlendRadius; // 0x2b4(0x04)
	float BlendWeight; // 0x2b8(0x04)
	bool bEnabled; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)

	void SetPriority(float NewPriority); // Function LerpVolumes.LerpVolumeAttached.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1c3b5f0
	void Recompute(); // Function LerpVolumes.LerpVolumeAttached.Recompute // (Final|Native|Public) // @ game+0x1074730
};

// Class LerpVolumes.LerpVolumesPresistentContextData
// Size: 0x78 (Inherited: 0x28)
struct ULerpVolumesPresistentContextData : UObject {
	struct TMap<struct FName, struct ULerpVolumesPresistentContextDataBase*> DataMap; // 0x28(0x50)
};

// Class LerpVolumes.LerpVolumeInterface
// Size: 0x28 (Inherited: 0x28)
struct ULerpVolumeInterface : UInterface {
};

// Class LerpVolumes.LerpVolumesLibrary
// Size: 0x240 (Inherited: 0x30)
struct ULerpVolumesLibrary : UDataAsset {
	enum class ECollisionChannel VolumeCollisionChannel; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FLerpVolumesInterpolants Interpolants; // 0x38(0x1e0)
	struct TArray<struct ULerpVolumeInterpolant*> DefaultInterpolants; // 0x218(0x10)
	float DefaultInterpolantsPriority; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct TArray<struct ULerpVolumeFinalInterpolant*> FinalInterpolants; // 0x230(0x10)
};

// Class LerpVolumes.LerpVolumesSingleton
// Size: 0x8e0 (Inherited: 0x248)
struct ALerpVolumesSingleton : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	struct TArray<struct ULerpVolumeInterpolant*> Interpolants; // 0x250(0x10)
	struct TArray<struct ULerpVolumeFinalInterpolant*> FinalInterpolants; // 0x260(0x10)
	float Priority; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct FLerpVolumesInterpolants InterpolantDefaults; // 0x278(0x1e0)
	struct FLerpVolumesInterpolantsEvaluator CurrentState; // 0x458(0x1e8)
	char pad_640[0xa8]; // 0x640(0xa8)
	struct FLerpVolumesInterpolantsEvaluator LocalState; // 0x6e8(0x1e8)
	struct FVector LastLocalStatePosition; // 0x8d0(0x0c)
	bool bLastLocalStateValid; // 0x8dc(0x01)
	char pad_8DD[0x3]; // 0x8dd(0x03)

	void LerpVolumesSetWorldVectorDefault(struct UObject* WorldContextObject, struct FName VariableName, struct FVector VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldVectorDefault // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1c408d0
	void LerpVolumesSetWorldUnitDirectionDefault(struct UObject* WorldContextObject, struct FName VariableName, struct FVector VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldUnitDirectionDefault // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1c407c0
	void LerpVolumesSetWorldTagDefaultName(struct UObject* WorldContextObject, struct FName VariableName, struct FName VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldTagDefaultName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c406c0
	void LerpVolumesSetWorldTagDefault(struct UObject* WorldContextObject, struct FName VariableName, struct FString VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldTagDefault // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c40560
	void LerpVolumesSetWorldScalarDefault(struct UObject* WorldContextObject, struct FName VariableName, float VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldScalarDefault // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c40450
	void LerpVolumesSetWorldIntegerDefault(struct UObject* WorldContextObject, struct FName VariableName, int32_t VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldIntegerDefault // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1c40350
	void LerpVolumesSetWorldColorDefault(struct UObject* WorldContextObject, struct FName VariableName, struct FLinearColor VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesSetWorldColorDefault // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1c40240
	void LerpVolumesIsWorldVector(struct UObject* WorldContextObject, struct FName VariableName, bool& bExists); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c40120
	void LerpVolumesIsWorldUnitDirection(struct UObject* WorldContextObject, struct FName VariableName, bool& bExists); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldUnitDirection // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c40000
	void LerpVolumesIsWorldTag(struct UObject* WorldContextObject, struct FName VariableName, bool& bExists); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c3fec0
	void LerpVolumesIsWorldScalar(struct UObject* WorldContextObject, struct FName VariableName, bool& bExists); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldScalar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c3fda0
	void LerpVolumesIsWorldInteger(struct UObject* WorldContextObject, struct FName VariableName, bool& bExists); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldInteger // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c3fc80
	void LerpVolumesIsWorldColor(struct UObject* WorldContextObject, struct FName VariableName, bool& bExists); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesIsWorldColor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c3fb60
	bool LerpVolumesGetWorldVector(struct UObject* WorldContextObject, struct FName VariableName, struct FVector& VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c3fa40
	bool LerpVolumesGetWorldUnitDirection(struct UObject* WorldContextObject, struct FName VariableName, struct FVector& VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldUnitDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c3f920
	void LerpVolumesGetWorldType(struct UObject* WorldContextObject, struct FName VariableName, enum class ELerpVolumesInterpolantType& VariableType); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c3f810
	bool LerpVolumesGetWorldTag(struct UObject* WorldContextObject, struct FName VariableName, struct FString& VariableValue, enum class ELerpVolumesGetTagValueMode ValueMode); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldTag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c3f6a0
	bool LerpVolumesGetWorldScalar(struct UObject* WorldContextObject, struct FName VariableName, float& VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldScalar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c3f590
	bool LerpVolumesGetWorldInteger(struct UObject* WorldContextObject, struct FName VariableName, int32_t& VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldInteger // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1c3f480
	bool LerpVolumesGetWorldColor(struct UObject* WorldContextObject, struct FName VariableName, struct FLinearColor& VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetWorldColor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c3f360
	bool LerpVolumesGetVectorAtPosition(struct UObject* WorldContextObject, struct FVector Position, struct FName VariableName, struct FVector& VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetVectorAtPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c3f1f0
	bool LerpVolumesGetUnitDirectionAtPosition(struct UObject* WorldContextObject, struct FVector Position, struct FName VariableName, struct FVector& VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetUnitDirectionAtPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c3f080
	bool LerpVolumesGetTagAtPosition(struct UObject* WorldContextObject, struct FVector Position, struct FName VariableName, struct FString& VariableValue, enum class ELerpVolumesGetTagValueMode ValueMode); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetTagAtPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c3eed0
	bool LerpVolumesGetScalarAtPosition(struct UObject* WorldContextObject, struct FVector Position, struct FName VariableName, float& VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetScalarAtPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c3ed70
	bool LerpVolumesGetIntegerAtPosition(struct UObject* WorldContextObject, struct FVector Position, struct FName VariableName, int32_t& VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetIntegerAtPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c3ec10
	bool LerpVolumesGetColorAtPosition(struct UObject* WorldContextObject, struct FVector Position, struct FName VariableName, struct FLinearColor& VariableValue); // Function LerpVolumes.LerpVolumesSingleton.LerpVolumesGetColorAtPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1c3eaa0
};

// Class LerpVolumes.LerpVolumesLocalEvaluationComponent
// Size: 0x620 (Inherited: 0x220)
struct ULerpVolumesLocalEvaluationComponent : USceneComponent {
	float SecondsPerUpdate; // 0x218(0x04)
	float DistanceThreshold; // 0x21c(0x04)
	bool bUseDistanceThreshold; // 0x220(0x01)
	bool bUpdatesEnabled; // 0x221(0x01)
	struct FMulticastInlineDelegate EvaluationDelegate; // 0x228(0x10)
	struct ULerpVolumesLibrary* LocalLibrary; // 0x238(0x08)
	struct FLerpVolumesInterpolants LocalInterpolantDefaults; // 0x240(0x1e0)
	struct FLerpVolumesInterpolantsEvaluator LocalState; // 0x420(0x1e8)
	float UpdateCountdown; // 0x608(0x04)
	struct FVector LastPosition; // 0x60c(0x0c)
	bool bLastPositionValid; // 0x618(0x01)
	char pad_61B[0x5]; // 0x61b(0x05)

	void SetUpdatesEnabled(bool Enable); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.SetUpdatesEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1c40a70
	void SetLocalLibrary(struct ULerpVolumesLibrary* NewLocalLibrary); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.SetLocalLibrary // (Final|Native|Public|BlueprintCallable) // @ game+0x1c409e0
	bool IsLocalVector(struct FName VariableName); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalVector // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3ea00
	bool IsLocalUnitDirection(struct FName VariableName); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalUnitDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e960
	bool IsLocalTag(struct FName VariableName); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e8a0
	bool IsLocalScalar(struct FName VariableName); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e810
	bool IsLocalInteger(struct FName VariableName); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e780
	bool IsLocalColor(struct FName VariableName); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.IsLocalColor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e6e0
	bool GetLocalVector(struct FName VariableName, struct FVector& VariableValue); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e600
	bool GetLocalUnitDirection(struct FName VariableName, struct FVector& VariableValue); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalUnitDirection // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e520
	void GetLocalType(struct FName VariableName, enum class ELerpVolumesInterpolantType& VariableType); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e440
	bool GetLocalTag(struct FName VariableName, struct FString& VariableValue); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalTag // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e340
	bool GetLocalScalar(struct FName VariableName, float& VariableValue); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalScalar // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e260
	bool GetLocalInteger(struct FName VariableName, int32_t& VariableValue); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalInteger // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e180
	bool GetLocalColor(struct FName VariableName, struct FLinearColor& VariableValue); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.GetLocalColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e0a0
	void ForceUpdate(); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.ForceUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x1c3e080
	bool AreUpdatesEnabled(); // Function LerpVolumes.LerpVolumesLocalEvaluationComponent.AreUpdatesEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c3e060
};

