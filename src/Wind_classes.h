// Class Wind.NiagaraDataInterfaceWindMap
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceWindMap : UNiagaraDataInterface {
};

// Class Wind.WindAlignComponent
// Size: 0x240 (Inherited: 0x220)
struct UWindAlignComponent : UWindSourceComponentBase {
	float Outdoors; // 0x220(0x04)
	float Priority; // 0x224(0x04)
	float Strength; // 0x228(0x04)
	float SpeedMod; // 0x22c(0x04)
	float TransitionDistance; // 0x230(0x04)
	bool bBidirectional; // 0x234(0x01)
	char pad_235[0xb]; // 0x235(0x0b)

	void SetTransitionDistance(float InTransitionDistance); // Function Wind.WindAlignComponent.SetTransitionDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x1d55440
	void SetStrength(float InNewStrength); // Function Wind.WindAlignComponent.SetStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x1d55340
	void SetSpeedMod(float InNewSpeed); // Function Wind.WindAlignComponent.SetSpeedMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1d552c0
	void SetPriority(float InNewPriority); // Function Wind.WindAlignComponent.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1d55140
	void SetOutdoors(float InNewOutdoors); // Function Wind.WindAlignComponent.SetOutdoors // (Final|Native|Public|BlueprintCallable) // @ game+0x1d550c0
	void SetBidirectional(bool bInNewBidirectional); // Function Wind.WindAlignComponent.SetBidirectional // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54af0
};

// Class Wind.WindAlign
// Size: 0x250 (Inherited: 0x248)
struct AWindAlign : AInfo {
	struct UWindAlignComponent* Component; // 0x248(0x08)
};

// Class Wind.WindDeflectorComponent
// Size: 0x240 (Inherited: 0x220)
struct UWindDeflectorComponent : UWindSourceComponentBase {
	float Outdoors; // 0x220(0x04)
	float Priority; // 0x224(0x04)
	float Strength; // 0x228(0x04)
	float SpeedMod; // 0x22c(0x04)
	float TransitionDistanceAlongDirection; // 0x230(0x04)
	float FullEffectAlongNormal; // 0x234(0x04)
	bool bBidirectional; // 0x238(0x01)
	bool bFlipNormal; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)

	void SetTransitionDistanceAlongDirection(float InNewTransitionDistanceAlongDirection); // Function Wind.WindDeflectorComponent.SetTransitionDistanceAlongDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x1d55440
	void SetStrength(float InNewStrength); // Function Wind.WindDeflectorComponent.SetStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x1d55340
	void SetSpeedMod(float InNewSpeed); // Function Wind.WindDeflectorComponent.SetSpeedMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1d552c0
	void SetPriority(float InNewPriority); // Function Wind.WindDeflectorComponent.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x1d55140
	void SetOutdoors(float InNewOutdoors); // Function Wind.WindDeflectorComponent.SetOutdoors // (Final|Native|Public|BlueprintCallable) // @ game+0x1d550c0
	void SetFullEffectAlongNormal(float InNewFullEffectAlongNormal); // Function Wind.WindDeflectorComponent.SetFullEffectAlongNormal // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54f40
	void SetFlipNormal(bool bInNewFlipNormal); // Function Wind.WindDeflectorComponent.SetFlipNormal // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54eb0
	void SetBidirectional(bool bInNewBidirectional); // Function Wind.WindDeflectorComponent.SetBidirectional // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54b80
};

// Class Wind.WindDeflector
// Size: 0x250 (Inherited: 0x248)
struct AWindDeflector : AInfo {
	struct UWindDeflectorComponent* Component; // 0x248(0x08)
};

