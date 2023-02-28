// Enum CustomizableCharacter.EGloveTypeEnum
enum class EGloveTypeEnum : uint8 {
	GLOVE_TYPE_NORMAL = 0,
	GLOVE_TYPE_FINGERLESS = 1,
	GLOVE_TYPE_MAX = 2
};

// Enum CustomizableCharacter.ERobeShoulderTypeEnum
enum class ERobeShoulderTypeEnum : uint8 {
	ROBE_SHOULDER_TYPE_BULKY = 0,
	ROBE_SHOULDER_TYPE_SNUG = 1,
	ROBE_SHOULDER_TYPE_MAX = 2
};

// Enum CustomizableCharacter.ERobeTypeEnum
enum class ERobeTypeEnum : uint8 {
	ROBE_TYPE_A = 0,
	ROBE_TYPE_B = 1,
	ROBE_TYPE_C = 2,
	ROBE_TYPE_MAX = 3
};

// Enum CustomizableCharacter.EPantLengthEnum
enum class EPantLengthEnum : uint8 {
	PANT_LENGTH_DRESS = 0,
	PANT_LENGTH_THIGH = 1,
	PANT_LENGTH_KNEE = 2,
	PANT_LENGTH_KNICKER = 3,
	PANT_LENGTH_CALF = 4,
	PANT_LENGTH_SHIN = 5,
	PANT_LENGTH_SHOE = 6,
	PANT_LENGTH_MAX = 7
};

// Enum CustomizableCharacter.EShoeHeightEnum
enum class EShoeHeightEnum : uint8 {
	SHOE_HEIGHT_THIGH = 0,
	SHOE_HEIGHT_KNEE = 1,
	SHOE_HEIGHT_KNICKER = 2,
	SHOE_HEIGHT_CALF = 3,
	SHOE_HEIGHT_SHIN = 4,
	SHOE_HEIGHT_SHOE = 5,
	SHOE_HEIGHT_SLIPPER = 6,
	SHOE_HEIGHT_MAX = 7
};

// Enum CustomizableCharacter.EHatTypeEnum
enum class EHatTypeEnum : uint8 {
	HAT_TYPE_A = 0,
	HAT_TYPE_B = 1,
	HAT_TYPE_C = 2,
	HAT_TYPE_D = 3,
	HAT_TYPE_E = 4,
	HAT_TYPE_MAX = 5
};

// Enum CustomizableCharacter.ESleeveLengthEnum
enum class ESleeveLengthEnum : uint8 {
	SLEEVE_LENGTH_NOSLEEVES = 0,
	SLEEVE_LENGTH_SHORT = 1,
	SLEEVE_LENGTH_MEDIUM = 2,
	SLEEVE_LENGTH_LONG = 3,
	SLEEVE_LENGTH_MAX = 4
};

// Enum CustomizableCharacter.EComparisonEnum
enum class EComparisonEnum : uint8 {
	COMP_EQUAL = 0,
	COMP_NOTEQUAL = 1,
	COMP_MAX = 2
};

// Enum CustomizableCharacter.EGenderEnum
enum class EGenderEnum : uint8 {
	GENDER_MALE = 0,
	GENDER_FEMALE = 1,
	GENDER_UNKNOWN = 2,
	GENDER_MAX = 3
};

// Enum CustomizableCharacter.ECharacterPieceGenderEnum
enum class ECharacterPieceGenderEnum : uint8 {
	GENDER_MALE = 0,
	GENDER_FEMALE = 1,
	GENDER_ANY = 2,
	GENDER_MAX = 3
};

// ScriptStruct CustomizableCharacter.ClothAssetOriginalPhysicsAssets
// Size: 0x50 (Inherited: 0x00)
struct FClothAssetOriginalPhysicsAssets {
	struct TMap<struct UClothingAssetCommon*, struct UPhysicsAsset*> ClothingAssetToOriginalPhysicsAsset; // 0x00(0x50)
};

// ScriptStruct CustomizableCharacter.AnimNode_CustomizableCharacterEyeCap
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_CustomizableCharacterEyeCap : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x04)
	float BlinkCap; // 0x24(0x04)
	char pad_28[0x50]; // 0x28(0x50)
};

