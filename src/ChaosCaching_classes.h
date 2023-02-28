// Class ChaosCaching.ChaosCacheCollection
// Size: 0x38 (Inherited: 0x28)
struct UChaosCacheCollection : UObject {
	struct TArray<struct UChaosCache*> Caches; // 0x28(0x10)
};

// Class ChaosCaching.ChaosCacheManager
// Size: 0x2f0 (Inherited: 0x248)
struct AChaosCacheManager : AActor {
	struct UChaosCacheCollection* CacheCollection; // 0x248(0x08)
	enum class ECacheMode CacheMode; // 0x250(0x01)
	enum class EStartMode StartMode; // 0x251(0x01)
	char pad_252[0x2]; // 0x252(0x02)
	float StartTime; // 0x254(0x04)
	char pad_258[0x8]; // 0x258(0x08)
	struct TArray<struct FObservedComponent> ObservedComponents; // 0x260(0x10)
	char pad_270[0x80]; // 0x270(0x80)

	void TriggerComponentByCache(struct FName InCacheName); // Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache // (Final|Native|Protected|BlueprintCallable) // @ game+0x22ae430
	void TriggerComponent(struct UPrimitiveComponent* InComponent); // Function ChaosCaching.ChaosCacheManager.TriggerComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0x22ae3a0
	void TriggerAll(); // Function ChaosCaching.ChaosCacheManager.TriggerAll // (Final|Native|Protected|BlueprintCallable) // @ game+0x22ae380
	void SetStartTime(float InStartTime); // Function ChaosCaching.ChaosCacheManager.SetStartTime // (Final|Native|Public) // @ game+0x22ae300
	void ResetSingleTransform(int32_t InIndex); // Function ChaosCaching.ChaosCacheManager.ResetSingleTransform // (Final|Native|Public|BlueprintCallable) // @ game+0x22ae270
	void ResetAllComponentTransforms(); // Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms // (Final|Native|Public|BlueprintCallable) // @ game+0x22ae250
};

// Class ChaosCaching.ChaosCachePlayer
// Size: 0x2f0 (Inherited: 0x2f0)
struct AChaosCachePlayer : AChaosCacheManager {
};

// Class ChaosCaching.ChaosCache
// Size: 0x1a0 (Inherited: 0x28)
struct UChaosCache : UObject {
	float RecordedDuration; // 0x28(0x04)
	uint32_t NumRecordedFrames; // 0x2c(0x04)
	struct TArray<int32_t> TrackToParticle; // 0x30(0x10)
	struct TArray<struct FPerParticleCacheData> ParticleTracks; // 0x40(0x10)
	struct TMap<struct FName, struct FRichCurve> CurveData; // 0x50(0x50)
	struct TMap<struct FName, struct FCacheEventTrack> EventTracks; // 0xa0(0x50)
	struct FCacheSpawnableTemplate Spawnable; // 0xf0(0x70)
	struct FGuid AdapterGuid; // 0x160(0x10)
	int32_t Version; // 0x170(0x04)
	char pad_174[0x2c]; // 0x174(0x2c)
};

