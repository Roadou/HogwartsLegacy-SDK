// ScriptStruct AvaRenderTech.CachedMIDParameters
// Size: 0x20 (Inherited: 0x00)
struct FCachedMIDParameters {
	struct TArray<struct FCachedMIDParameterScalar> Scalars; // 0x00(0x10)
	struct TArray<struct FCachedMIDParameterVector> Vectors; // 0x10(0x10)
};

// ScriptStruct AvaRenderTech.CachedMIDParameter
// Size: 0x0c (Inherited: 0x00)
struct FCachedMIDParameter {
	struct FName Parameter; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
};

// ScriptStruct AvaRenderTech.CachedMIDParameterVector
// Size: 0x1c (Inherited: 0x0c)
struct FCachedMIDParameterVector : FCachedMIDParameter {
	struct FLinearColor Value; // 0x0c(0x10)
};

// ScriptStruct AvaRenderTech.CachedMIDParameterScalar
// Size: 0x10 (Inherited: 0x0c)
struct FCachedMIDParameterScalar : FCachedMIDParameter {
	float Value; // 0x0c(0x04)
};

// ScriptStruct AvaRenderTech.CachedMIDParametersSet
// Size: 0x50 (Inherited: 0x00)
struct FCachedMIDParametersSet {
	struct TMap<struct TWeakObjectPtr<struct UMaterialInstanceDynamic>, struct FCachedMIDParameters> MIDMap; // 0x00(0x50)
};

