// Enum DebugPanel.EDebugPanelControlID
enum class EDebugPanelControlID : uint8 {
	EDPCID_TEXT_LEFT = 0,
	EDPCID_TEXT_TOP = 1,
	EDPCID_TEXT_RIGHT = 2,
	EDPCID_TEXT_BOTTOM = 3,
	EDPCID_TEXT_MAX = 4
};

// ScriptStruct DebugPanel.SingleDebugPanel
// Size: 0x88 (Inherited: 0x00)
struct FSingleDebugPanel {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct DebugPanel.DebugPanelControl
// Size: 0xc0 (Inherited: 0x00)
struct FDebugPanelControl {
	char pad_0[0xc0]; // 0x00(0xc0)
};