// Class Wind.WindGustControllerSimplexNoise
// Size: 0x50 (Inherited: 0x28)
struct UWindGustControllerSimplexNoise : UWindGustController {
	float TimeScale; // 0x28(0x04)
	struct FVector PositionScale; // 0x2c(0x0c)
	enum class EWindGustSimplexNoiseMode Mode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Seed; // 0x3c(0x04)
	struct FVector InvPositionScale; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Wind.WindGustControllerSimplexNoiseSpeed
// Size: 0x68 (Inherited: 0x50)
struct UWindGustControllerSimplexNoiseSpeed : UWindGustControllerSimplexNoise {
	struct FVector2D NoiseRangeIn; // 0x50(0x08)
	struct FVector2D GustRangeOut; // 0x58(0x08)
	enum class EWindGustCurveRemap Remap; // 0x60(0x01)
	enum class EWindGustSpeedOp SpeedOp; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class Wind.WindGustControllerSimplexNoiseDirection
// Size: 0x68 (Inherited: 0x50)
struct UWindGustControllerSimplexNoiseDirection : UWindGustControllerSimplexNoise {
	struct FVector2D NoiseRangeIn; // 0x50(0x08)
	struct FVector2D GustRangeOut; // 0x58(0x08)
	enum class EWindGustCurveRemap Remap; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Wind.Wind
// Size: 0x28 (Inherited: 0x28)
struct UWind : UBlueprintFunctionLibrary {

	void WindWorldAzimuthToCompass(float WindAzimuthDegrees, enum class EWindDirectionCompass& WindDirectionCompass); // Function Wind.Wind.WindWorldAzimuthToCompass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d55c10
	void WindDirectionToWorldAzimuthAltitude(struct UObject* WorldContextObject, struct FVector WindDirection, float& WindAzimuthDegrees, float& WindAltitudeDegrees); // Function Wind.Wind.WindDirectionToWorldAzimuthAltitude // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d55aa0
	void WindDirectionToWorldAzimuth(struct UObject* WorldContextObject, struct FVector WindDirection, float& WindAzimuthDegrees); // Function Wind.Wind.WindDirectionToWorldAzimuth // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d55980
	void WindDirectionToCompass(struct UObject* WorldContextObject, struct FVector WindDirection, enum class EWindDirectionCompass& WindDirectionCompass); // Function Wind.Wind.WindDirectionToCompass // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d55860
	void WindDirectionCompassName(enum class EWindDirectionCompass WindDirectionCompass, struct FString& CompassName); // Function Wind.Wind.WindDirectionCompassName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d55780
	void GetWindAtPosition(struct UObject* WorldContextObject, struct FVector Position, struct FVector& WindDirection, float& WindSpeed, float IncludeOutdoors); // Function Wind.Wind.GetWindAtPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d544e0
	void GetWindAtComponent(struct USceneComponent* SceneComponent, struct FVector& WindDirection, float& WindSpeed, bool& bIndoors); // Function Wind.Wind.GetWindAtComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d54370
	void GetWindAtActor(struct AActor* Actor, struct FVector& WindDirection, float& WindSpeed, bool& bIndoors); // Function Wind.Wind.GetWindAtActor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d54200
	void BeaufortScaleName(enum class EBeaufortWindScale BeaufortWindScale, int32_t& ScaleINdex, struct FString& ScaleName, struct FString& ScaleDescription); // Function Wind.Wind.BeaufortScaleName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d54020
	void BeaufortScaleFromSpeed(float WindSpeed, enum class EBeaufortWindScale& BeaufortWindScale); // Function Wind.Wind.BeaufortScaleFromSpeed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1d53f50
};

// Class Wind.InsideOutside
// Size: 0x28 (Inherited: 0x28)
struct UInsideOutside : UBlueprintFunctionLibrary {

