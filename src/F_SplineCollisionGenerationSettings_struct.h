// UserDefinedStruct F_SplineCollisionGenerationSettings.F_SplineCollisionGenerationSettings
// Size: 0x90 (Inherited: 0x00)
struct FF_SplineCollisionGenerationSettings {
	float CheckIntervalDistance_24_4106B6F4424E5DAEF734FCAFD304BAA2; // 0x00(0x04)
	float MaxAngleDelta_25_D8AE322D4EF5452DF5C872A53E82711C; // 0x04(0x04)
	float WallWidth_26_D219267E409761BF29AEA7A5790371B1; // 0x08(0x04)
	float WallHeight_27_37A10F9C4078806375385188A4B93A20; // 0x0c(0x04)
	bool SplineLoops_28_55DF36D54283610345F2FA8E12AB02FE; // 0x10(0x01)
	bool WallHiddenInGame_29_2E2FC02A4CEB6861BCD66D8A6D58D918; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FLinearColor WallColor_30_A7F1437B4BD79AE0114E808B5CB03629; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
	struct UPhysicalMaterial* PhysicalMaterial_31_F26338BC47D3FF94302EC39AAF13E2DF; // 0x28(0x08)
	bool GenerateOverlapEvents_32_2EA8D769424B12F982B896B47514DE82; // 0x30(0x01)
	bool UseCollisionProfile_33_BC4C952C4BE800D1C1BC158F2A3C249B; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FName CollisionProfileName_38_15BDDBBA470F493070BDA48DFD90C12A; // 0x34(0x08)
	enum class ECollisionEnabled CollisionEnabled_35_59D5462441EA4F553E3410B65EA7DDFD; // 0x3c(0x01)
	enum class ECollisionChannel ObjectType_36_CB6018094312FCBABB48F9B7126A0D0F; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct TMap<enum class ECollisionChannel, enum class ECollisionResponse> CollisionResponseOverrides_37_AEAF0B264365C6AC13918B8C63CF8695; // 0x40(0x50)
};

