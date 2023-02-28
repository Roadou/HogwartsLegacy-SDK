// UserDefinedStruct STR_LODMapTreeData.STR_LODMapTreeData
// Size: 0xe0 (Inherited: 0x00)
struct FSTR_LODMapTreeData {
	struct FTransform ComponentTransform_16_0E3E8E4F4177CBC6A30BB3AD17D7330A; // 0x00(0x30)
	struct UStaticMesh* StaticMesh_22_69AE1F3542D16BD8BE6C2EAF28676042; // 0x30(0x08)
	struct TArray<struct FTransform> InstancesTranforms_17_5E1770A84EA4726260C53F97536E51CF; // 0x38(0x10)
	bool HasSeasonSelector_25_7BCD924D416B47125FEB0291D541F549; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FSTR_SeasonSelectorData SeasonSelectorData_21_211C91E6426C2DF256643292C62C5CE4; // 0x50(0x90)
};