	bool PositionOutside(struct UObject* WorldContextObject, struct FVector Position, bool bExact); // Function Wind.InsideOutside.PositionOutside // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d547f0
	bool PositionInside(struct UObject* WorldContextObject, struct FVector Position, bool bExact); // Function Wind.InsideOutside.PositionInside // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1d546b0
	bool ActorOutsideExactCached(struct AActor* Actor); // Function Wind.InsideOutside.ActorOutsideExactCached // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d53eb0
	bool ActorOutsideCoarseCached(struct AActor* Actor); // Function Wind.InsideOutside.ActorOutsideCoarseCached // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d53e10
	bool ActorOutsideCached(struct AActor* Actor); // Function Wind.InsideOutside.ActorOutsideCached // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d53d80
	bool ActorInsideExactCached(struct AActor* Actor); // Function Wind.InsideOutside.ActorInsideExactCached // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d53cf0
	bool ActorInsideCoarseCached(struct AActor* Actor); // Function Wind.InsideOutside.ActorInsideCoarseCached // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d53c60
	bool ActorInsideCached(struct AActor* Actor); // Function Wind.InsideOutside.ActorInsideCached // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1d53bd0
};

// Class Wind.WindTrueNorthComponent
// Size: 0x220 (Inherited: 0x220)
struct UWindTrueNorthComponent : USceneComponent {
};

// Class Wind.WindTrueNorth
// Size: 0x250 (Inherited: 0x248)
struct AWindTrueNorth : AInfo {
	struct UWindTrueNorthComponent* Component; // 0x248(0x08)
};

// Class Wind.WindMapComponent
// Size: 0x220 (Inherited: 0x220)
struct UWindMapComponent : USceneComponent {
};

// Class Wind.WindMapActor
// Size: 0x250 (Inherited: 0x248)
struct AWindMapActor : AInfo {
	struct UWindMapComponent* Component; // 0x248(0x08)
};

// Class Wind.WindMapSubsystem
// Size: 0x1d0 (Inherited: 0x30)
struct UWindMapSubsystem : UWorldSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
	struct UMaterialParameterCollection* MaterialParams; // 0x40(0x08)
	struct UNiagaraParameterCollection* NiagaraParams; // 0x48(0x08)
	char pad_50[0x180]; // 0x50(0x180)
};

// Class Wind.WindSourceDebugActor
// Size: 0x298 (Inherited: 0x248)
struct AWindSourceDebugActor : AActor {
	int32_t PointsXY; // 0x248(0x04)
	int32_t PointsZ; // 0x24c(0x04)
	float SpacingXY; // 0x250(0x04)
	float SpacingZ; // 0x254(0x04)
	struct FVector2D WindSpeedMinMax; // 0x258(0x08)
	struct FVector2D WindSpeedLengthScaleMinMax; // 0x260(0x08)
	struct UStaticMesh* WindArrowMesh; // 0x268(0x08)
	struct UMaterialInterface* WindArrowMeshMaterialOverride; // 0x270(0x08)
	struct FVector ScaleXYZ; // 0x278(0x0c)
	bool bExactIndoors; // 0x284(0x01)
	bool bPerSampleInsideTesting; // 0x285(0x01)
	bool bWindSpeedLengthScaling; // 0x286(0x01)
	char pad_287[0x1]; // 0x287(0x01)
	struct UWindSourceDebugUpdateComponent* UpdatePump; // 0x288(0x08)
	struct UInstancedStaticMeshComponent* WindArrows; // 0x290(0x08)
};

// Class Wind.WindSourceDebugUpdateComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UWindSourceDebugUpdateComponent : UActorComponent {
	int32_t UpdatesPerSecond; // 0xc8(0x04)
	bool bOnlyTickAfterBeginPlay; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// Class Wind.WindSourceVortexComponent
// Size: 0x290 (Inherited: 0x240)
struct UWindSourceVortexComponent : UWindSourceComponentBaseData {
	float Height; // 0x238(0x04)
	float Radius; // 0x23c(0x04)
	float InnerRadius; // 0x240(0x04)
	float Strength; // 0x244(0x04)
	float Speed; // 0x248(0x04)
	struct UWindEnvelopeController* Envelope; // 0x250(0x08)
	int32_t EnvelopeAffects; // 0x258(0x04)
	bool bAutoKillAfterEnvelope; // 0x25c(0x01)
	struct FMulticastInlineDelegate TriggerEvent; // 0x260(0x10)
	float StartTime; // 0x270(0x04)
	bool bActive; // 0x274(0x01)
	char pad_276[0x1a]; // 0x276(0x1a)

