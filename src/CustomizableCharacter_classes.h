// Class CustomizableCharacter.AddOnMeshProperties
// Size: 0x130 (Inherited: 0x28)
struct UAddOnMeshProperties : UObject {
	struct UCharacterPiece* CharacterPiece; // 0x28(0x08)
	char pad_30[0xc]; // 0x30(0x0c)
	bool bIsFlipped; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TMap<struct FName, float> ScalarOverrides; // 0x40(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorOverrides; // 0x90(0x50)
	struct TMap<struct FName, struct UTexture*> TextureOverrides; // 0xe0(0x50)
};

// Class CustomizableCharacter.AddOnMesh
// Size: 0x98 (Inherited: 0x28)
struct UAddOnMesh : UObject {
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x28(0x08)
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> SlotNameToMaterialInstanceDynamicMap; // 0x30(0x50)
	struct TArray<struct UNiagaraComponent*> NiagaraComponents; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
};

// Class CustomizableCharacter.CharacterPiece
// Size: 0xc0 (Inherited: 0x30)
struct UCharacterPiece : UDataAsset {
	struct FCharacterPieceCharacterClassification CharacterClassification; // 0x30(0x08)
	struct FCharacterPieceType CharacterPieceType; // 0x38(0x08)
	struct FGameplayTagContainer Tags; // 0x40(0x20)
	enum class ECharacterPieceGenderEnum Gender; // 0x60(0x01)
	enum class ESleeveLengthEnum SleeveLength; // 0x61(0x01)
	enum class EHatTypeEnum HatType; // 0x62(0x01)
	enum class EShoeHeightEnum ShoeHeight; // 0x63(0x01)
	enum class EPantLengthEnum PantLength; // 0x64(0x01)
	enum class ERobeTypeEnum RobeType; // 0x65(0x01)
	enum class EGloveTypeEnum GloveType; // 0x66(0x01)
	enum class ERobeShoulderTypeEnum RobeShoulderType; // 0x67(0x01)
	struct USkeletalMesh* DefaultMesh; // 0x68(0x08)
	struct UPoseAsset* FacialPoseAsset; // 0x70(0x08)
	struct TArray<struct FMeshOverride> MeshOverrides; // 0x78(0x10)
	struct TArray<struct FMaterialOverride> MaterialOverrides; // 0x88(0x10)
	struct TArray<struct FName> RegionNames; // 0x98(0x10)
	struct TArray<struct FCharacterPieceNiagaraSystem> NiagaraSystems; // 0xa8(0x10)
	struct UAnimInstance* AnimClass; // 0xb8(0x08)

	struct FName ToId(); // Function CustomizableCharacter.CharacterPiece.ToId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a4af0
};

// Class CustomizableCharacter.TextureFilterDataAsset
// Size: 0x80 (Inherited: 0x30)
struct UTextureFilterDataAsset : UDataAsset {
	struct TMap<struct TSoftObjectPtr<UTexture>, struct FTextureFilterRow> Filters; // 0x30(0x50)
};

// Class CustomizableCharacter.CustomizableCharacterInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomizableCharacterInterface : UInterface {
};

// Class CustomizableCharacter.CustomizableCharacterComponent
// Size: 0x588 (Inherited: 0xc8)
struct UCustomizableCharacterComponent : UActorComponent {
	struct FName CharacterName; // 0xc8(0x08)
	struct FName Type; // 0xd0(0x08)
	enum class EGenderEnum Gender; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FGameplayTagContainer Tags; // 0xe0(0x20)
	char pad_100[0x128]; // 0x100(0x128)
	struct FMulticastInlineDelegate OnCharacterLoadComplete; // 0x228(0x10)
	struct FMulticastInlineDelegate OnCharacterOutfitLoadComplete; // 0x238(0x10)
	char pad_248[0x30]; // 0x248(0x30)
	struct FMulticastInlineDelegate OnAddOnMeshesChangedDynamicDelegate; // 0x278(0x10)
	char pad_288[0x10]; // 0x288(0x10)
	struct FMulticastInlineDelegate OnGearFinishedLoading; // 0x298(0x10)
	char pad_2A8[0x48]; // 0x2a8(0x48)
	struct FOutfitType CurrentOutfit; // 0x2f0(0x08)
	struct TMap<struct FName, struct FOutfit> Outfits; // 0x2f8(0x50)
	char pad_348[0x20]; // 0x348(0x20)
	bool bDoAsyncLoad; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct TMap<struct FName, struct UAddOnMesh*> AddOnMeshes; // 0x370(0x50)
	struct TMap<struct FName, struct UAddOnMeshProperties*> CharacterItems; // 0x3c0(0x50)
	struct UAddOnMesh* MergedMesh; // 0x410(0x08)
	struct UPoseAsset* HeadPoseAsset; // 0x418(0x08)
	struct UPoseAsset* FacialPoseAsset; // 0x420(0x08)
	char pad_428[0x148]; // 0x428(0x148)
	struct UCustomizableCharacterDefinition* CurrentCCDLoading; // 0x570(0x08)
	struct UCustomizableCharacterDefinition* CacheCCD; // 0x578(0x08)
	char pad_580[0x8]; // 0x580(0x08)

