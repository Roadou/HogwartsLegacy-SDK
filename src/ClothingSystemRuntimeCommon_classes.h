// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigCommon : UClothConfigBase {
};

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedConfigCommon : UClothConfigCommon {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Size: 0x28 (Inherited: 0x28)
struct UClothingAssetCustomData : UObject {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size: 0xf0 (Inherited: 0x48)
struct UClothingAssetCommon : UClothingAssetBase {
	struct UPhysicsAsset* PhysicsAsset; // 0x48(0x08)
	struct TMap<struct FName, struct UClothConfigBase*> ClothConfigs; // 0x50(0x50)
	struct TArray<struct FClothLODDataCommon> LODData; // 0xa0(0x10)
	struct TArray<int32_t> LodMap; // 0xb0(0x10)
	struct TArray<struct FName> UsedBoneNames; // 0xc0(0x10)
	struct TArray<int32_t> UsedBoneIndices; // 0xd0(0x10)
	int32_t ReferenceBoneIndex; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UClothingAssetCustomData* CustomData; // 0xe8(0x08)
};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Size: 0x168 (Inherited: 0x28)
struct UClothLODDataCommon_Legacy : UObject {
	struct UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28(0x08)
	struct FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30(0xd8)
	struct FClothCollisionData CollisionData; // 0x108(0x40)
	char pad_148[0x20]; // 0x148(0x20)
};