	void UnsetEnvelopeAffects(enum class EWindVortexEnvelopeAffects InNewEnvelopeAffects); // Function Wind.WindSourceVortexComponent.UnsetEnvelopeAffects // (Final|Native|Public|BlueprintCallable) // @ game+0x1d55700
	void TestEnvelopeAffects(enum class EWindVortexEnvelopeAffects InNewEnvelopeAffects, bool& bIsSet); // Function Wind.WindSourceVortexComponent.TestEnvelopeAffects // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d555a0
	void SetStrength(float InNewStrength); // Function Wind.WindSourceVortexComponent.SetStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x1d553c0
	void SetSpeed(float InNewSpeed); // Function Wind.WindSourceVortexComponent.SetSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x1d55240
	void SetRadius(float InNewRadius); // Function Wind.WindSourceVortexComponent.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x1d551c0
	void SetInnerRadius(float InNewInnerRadius); // Function Wind.WindSourceVortexComponent.SetInnerRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x1d55040
	void SetHeight(float InNewHeight); // Function Wind.WindSourceVortexComponent.SetHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54fc0
	void SetEnvelopeAffects(enum class EWindVortexEnvelopeAffects InNewEnvelopeAffects); // Function Wind.WindSourceVortexComponent.SetEnvelopeAffects // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54e30
	void SetEnvelope(struct UWindEnvelopeController* InNewEnvelope); // Function Wind.WindSourceVortexComponent.SetEnvelope // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54c10
	void SetAutoKillAfterEnvelope(bool bInNewAutoKillAfterEnvelope); // Function Wind.WindSourceVortexComponent.SetAutoKillAfterEnvelope // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54a60
	void ClearEnvelopeAffects(); // Function Wind.WindSourceVortexComponent.ClearEnvelopeAffects // (Final|Native|Public|BlueprintCallable) // @ game+0x1d541e0
};

// Class Wind.WindVortexSource
// Size: 0x250 (Inherited: 0x248)
struct AWindVortexSource : AInfo {
	struct UWindSourceVortexComponent* Component; // 0x248(0x08)
};

// Class Wind.WindEnvelopeController
// Size: 0x28 (Inherited: 0x28)
struct UWindEnvelopeController : UObject {
};

// Class Wind.WindDirectionalSourceWithEnvelopeComponent
// Size: 0x290 (Inherited: 0x250)
struct UWindDirectionalSourceWithEnvelopeComponent : UWindDirectionalSourceComponent {
	struct UWindEnvelopeController* Envelope; // 0x250(0x08)
	enum class EWindDirectionalEnvelopeAffects EnvelopeAffects; // 0x258(0x01)
	bool bAutoKillAfterEnvelope; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)
	struct FMulticastInlineDelegate TriggerEvent; // 0x260(0x10)
	float StartTime; // 0x270(0x04)
	bool bActive; // 0x274(0x01)
	char pad_275[0x1b]; // 0x275(0x1b)

	void SetEnvelopeAffects(enum class EWindDirectionalEnvelopeAffects InNewEnvelopeAffects); // Function Wind.WindDirectionalSourceWithEnvelopeComponent.SetEnvelopeAffects // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54d30
	void SetEnvelope(struct UWindEnvelopeController* InNewEnvelope); // Function Wind.WindDirectionalSourceWithEnvelopeComponent.SetEnvelope // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54c10
	void SetAutoKillAfterEnvelope(bool bInNewAutoKillAfterEnvelope); // Function Wind.WindDirectionalSourceWithEnvelopeComponent.SetAutoKillAfterEnvelope // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54940
};

// Class Wind.WindPointSourceWithEnvelopeComponent
// Size: 0x280 (Inherited: 0x250)
struct UWindPointSourceWithEnvelopeComponent : UWindPointSourceComponent {
	struct UWindEnvelopeController* Envelope; // 0x248(0x08)
	int32_t EnvelopeAffects; // 0x250(0x04)
	bool bAutoKillAfterEnvelope; // 0x254(0x01)
	struct FMulticastInlineDelegate TriggerEvent; // 0x258(0x10)
	float StartTime; // 0x268(0x04)
	bool bActive; // 0x26c(0x01)
	char pad_272[0xe]; // 0x272(0x0e)

