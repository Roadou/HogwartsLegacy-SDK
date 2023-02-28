// Enum HoudiniEngineRuntime.EHoudiniVertexAttributeDataType
enum class EHoudiniVertexAttributeDataType : uint8 {
	VADT_Float = 0,
	VADT_Int32 = 1,
	VADT_Bool = 2,
	VADT_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8 {
	Xform = 0,
	Bounder = 1,
	Unsupported = 2,
	EHoudiniHandleType_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniToolSelectionType
enum class EHoudiniToolSelectionType : uint8 {
	HTOOL_SELECTION_ALL = 0,
	HTOOL_SELECTION_WORLD_ONLY = 1,
	HTOOL_SELECTION_CB_ONLY = 2,
	HTOOL_SELECTION_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniToolType
enum class EHoudiniToolType : uint8 {
	HTOOLTYPE_GENERATOR = 0,
	HTOOLTYPE_OPERATOR_SINGLE = 1,
	HTOOLTYPE_OPERATOR_MULTI = 2,
	HTOOLTYPE_OPERATOR_BATCH = 3,
	HTOOLTYPE_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsAxisImport
enum class EHoudiniRuntimeSettingsAxisImport : uint8 {
	HRSAI_Unreal = 0,
	HRSAI_Houdini = 1,
	HRSAI_MAX = 2
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8 {
	HRSRF_Always = 0,
	HRSRF_OnlyIfMissing = 1,
	HRSRF_Nothing = 2,
	HRSRF_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8 {
	HRSST_InProcess = 0,
	HRSST_Socket = 1,
	HRSST_NamedPipe = 2,
	HRSST_MAX = 3
};

// ScriptStruct HoudiniEngineRuntime.HoudiniToolDirectory
// Size: 0x30 (Inherited: 0x00)
struct FHoudiniToolDirectory {
	struct FString Name; // 0x00(0x10)
	struct FDirectoryPath Path; // 0x10(0x10)
	struct FString ContentDirID; // 0x20(0x10)
};

