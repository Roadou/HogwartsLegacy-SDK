// Enum AccessibilitySettings.EHighContrastGameplayBucket
enum class EHighContrastGameplayBucket : uint8 {
	Player = 0,
	Companion = 1,
	FriendlyNPC = 2,
	EnemyNPC = 3,
	Item = 4,
	Creature = 5,
	Mount = 6,
	EHighContrastGameplayBucket_MAX = 7
};

// Enum AccessibilitySettings.EAudioVisualizerType
enum class EAudioVisualizerType : uint8 {
	Footsteps = 0,
	Spells = 1,
	Dialogue = 2,
	EAudioVisualizerType_MAX = 3
};

// Enum AccessibilitySettings.EHighContrastMode
enum class EHighContrastMode : uint8 {
	Text = 0,
	Gameplay = 1,
	EHighContrastMode_MAX = 2
};

// ScriptStruct AccessibilitySettings.HighContrastGameplayBucketPrimitiveState
// Size: 0x10 (Inherited: 0x00)
struct FHighContrastGameplayBucketPrimitiveState {
	struct UObject* State; // 0x00(0x08)
	enum class EHighContrastGameplayBucket Bucket; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