	void UnsetEnvelopeAffects(enum class EWindPointEnvelopeAffects InNewEnvelopeAffects); // Function Wind.WindPointSourceWithEnvelopeComponent.UnsetEnvelopeAffects // (Final|Native|Public|BlueprintCallable) // @ game+0x1d55680
	void TestEnvelopeAffects(enum class EWindPointEnvelopeAffects InNewEnvelopeAffects, bool& bIsSet); // Function Wind.WindPointSourceWithEnvelopeComponent.TestEnvelopeAffects // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d554c0
	void SetEnvelopeAffects(enum class EWindPointEnvelopeAffects InNewEnvelopeAffects); // Function Wind.WindPointSourceWithEnvelopeComponent.SetEnvelopeAffects // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54db0
	void SetEnvelope(struct UWindEnvelopeController* InNewEnvelope); // Function Wind.WindPointSourceWithEnvelopeComponent.SetEnvelope // (Final|Native|Public|BlueprintCallable) // @ game+0x1d54ca0
	void SetAutoKillAfterEnvelope(bool bInNewAutoKillAfterEnvelope); // Function Wind.WindPointSourceWithEnvelopeComponent.SetAutoKillAfterEnvelope // (Final|Native|Public|BlueprintCallable) // @ game+0x1d549d0
	void ClearEnvelopeAffects(); // Function Wind.WindPointSourceWithEnvelopeComponent.ClearEnvelopeAffects // (Final|Native|Public|BlueprintCallable) // @ game+0x1d541c0
};

// Class Wind.WindDirectionalSourceWithEnvelope
// Size: 0x250 (Inherited: 0x248)
struct AWindDirectionalSourceWithEnvelope : AInfo {
	struct UWindDirectionalSourceWithEnvelopeComponent* Component; // 0x248(0x08)
};

// Class Wind.WindPointSourceWithEnvelope
// Size: 0x250 (Inherited: 0x248)
struct AWindPointSourceWithEnvelope : AInfo {
	struct UWindPointSourceWithEnvelopeComponent* Component; // 0x248(0x08)
};

// Class Wind.WindEnvelopeControllerCurveBase
// Size: 0x28 (Inherited: 0x28)
struct UWindEnvelopeControllerCurveBase : UWindEnvelopeController {
};

// Class Wind.WindEnvelopeControllerCurve
// Size: 0x30 (Inherited: 0x28)
struct UWindEnvelopeControllerCurve : UWindEnvelopeControllerCurveBase {
	struct UCurveFloat* Envelope; // 0x28(0x08)
};

// Class Wind.WindEnvelopeControllerInlineCurve
// Size: 0xb0 (Inherited: 0x28)
struct UWindEnvelopeControllerInlineCurve : UWindEnvelopeControllerCurveBase {
	struct FRuntimeFloatCurve Envelope; // 0x28(0x88)
};

// Class Wind.WindEnvelopeControllerASR
// Size: 0x40 (Inherited: 0x28)
struct UWindEnvelopeControllerASR : UWindEnvelopeController {
	float Delay; // 0x28(0x04)
	float Attack; // 0x2c(0x04)
	float Sustain; // 0x30(0x04)
	float Release; // 0x34(0x04)
	float Amplitude; // 0x38(0x04)
	bool bLoop; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class Wind.WindEnvelopeControllerOne
// Size: 0x28 (Inherited: 0x28)
struct UWindEnvelopeControllerOne : UWindEnvelopeControllerCurveBase {
};

// Class Wind.WindAffectedTickingComponent
// Size: 0x250 (Inherited: 0x240)
struct UWindAffectedTickingComponent : UWindAffectedComponent {
	bool bTickBeforeBeginPlay; // 0x240(0x01)
	char pad_241[0xf]; // 0x241(0x0f)
};

// Class Wind.WindAffectedOrientToTickingComponent
// Size: 0x250 (Inherited: 0x250)
struct UWindAffectedOrientToTickingComponent : UWindAffectedTickingComponent {
	bool bOrientToWind; // 0x248(0x01)
};

// Class Wind.WindAffectedScaleOrientToTickingComponent
// Size: 0x290 (Inherited: 0x250)
struct UWindAffectedScaleOrientToTickingComponent : UWindAffectedOrientToTickingComponent {
	struct FWindAffectedScales WindScaling; // 0x250(0x34)
	char pad_284[0xc]; // 0x284(0x0c)
};

// Class Wind.WindAffectedUberTickingComponent
// Size: 0x2c0 (Inherited: 0x290)
struct UWindAffectedUberTickingComponent : UWindAffectedScaleOrientToTickingComponent {
	struct UMaterialInstanceDynamic* WindAffectedMaterial; // 0x288(0x08)
	struct FWindAffectedParameters WindAffectedParameters; // 0x290(0x24)
	char pad_2BC[0x4]; // 0x2bc(0x04)
};

// Class Wind.WindAffectedMaterialTickingComponent
// Size: 0x280 (Inherited: 0x250)
struct UWindAffectedMaterialTickingComponent : UWindAffectedTickingComponent {
	struct UMaterialInstanceDynamic* WindAffectedMaterial; // 0x248(0x08)
	struct FWindAffectedParameters WindAffectedParameters; // 0x250(0x24)
	char pad_27C[0x4]; // 0x27c(0x04)
};

