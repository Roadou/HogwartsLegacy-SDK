// Enum ChaosCaching.EStartMode
enum class EStartMode : uint8 {
	Timed = 0,
	Triggered = 1,
	EStartMode_MAX = 2
};

// Enum ChaosCaching.ECacheMode
enum class ECacheMode : uint8 {
	None = 0,
	Play = 1,
	Record = 2,
	ECacheMode_MAX = 3
};

// ScriptStruct ChaosCaching.ObservedComponent
// Size: 0xf0 (Inherited: 0x00)
struct FObservedComponent {
	struct FName CacheName; // 0x00(0x08)
	struct FComponentReference ComponentRef; // 0x08(0x28)
	bool bIsSimulating; // 0x30(0x01)
	char pad_31[0xbf]; // 0x31(0xbf)
};

// ScriptStruct ChaosCaching.CacheEventTrack
// Size: 0x38 (Inherited: 0x00)
struct FCacheEventTrack {
	struct FName Name; // 0x00(0x08)
	struct UScriptStruct* Struct; // 0x08(0x08)
	struct TArray<float> TimeStamps; // 0x10(0x10)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct ChaosCaching.CacheEventBase
// Size: 0x08 (Inherited: 0x00)
struct FCacheEventBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ChaosCaching.CacheSpawnableTemplate
// Size: 0x70 (Inherited: 0x00)
struct FCacheSpawnableTemplate {
	struct UObject* DuplicatedTemplate; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform InitialTransform; // 0x10(0x30)
	struct FTransform ComponentTransform; // 0x40(0x30)
};

// ScriptStruct ChaosCaching.PerParticleCacheData
// Size: 0x98 (Inherited: 0x00)
struct FPerParticleCacheData {
	struct FParticleTransformTrack TransformData; // 0x00(0x48)
	struct TMap<struct FName, struct FRichCurve> CurveData; // 0x48(0x50)
};

// ScriptStruct ChaosCaching.ParticleTransformTrack
// Size: 0x48 (Inherited: 0x00)
struct FParticleTransformTrack {
	struct FRawAnimSequenceTrack RawTransformTrack; // 0x00(0x30)
	float BeginOffset; // 0x30(0x04)
	bool bDeactivateOnEnd; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct TArray<float> KeyTimestamps; // 0x38(0x10)
};

// ScriptStruct ChaosCaching.CollisionEvent
// Size: 0x80 (Inherited: 0x08)
struct FCollisionEvent : FCacheEventBase {
	struct FVector Location; // 0x08(0x0c)
	struct FVector AccumulatedImpulse; // 0x14(0x0c)
	struct FVector Normal; // 0x20(0x0c)
	struct FVector Velocity1; // 0x2c(0x0c)
	struct FVector Velocity2; // 0x38(0x0c)
	struct FVector DeltaVelocity1; // 0x44(0x0c)
	struct FVector DeltaVelocity2; // 0x50(0x0c)
	struct FVector AngularVelocity1; // 0x5c(0x0c)
	struct FVector AngularVelocity2; // 0x68(0x0c)
	float Mass1; // 0x74(0x04)
	float Mass2; // 0x78(0x04)
	float PenetrationDepth; // 0x7c(0x04)
};

// ScriptStruct ChaosCaching.BreakingEvent
// Size: 0x50 (Inherited: 0x08)
struct FBreakingEvent : FCacheEventBase {
	int32_t Index; // 0x08(0x04)
	struct FVector Location; // 0x0c(0x0c)
	struct FVector Velocity; // 0x18(0x0c)
	struct FVector AngularVelocity; // 0x24(0x0c)
	float Mass; // 0x30(0x04)
	struct FVector BoundingBoxMin; // 0x34(0x0c)
	struct FVector BoundingBoxMax; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ChaosCaching.EnableStateEvent
// Size: 0x10 (Inherited: 0x08)
struct FEnableStateEvent : FCacheEventBase {
	int32_t Index; // 0x08(0x04)
	bool bEnable; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