	struct AActor* SpawnEditorCharacter(struct UObject* InWorldContextObject, struct FTransform& InTransform, struct FName InCharacterID, struct AActor* CharacterClass, struct FDelegate& InLoadCompleteFromSpawnDelegate); // Function CustomizableCharacter.CustomizableCharacterComponent.SpawnEditorCharacter // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10a48e0
	struct TArray<struct FName> SortNames(struct TArray<struct FName> Names); // Function CustomizableCharacter.CustomizableCharacterComponent.SortNames // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10a47b0
	void SetVectorParameter(struct FName MeshName, struct FName ParameterName, struct FLinearColor Value, bool bResetMaterialParameters); // Function CustomizableCharacter.CustomizableCharacterComponent.SetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x10a4640
	void SetTextureParameter(struct FName MeshName, struct FName ParameterName, struct UTexture* Texture, bool bResetMaterialParameters); // Function CustomizableCharacter.CustomizableCharacterComponent.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x10a44e0
	void SetScaleRootMotion(bool State); // Function CustomizableCharacter.CustomizableCharacterComponent.SetScaleRootMotion // (Final|Native|Public|BlueprintCallable) // @ game+0x10a4450
	void SetScale(float NewScale); // Function CustomizableCharacter.CustomizableCharacterComponent.SetScale // (Final|Native|Public|BlueprintCallable) // @ game+0x10a43d0
	void SetScalarParameter(struct FName MeshName, struct FName ParameterName, float Value, bool bResetMaterialParameters); // Function CustomizableCharacter.CustomizableCharacterComponent.SetScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x10a4270
	void SetForcedLOD(int32_t LOD, bool bInFOV); // Function CustomizableCharacter.CustomizableCharacterComponent.SetForcedLOD // (Final|Native|Public|BlueprintCallable) // @ game+0x10a41a0
	void SetFlipped(struct FName CharacterPieceType, bool bFlip); // Function CustomizableCharacter.CustomizableCharacterComponent.SetFlipped // (Final|Native|Public|BlueprintCallable) // @ game+0x10a40d0
	void SetCurrentOutfit(struct FName OutfitName); // Function CustomizableCharacter.CustomizableCharacterComponent.SetCurrentOutfit // (Final|Native|Public|BlueprintCallable) // @ game+0x10a4040
	void SetCharacterID(struct FName InRegistryID); // Function CustomizableCharacter.CustomizableCharacterComponent.SetCharacterID // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3fb0
	void SetBoneSliderScale(struct FName BoneName, float Value); // Function CustomizableCharacter.CustomizableCharacterComponent.SetBoneSliderScale // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3ee0
	bool SetAsyncLoad(bool bInAsyncLoad); // Function CustomizableCharacter.CustomizableCharacterComponent.SetAsyncLoad // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3e40
	void SetAnimInstanceClass(struct UObject* NewClass); // Function CustomizableCharacter.CustomizableCharacterComponent.SetAnimInstanceClass // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3db0
	void SetAddOnMesh(struct FName CharacterPieceType, struct FName CharacterPieceName, bool bResetMaterialParams); // Function CustomizableCharacter.CustomizableCharacterComponent.SetAddOnMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3ca0
	struct UTexture* ResolveTextureSoftObjectReference(struct TSoftObjectPtr<UTexture>& TexturePtr); // Function CustomizableCharacter.CustomizableCharacterComponent.ResolveTextureSoftObjectReference // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10a3be0
	bool ResetOverridenVectorParameter(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.ResetOverridenVectorParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3b10
	bool ResetOverridenTextureParameter(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.ResetOverridenTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3a40
	bool ResetOverridenScalarParameter(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.ResetOverridenScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3970
	void ReloadCharacter(); // Function CustomizableCharacter.CustomizableCharacterComponent.ReloadCharacter // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3950
	void RecreateClothingActors(); // Function CustomizableCharacter.CustomizableCharacterComponent.RecreateClothingActors // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3930
	void RebuildAddOnMeshes(); // Function CustomizableCharacter.CustomizableCharacterComponent.RebuildAddOnMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3910
	bool IsVectorParameterOverriden(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.IsVectorParameterOverriden // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3840
	bool IsTextureParameterOverriden(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.IsTextureParameterOverriden // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3770
	bool IsScalarParameterOverriden(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.IsScalarParameterOverriden // (Final|Native|Public|BlueprintCallable) // @ game+0x10a36a0
	bool IsLoading(); // Function CustomizableCharacter.CustomizableCharacterComponent.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a3670
	bool IsAsyncLoad(); // Function CustomizableCharacter.CustomizableCharacterComponent.IsAsyncLoad // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a3640
	struct TMap<struct FName, struct FLinearColor> GetVectorParameters(struct FName MeshName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetVectorParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3520
	struct FLinearColor GetVectorParameterDefault(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetVectorParameterDefault // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a3440
	struct FLinearColor GetVectorParameter(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a3360
	struct FName GetTypeClassication(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetTypeClassication // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3320
	struct TMap<struct FName, struct UTexture*> GetTextureParameters(struct FName MeshName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetTextureParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3200
	struct UTexture* GetTextureParameterDefault(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetTextureParameterDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a3130
	struct UTexture* GetTextureParameter(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x10a3060
	enum class EPhysicalSurface GetSurfaceTypeByName(struct FName SurfaceName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetSurfaceTypeByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a2fd0
	enum class EPhysicalSurface GetSurfaceTypeBelowActor(struct AActor* Actor); // Function CustomizableCharacter.CustomizableCharacterComponent.GetSurfaceTypeBelowActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a2f40
	struct FName GetSurfaceNameBelowActor(struct AActor* Actor); // Function CustomizableCharacter.CustomizableCharacterComponent.GetSurfaceNameBelowActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a2eb0
	struct FName GetSurfaceName(enum class EPhysicalSurface SurfaceType); // Function CustomizableCharacter.CustomizableCharacterComponent.GetSurfaceName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a2e20
	struct FName GetSkeletalMeshName(struct FName MeshName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetSkeletalMeshName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a2d90
	bool GetScaleRootMotion(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetScaleRootMotion // (Final|Native|Public|BlueprintCallable) // @ game+0x10a2d60
	float GetScale(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a2d30
	struct TMap<struct FName, float> GetScalarParameters(struct FName MeshName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetScalarParameters // (Final|Native|Public|BlueprintCallable) // @ game+0x10a2c10
	float GetScalarParameterDefault(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetScalarParameterDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a2b40
	float GetScalarParameter(struct FName MeshName, struct FName ParameterName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetScalarParameter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a2a70
	struct FRandomStream GetRandomStream(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetRandomStream // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x10a2a40
	float GetRandomFloat(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetRandomFloat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10a2a10
	struct FColor GetRandomColorFromColorPalette(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetRandomColorFromColorPalette // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x10a29e0
	struct TMap<struct FName, struct FOutfit> GetOutfits(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetOutfits // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10a29b0
	int32_t GetMeshTriangleCount(struct FName Name, int32_t LOD); // Function CustomizableCharacter.CustomizableCharacterComponent.GetMeshTriangleCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a28e0
	struct TArray<struct FName> GetMeshNames(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetMeshNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a2860
	int32_t GetMeshDrawCount(struct FName Name, int32_t LOD); // Function CustomizableCharacter.CustomizableCharacterComponent.GetMeshDrawCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a2790
	void GetLODInfo(int32_t LOD, int32_t& TriangleCount, int32_t& DrawCallCount, int32_t& MeshCount); // Function CustomizableCharacter.CustomizableCharacterComponent.GetLODInfo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a2610
	struct UAddOnMeshProperties* GetHeadAddOnMeshProperties(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetHeadAddOnMeshProperties // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10a25e0
	struct FOutfit GetCurrentOutfit(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetCurrentOutfit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a25a0
	struct TArray<struct FName> GetClassicationSubTypes(struct FName Classification); // Function CustomizableCharacter.CustomizableCharacterComponent.GetClassicationSubTypes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a24d0
	struct FName GetClassicationFromSubType(struct FName SubType); // Function CustomizableCharacter.CustomizableCharacterComponent.GetClassicationFromSubType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a2440
	struct TMap<struct FName, struct UAddOnMeshProperties*> GetCharacterItems(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetCharacterItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a22e0
	bool GetCharacterID(struct FName& OutCharacterID); // Function CustomizableCharacter.CustomizableCharacterComponent.GetCharacterID // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a2240
	float GetBoneSliderScale(struct FName BoneSliderName); // Function CustomizableCharacter.CustomizableCharacterComponent.GetBoneSliderScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a21a0
	struct TArray<struct FName> GetAllSurfaceNames(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetAllSurfaceNames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a2160
	struct TArray<struct FName> GetAllOutfitItemTypes(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetAllOutfitItemTypes // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10a20e0
	struct TArray<struct FName> GetAllCharacterTypes(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetAllCharacterTypes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a20a0
	struct TArray<struct FName> GetAllCharacterPieceClassifications(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetAllCharacterPieceClassifications // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a2050
	struct TArray<struct FName> GetAllCharacterItemTypes(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetAllCharacterItemTypes // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10a1fd0
	struct TArray<struct FName> GetAllCharacterIDsOfTypeForEditor(struct FName SubtypeID); // Function CustomizableCharacter.CustomizableCharacterComponent.GetAllCharacterIDsOfTypeForEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a1f00
	struct UAddOnMeshProperties* GetAddOnMeshProperties(struct FName Name); // Function CustomizableCharacter.CustomizableCharacterComponent.GetAddOnMeshProperties // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10a1d00
	struct FName GetAddOnMeshPieceName(struct FName Name); // Function CustomizableCharacter.CustomizableCharacterComponent.GetAddOnMeshPieceName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a1c70
	struct TMap<struct FName, struct UAddOnMesh*> GetAddOnMeshes(); // Function CustomizableCharacter.CustomizableCharacterComponent.GetAddOnMeshes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a1da0
	bool GetAddOnMeshBP(struct FName Name); // Function CustomizableCharacter.CustomizableCharacterComponent.GetAddOnMeshBP // (Final|Native|Public|BlueprintCallable) // @ game+0x10a1bd0
	bool EditorSave(); // Function CustomizableCharacter.CustomizableCharacterComponent.EditorSave // (Final|Native|Public|BlueprintCallable) // @ game+0x10a1ba0
	void DrawSkeletalCapsules(struct FLinearColor Color, float LineThickness); // Function CustomizableCharacter.CustomizableCharacterComponent.DrawSkeletalCapsules // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x10a1ad0
	void DrawClothCapsules(struct FLinearColor Color, float LineThickness); // Function CustomizableCharacter.CustomizableCharacterComponent.DrawClothCapsules // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x10a1a00
	struct UTexture2D* CreateTextureFromRenderTarget(struct UTextureRenderTarget2D* RenderTarget, struct FString PackageName); // Function CustomizableCharacter.CustomizableCharacterComponent.CreateTextureFromRenderTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10a18d0
	float ComputeBoundsScreenSize(); // Function CustomizableCharacter.CustomizableCharacterComponent.ComputeBoundsScreenSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10a18a0
};

// Class CustomizableCharacter.CustomizableCharacterDefinition
// Size: 0x140 (Inherited: 0x30)
struct UCustomizableCharacterDefinition : UDataAsset {
	enum class EGenderEnum Gender; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TMap<struct FName, float> BoneScaleValues; // 0x38(0x50)
	float Scale; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TMap<struct FName, struct FCharacterPieceDefinition> CharacterItems; // 0x90(0x50)
	struct TMap<struct FName, struct FOutfitDefinition> Outfits; // 0xe0(0x50)
	struct TArray<struct UObject*> ExtraObjects; // 0x130(0x10)
};

// Class CustomizableCharacter.LoadEntry
// Size: 0x28 (Inherited: 0x28)
struct ULoadEntry : UObject {
};

// Class CustomizableCharacter.LoadIntoCurrentOutfitLoadEntry
// Size: 0x80 (Inherited: 0x28)
struct ULoadIntoCurrentOutfitLoadEntry : ULoadEntry {
	struct FOutfitDefinition OutfitToLoad; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CustomizableCharacter.SetCurrentOutfitLoadEntry
// Size: 0x30 (Inherited: 0x28)
struct USetCurrentOutfitLoadEntry : ULoadEntry {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class CustomizableCharacter.PoseNamesAssetUserData
// Size: 0x38 (Inherited: 0x28)
struct UPoseNamesAssetUserData : UAssetUserData {
	struct TArray<struct FName> PoseNames; // 0x28(0x10)
};

