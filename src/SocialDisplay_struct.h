// Enum SocialDisplay.ESocialAgentState
enum class ESocialAgentState : uint8 {
	Inactive = 0,
	Blocking = 1,
	Avoiding = 2,
	ESocialAgentState_MAX = 3
};

// ScriptStruct SocialDisplay.SocialAgent
// Size: 0x40 (Inherited: 0x00)
struct FSocialAgent {
	char pad_0[0x2c]; // 0x00(0x2c)
	float m_radius; // 0x2c(0x04)
	struct FVector m_Offset; // 0x30(0x0c)
	bool m_alertOnApproach; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct SocialDisplay.SocialMultiAgentMember
// Size: 0x50 (Inherited: 0x40)
struct FSocialMultiAgentMember : FSocialAgent {
	char pad_40[0x10]; // 0x40(0x10)
};

