// Enum Cognition.ECognitionBackgroundSetting
enum class ECognitionBackgroundSetting : uint8 {
	NotInBackground = 0,
	InBackgroundNoBest = 1,
	InBackgroundShowBest = 2,
	ECognitionBackgroundSetting_MAX = 3
};

// Enum Cognition.EProcessBestFlag
enum class EProcessBestFlag : uint8 {
	TargetSighted = 0,
	TargetLost = 1,
	EProcessBestFlag_MAX = 2
};

// Enum Cognition.ESocialCombatMode
enum class ESocialCombatMode : uint8 {
	AllModes = 0,
	Social = 1,
	Combat = 2,
	Adventure = 3,
	Duress = 4,
	Transfiguration = 5,
	ESocialCombatMode_MAX = 6
};

// Enum Cognition.ECalloutActions
enum class ECalloutActions : uint8 {
	NOT_SET = 0,
	Action_Interact = 1,
	Action_Loot = 2,
	Menu_Pickup = 3,
	Action_Steal = 4,
	Action_Open = 5,
	Action_Close = 6,
	Action_Locked = 7,
	Action_Enter = 8,
	Action_Join = 9,
	Action_Use = 10,
	Action_Search = 11,
	Action_Sleep = 12,
	Action_Place = 13,
	Action_To = 14,
	Action_ReadMail = 15,
	Action_Sit = 16,
	Action_PickPlant = 17,
	Action_ForcePlant = 18,
	Action_Empty = 19,
	Action_Pet = 20,
	ActionID_Water = 21,
	ActionID_HarvestByproduct = 22,
	Action_LightTorch = 23,
	Action_WhisperPassword = 24,
	Action_Exit = 25,
	Action_TicklePear = 26,
	Action_Collect = 27,
	Action_Rotate = 28,
	Action_Unlock = 29,
	Action_Reveal = 30,
	Action_Roll = 31,
	Action_Travel = 32,
	Action_Wait = 33,
	Action_Begin = 34,
	Action_StealthTakedown = 35,
	Action_Identify = 36,
	Action_Inspect = 37,
	Action_Equip = 38,
	Action_Investigate = 39,
	Action_Start = 40,
	Action_Invoke = 41,
	Action_PlaceToken = 42,
	Action_Talk = 43,
	Action_View = 44,
	Action_Read = 45,
	Action_Dive = 46,
	Action_ViewPensieve = 47,
	ECalloutActions_MAX = 48
};

// Enum Cognition.ECalloutBlipType
enum class ECalloutBlipType : uint8 {
	Diamond = 0,
	Dot = 1,
	Door = 2,
	Vendor = 3,
	FastTravel = 4,
	ECalloutBlipType_MAX = 5
};

// Enum Cognition.ECalloutType
enum class ECalloutType : uint8 {
	Interact = 0,
	Interact_Blip_Action = 1,
	Interact_Blip_Action_Descriptor = 2,
	Interact_Blip_Descriptor = 3,
	Interact_NoBlip_Action = 4,
	ECalloutType_MAX = 5
};

// ScriptStruct Cognition.CalloutInformation
// Size: 0x58 (Inherited: 0x00)
struct FCalloutInformation {
	enum class ECalloutType CalloutType; // 0x00(0x01)
	enum class ECalloutBlipType CalloutBlipType; // 0x01(0x01)
	enum class ECalloutActions CalloutAction; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FText TargetName; // 0x08(0x18)
	struct FSlateColor CalloutTextColor; // 0x20(0x28)
	float CalloutInteractDistance; // 0x48(0x04)
	bool bGrayOutButton; // 0x4c(0x01)
	bool bIsTargetNameTranslatable; // 0x4d(0x01)
	bool Owned; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	float CalloutChargeTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