// ScriptStruct CustomizableCharacter.AnimNode_CustomizableCharacterFacialPoseBlendNode
// Size: 0xb0 (Inherited: 0xa0)
struct FAnimNode_CustomizableCharacterFacialPoseBlendNode : FAnimNode_PoseBlendNode {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct UCustomizableCharacterComponent* CustomizableCharacterComponent; // 0xa8(0x08)
};

// ScriptStruct CustomizableCharacter.AnimNode_CustomizableCharacterLocalModifyBoneScales
// Size: 0x60 (Inherited: 0x10)
struct FAnimNode_CustomizableCharacterLocalModifyBoneScales : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCustomizableCharacterComponent* CustomizableCharacterComponent; // 0x28(0x08)
	char pad_30[0x30]; // 0x30(0x30)
};

// ScriptStruct CustomizableCharacter.AnimNode_CustomizableCharacterModifyBoneScales
// Size: 0x100 (Inherited: 0xc8)
struct FAnimNode_CustomizableCharacterModifyBoneScales : FAnimNode_SkeletalControlBase {
	struct UCustomizableCharacterComponent* CustomizableCharacterComponent; // 0xc8(0x08)
	char pad_D0[0x30]; // 0xd0(0x30)
};

// ScriptStruct CustomizableCharacter.BoneScaleRow
// Size: 0x40 (Inherited: 0x08)
struct FBoneScaleRow : FTableRowBase {
	struct TSoftObjectPtr<USkeleton> Skeleton; // 0x08(0x28)
	struct TArray<struct FBoneScaleEntry> BoneScaleEntries; // 0x30(0x10)
};

