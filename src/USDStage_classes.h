// Class USDStage.UsdPrimTwin
// Size: 0xd8 (Inherited: 0x28)
struct UUsdPrimTwin : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FString PrimPath; // 0x40(0x10)
	struct TSoftObjectPtr<AActor> SpawnedActor; // 0x50(0x28)
	struct TWeakObjectPtr<struct USceneComponent> SceneComponent; // 0x78(0x08)
	struct TMap<struct FString, struct UUsdPrimTwin*> Children; // 0x80(0x50)
	struct TWeakObjectPtr<struct UUsdPrimTwin> Parent; // 0xd0(0x08)
};

// Class USDStage.UsdStageActor
// Size: 0x490 (Inherited: 0x248)
struct AUsdStageActor : AActor {
	struct FFilePath RootLayer; // 0x248(0x10)
	enum class EUsdInitialLoadSet InitialLoadSet; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	int32_t PurposesToLoad; // 0x25c(0x04)
	struct FName RenderContext; // 0x260(0x08)
	struct USceneComponent* SceneComponent; // 0x268(0x08)
	float Time; // 0x270(0x04)
	float StartTimeCode; // 0x274(0x04)
	float EndTimeCode; // 0x278(0x04)
	float TimeCodesPerSecond; // 0x27c(0x04)
	struct ULevelSequence* LevelSequence; // 0x280(0x08)
	char pad_288[0x60]; // 0x288(0x60)
	struct UUsdPrimTwin* RootUsdTwin; // 0x2e8(0x08)
	struct TSet<struct FString> PrimsToAnimate; // 0x2f0(0x50)
	struct TMap<struct UObject*, struct FString> ObjectsToWatch; // 0x340(0x50)
	struct UUsdAssetCache* AssetCache; // 0x390(0x08)
	struct UUsdTransactor* Transactor; // 0x398(0x08)
	char pad_3A0[0xf0]; // 0x3a0(0xf0)

	void SetTime(float InTime); // Function USDStage.UsdStageActor.SetTime // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x22bdbb0
	void SetRootLayer(struct FString RootFilePath); // Function USDStage.UsdStageActor.SetRootLayer // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x22bdb10
	void SetRenderContext(struct FName& NewRenderContext); // Function USDStage.UsdStageActor.SetRenderContext // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x22bda80
	void SetPurposesToLoad(int32_t NewPurposesToLoad); // Function USDStage.UsdStageActor.SetPurposesToLoad // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x22bd9f0
	void SetInitialLoadSet(enum class EUsdInitialLoadSet NewLoadSet); // Function USDStage.UsdStageActor.SetInitialLoadSet // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x22bd970
	float GetTime(); // Function USDStage.UsdStageActor.GetTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1373f10
	struct FString GetSourcePrimPath(struct UObject* Object); // Function USDStage.UsdStageActor.GetSourcePrimPath // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x22bd890
	struct USceneComponent* GetGeneratedComponent(struct FString PrimPath); // Function USDStage.UsdStageActor.GetGeneratedComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x22bd7e0
	struct TArray<struct UObject*> GetGeneratedAssets(struct FString PrimPath); // Function USDStage.UsdStageActor.GetGeneratedAssets // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x22bd6f0
};

// Class USDStage.UsdTransactor
// Size: 0x38 (Inherited: 0x28)
struct UUsdTransactor : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

