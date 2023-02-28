// ScriptStruct MultiFX2.MultiFX2Handle
// Size: 0x08 (Inherited: 0x00)
struct FMultiFX2Handle {
	uint64_t Handle; // 0x00(0x08)
};

// ScriptStruct MultiFX2.MultiFX2Var
// Size: 0x08 (Inherited: 0x00)
struct FMultiFX2Var {
	struct UMultiFX2_Base* FX; // 0x00(0x08)
};

// ScriptStruct MultiFX2.MultiFX2DataArray
// Size: 0x10 (Inherited: 0x00)
struct FMultiFX2DataArray {
	struct TArray<struct FMultiFX2Data> DataArray; // 0x00(0x10)
};

// ScriptStruct MultiFX2.MultiFX2Data
// Size: 0xa0 (Inherited: 0x00)
struct FMultiFX2Data {
	char pad_0[0x8]; // 0x00(0x08)
	struct UMultiFX2_Base* MultiBase; // 0x08(0x08)
	char pad_10[0x30]; // 0x10(0x30)
	struct UObject* FXObject; // 0x40(0x08)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x48(0x08)
	char pad_50[0x30]; // 0x50(0x30)
	struct TArray<struct UObject*> AdditionalObjectArray; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
};