// ScriptStruct CustomizableCharacter.BoneScaleEntry
// Size: 0x28 (Inherited: 0x00)
struct FBoneScaleEntry {
	struct FName SliderName; // 0x00(0x08)
	struct TArray<struct FName> BoneNames; // 0x08(0x10)
	float Default; // 0x18(0x04)
	float Min; // 0x1c(0x04)
	float Max; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomizableCharacter.LevelRow
// Size: 0x50 (Inherited: 0x08)
struct FLevelRow : FTableRowBase {
	struct TSoftObjectPtr<UWorld> Level; // 0x08(0x28)
	bool bLoadSky; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector Location; // 0x34(0x0c)
	struct FRotator Rotation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct CustomizableCharacter.DbMeshMaterialPresetRow
// Size: 0x70 (Inherited: 0x08)
struct FDbMeshMaterialPresetRow : FTableRowBase {
	struct FName MeshName; // 0x08(0x08)
	struct FName PresetName; // 0x10(0x08)
	struct TMap<struct FName, struct FString> Params; // 0x18(0x50)
	struct UTexture2D* Icon; // 0x68(0x08)
};

// ScriptStruct CustomizableCharacter.DbMaterialRegionPresetRow
// Size: 0x58 (Inherited: 0x08)
struct FDbMaterialRegionPresetRow : FTableRowBase {
	struct TMap<struct FName, struct FString> Params; // 0x08(0x50)
};

// ScriptStruct CustomizableCharacter.DbGradientRow
// Size: 0x38 (Inherited: 0x08)
struct FDbGradientRow : FTableRowBase {
	struct FName DisplayName; // 0x08(0x08)
	struct TSoftObjectPtr<UTexture> Texture; // 0x10(0x28)
};

// ScriptStruct CustomizableCharacter.TextureFilterRow
// Size: 0x20 (Inherited: 0x00)
struct FTextureFilterRow {
	struct FName DisplayName; // 0x00(0x08)
	struct FName ParamName; // 0x08(0x08)
	struct FString MeshName; // 0x10(0x10)
};

// ScriptStruct CustomizableCharacter.DbTextureRow
// Size: 0x50 (Inherited: 0x08)
struct FDbTextureRow : FTableRowBase {
	struct FName DisplayName; // 0x08(0x08)
	struct FName ParamName; // 0x10(0x08)
	struct FString MeshName; // 0x18(0x10)
	struct TSoftObjectPtr<UTexture> Texture; // 0x28(0x28)
};

// ScriptStruct CustomizableCharacter.DbCharacterPiece
// Size: 0x30 (Inherited: 0x08)
struct FDbCharacterPiece : FTableRowBase {
	struct TSoftObjectPtr<UCharacterPiece> CharacterPiece; // 0x08(0x28)
};

// ScriptStruct CustomizableCharacter.CharacterPieceCharacterClassification
// Size: 0x08 (Inherited: 0x00)
struct FCharacterPieceCharacterClassification {
	struct FName Type; // 0x00(0x08)
};

// ScriptStruct CustomizableCharacter.CharacterClassificationRow
// Size: 0x58 (Inherited: 0x08)
struct FCharacterClassificationRow : FTableRowBase {
	struct TSet<struct FCharacterPieceCharacterType> CharacterTypes; // 0x08(0x50)
};

// ScriptStruct CustomizableCharacter.CharacterPieceCharacterType
// Size: 0x08 (Inherited: 0x00)
struct FCharacterPieceCharacterType {
	struct FName Type; // 0x00(0x08)
};

// ScriptStruct CustomizableCharacter.ClothingAssetName
// Size: 0x08 (Inherited: 0x00)
struct FClothingAssetName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct CustomizableCharacter.CharacterPieceType
// Size: 0x08 (Inherited: 0x00)
struct FCharacterPieceType {
	struct FName Type; // 0x00(0x08)
};

// ScriptStruct CustomizableCharacter.MaterialOverride
// Size: 0x60 (Inherited: 0x00)
struct FMaterialOverride {
	struct TArray<struct FMeshRule> Rules; // 0x00(0x10)
	struct TMap<struct FName, struct UMaterialInterface*> Materials; // 0x10(0x50)
};

// ScriptStruct CustomizableCharacter.MeshRule
// Size: 0x90 (Inherited: 0x00)
struct FMeshRule {
	struct FName CharacterID; // 0x00(0x08)
	struct FName RuleType; // 0x08(0x08)
	enum class EComparisonEnum Comparison; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName CharacterType; // 0x14(0x08)
	enum class EGenderEnum Gender; // 0x1c(0x01)
	enum class ESleeveLengthEnum SleeveLength; // 0x1d(0x01)
	enum class EHatTypeEnum HatType; // 0x1e(0x01)
	enum class EShoeHeightEnum ShoeHeight; // 0x1f(0x01)
	enum class EPantLengthEnum PantLength; // 0x20(0x01)
	enum class ERobeTypeEnum RobeType; // 0x21(0x01)
	enum class EGloveTypeEnum GloveType; // 0x22(0x01)
	enum class ERobeShoulderTypeEnum RobeShoulderType; // 0x23(0x01)
	char pad_24[0x4]; // 0x24(0x04)
	struct FGameplayTagContainer Tags; // 0x28(0x20)
	struct FGameplayTagContainer CharacterPieceTags; // 0x48(0x20)
	struct TSoftObjectPtr<UCharacterPiece> CharacterPiece; // 0x68(0x28)
};

// ScriptStruct CustomizableCharacter.MeshOverride
// Size: 0x18 (Inherited: 0x00)
struct FMeshOverride {
	struct TArray<struct FMeshRule> Rules; // 0x00(0x10)
	struct USkeletalMesh* Mesh; // 0x10(0x08)
};

// ScriptStruct CustomizableCharacter.CharacterPieceNiagaraSystem
// Size: 0x28 (Inherited: 0x00)
struct FCharacterPieceNiagaraSystem {
	struct UNiagaraSystem* NiagaraSystem; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
};

// ScriptStruct CustomizableCharacter.OutfitDefinition
// Size: 0x50 (Inherited: 0x00)
struct FOutfitDefinition {
	struct TMap<struct FName, struct FCharacterPieceDefinition> OutfitItems; // 0x00(0x50)
};

// ScriptStruct CustomizableCharacter.CharacterPieceDefinition
// Size: 0x100 (Inherited: 0x00)
struct FCharacterPieceDefinition {
	struct UCharacterPiece* CharacterPiece; // 0x00(0x08)
	bool bSetCharacterPieceEvenIfNone; // 0x08(0x01)
	bool bIsFlipped; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TMap<struct FName, float> ScalarOverrides; // 0x10(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorOverrides; // 0x60(0x50)
	struct TMap<struct FName, struct UTexture*> TextureOverrides; // 0xb0(0x50)
};

// ScriptStruct CustomizableCharacter.OutfitType
// Size: 0x08 (Inherited: 0x00)
struct FOutfitType {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct CustomizableCharacter.Outfit
// Size: 0x50 (Inherited: 0x00)
struct FOutfit {
	struct TMap<struct FName, struct UAddOnMeshProperties*> OutfitItems; // 0x00(0x50)
};

