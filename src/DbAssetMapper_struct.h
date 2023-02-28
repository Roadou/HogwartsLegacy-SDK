// Enum DbAssetMapper.ESpawnRestrictionResponse
enum class ESpawnRestrictionResponse : uint8 {
	SRR_NO_RESTRICTIONS = 0,
	SRR_FAIL_UNREGISTERED_TYPE = 1,
	SRR_FAIL_TIME_RESTRICTION = 2,
	SRR_FAIL_DATE_RESTRICTION = 3,
	SRR_FAIL_SEASON_RESTRICTION = 4,
	SRR_FAIL_COUNT_RESTRICTION = 5,
	SRR_FAIL_PLACE_RESTRICTION = 6,
	SRR_FAIL_MISSION_RESTRICTION = 7,
	SRR_FAIL_MISSION_RESTRICTION_NO_CALLBACK = 8,
	SRR_FAIL_LOCKED = 9,
	SRR_FAIL_LEVEL_NOT_LOADED = 10,
	SRR_FAIL_UNKNOWN = 11,
	SRR_MAX = 12
};

// Enum DbAssetMapper.ESpawnAllowedResponse
enum class ESpawnAllowedResponse : uint8 {
	SAR_ALLOWSPAWN = 0,
	SAR_FAIL_UNREGISTERED_TYPE = 1,
	SAR_FAIL_LOCKED = 2,
	SAR_FAIL_DEAD = 3,
	SAR_FAIL_CONSUMED = 4,
	SAR_FAIL_ALREADY_EXISTS = 5,
	SAR_FAIL_UNKNOWN = 6,
	SAR_MAX = 7
};

// ScriptStruct DbAssetMapper.RestrictionInfo
// Size: 0xb8 (Inherited: 0x00)
struct FRestrictionInfo {
	char pad_0[0xb8]; // 0x00(0xb8)
};

// ScriptStruct DbAssetMapper.DbAssetMapStruct
// Size: 0x30 (Inherited: 0x08)
struct FDbAssetMapStruct : FTableRowBase {
	struct TSoftClassPtr<UObject> m_actorClass; // 0x08(0x28)
};

// ScriptStruct DbAssetMapper.NPC_DBNamedInfo
// Size: 0x28 (Inherited: 0x00)
struct FNPC_DBNamedInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct DbAssetMapper.NPC_DBGroupInfo
// Size: 0x18 (Inherited: 0x00)
struct FNPC_DBGroupInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct DbAssetMapper.NPC_DbIdInfo
// Size: 0x78 (Inherited: 0x00)
struct FNPC_DbIdInfo {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct DbAssetMapper.NPC_DbIdState
// Size: 0x0e (Inherited: 0x00)
struct FNPC_DbIdState {
	char pad_0[0xe]; // 0x00(0x0e)
};

// ScriptStruct DbAssetMapper.NPC_DbIdChangeState
// Size: 0x04 (Inherited: 0x00)
struct FNPC_DbIdChangeState {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct DbAssetMapper.NPC_DbObjectInstanceData
// Size: 0x24 (Inherited: 0x00)
struct FNPC_DbObjectInstanceData {
	char pad_0[0x24]; // 0x00(0x24)
};

