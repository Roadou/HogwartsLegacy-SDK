// Enum UMGFocus.EUMGInputAxis
enum class EUMGInputAxis : uint8 {
	UMGMapZoomIn = 0,
	UMGMapZoomOut = 1,
	UMGMapScreenMove_X = 2,
	UMGMapScreenMove_Y = 3,
	UMGLeftThumbStickXAxis = 4,
	UMGLeftThumbStickYAxis = 5,
	UMGRightThumbStickXAxis = 6,
	UMGRightThumbStickYAxis = 7,
	UMGLeftTriggerAxis = 8,
	UMGRightTriggerAxis = 9,
	UMGTouchpadX = 10,
	UMGTouchpadY = 11,
	UMGMouseWheelAxis = 12,
	UMGMouseX = 13,
	UMGMouseY = 14,
	UMGInputAxis_MAX = 15,
	EUMGInputAxis_MAX = 16
};

// Enum UMGFocus.EUMGInputAction
enum class EUMGInputAction : uint8 {
	UMGConfirm = 0,
	UMGBack = 1,
	UMGUINavigateUp = 2,
	UMGUINavigateDown = 3,
	UMGUINavigateLeft = 4,
	UMGUINavigateRight = 5,
	UMGCloseScreen = 6,
	UMGSkipCinematicOrConversation = 7,
	UMGGadgetWheelMountSlot1 = 8,
	UMGGadgetWheelMountSlot2 = 9,
	UMGGadgetWheelMountSlot3 = 10,
	UMGGadgetWheelFelixFelicisSlot = 11,
	UMGGadgetWheelConfirm = 12,
	UMGMapScreenToggle = 13,
	UMGInventoryScreenToggle = 14,
	UMGCharacterScreenToggle = 15,
	UMGChallengeScreenToggle = 16,
	UMGQuestScreenToggle = 17,
	UMGCompendiumScreenToggle = 18,
	UMGOwlMailScreenToggle = 19,
	UMGTalentsScreenToggle = 20,
	UMGSettingsScreenToggle = 21,
	UMGActionScreenToggle = 22,
	UMGMapScreenWaypoint = 23,
	UMGMapScreenFastTravel = 24,
	UMGMapScreenPrevMap = 25,
	UMGMapScreenNextMap = 26,
	UMGMapScreenGoToQuestLog = 27,
	UMGMapScreenWait = 28,
	UMGTrackQuest = 29,
	UMGGoToQuest = 30,
	UMGGoToggleQuestScreenDetails = 31,
	UMGDropItem = 32,
	UMGUseEquipOrInspectItem = 33,
	UMGChangeGearAppearance = 34,
	UMGToggleHood = 35,
	UMGSortInventory = 36,
	UMGViewSpellVideo = 37,
	UMGConfirmPurchase = 38,
	UMGPreviewVendorGear = 39,
	UMGNurturingCollect = 40,
	UMGNurturingDestroy = 41,
	UMGAddCreatureToInventory = 42,
	UMGSummonCreature = 43,
	UMGCreatureManagementScreen = 44,
	UMGCreatureHideHUD = 45,
	UMGHarvestCreatureByproduct = 46,
	UMGRenameCreature = 47,
	UMGReleaseCreature = 48,
	UMGNextCreature = 49,
	UMGPreviousCreature = 50,
	UMGSelectBreedingPair = 51,
	UMGOptionPanelPrevious = 52,
	UMGOptionPanelNext = 53,
	UMGOptionPanelConfirm = 54,
	UMGOptionPanelCancel = 55,
	UMGAccioActivityRules = 56,
	UMGFieldGuideTabLeft = 57,
	UMGFieldGuideTabRight = 58,
	UMGLoadingScreenPrevHint = 59,
	UMGLoadingScreenNextHint = 60,
	UMGPauseMenu = 61,
	UMGFirstPlayProgress = 62,
	UMGReadEULA = 63,
	UMGEulaTos = 64,
	UMGEulaPrivacy = 65,
	UMGFrontendChooseSave = 66,
	UMGFrontendSettingsOrDeleteCharacter = 67,
	UMGBenchmarkSettings = 68,
	UMGResetSettings = 69,
	UMGToggleMenuReader = 70,
	UMGProceedPastStartScreen_Gamepad = 71,
	UMGProceedPastStartScreen_Keyboard = 72,
	UMGShowSkipCinematicPrompt = 73,
	UMGDisplayUserProfilePicker = 74,
	UMGHouseSelectSwitchMode = 75,
	UMGStartSpellMiniGame = 76,
	UMGSpellMinigameOption1 = 77,
	UMGSpellMinigameOption2 = 78,
	UMGSpellMinigameOption3 = 79,
	UMGSpellMinigameOption4 = 80,
	UMGLoomUpgradeItem = 81,
	UMGLoomViewTraits = 82,
	UMGLoomCompareEquipped = 83,
	UMGLeftThumbStickUp = 84,
	UMGLeftThumbStickDown = 85,
	UMGLeftThumbStickLeft = 86,
	UMGLeftThumbStickRight = 87,
	UMGRightThumbStickUp = 88,
	UMGRightThumbStickDown = 89,
	UMGRightThumbStickLeft = 90,
	UMGRightThumbStickRight = 91,
	UMGDPadUp = 92,
	UMGDPadDown = 93,
	UMGDPadLeft = 94,
	UMGDPadRight = 95,
	UMGFaceButtonTop = 96,
	UMGFaceButtonRight = 97,
	UMGFaceButtonBottom = 98,
	UMGFaceButtonLeft = 99,
	UMGLeftShoulder = 100,
	UMGLeftTrigger = 101,
	UMGLeftThumbstickButton = 102,
	UMGRightShoulder = 103,
	UMGRightTrigger = 104,
	UMGRightThumbstickButton = 105,
	UMGSpecialLeft = 106,
	UMGSpecialRight = 107,
	UMGLeftMouseButton = 108,
	UMGMiddleMouseButton = 109,
	UMGRightMouseButton = 110,
	UMGKeyMappingReset = 111,
	UMGUnbindKeyMapping = 112,
	UMGMapDebugL = 113,
	UMGInputAction_MAX = 114,
	EUMGInputAction_MAX = 115
};

// ScriptStruct UMGFocus.UMGConsolidatedAxisInputData
// Size: 0x30 (Inherited: 0x00)
struct FUMGConsolidatedAxisInputData {
	bool bAnyAxisInputSinceLastTick; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D LeftThumbstickAxisValues; // 0x04(0x08)
	struct FVector2D RightThumbstickAxisValues; // 0x0c(0x08)
	float LeftTriggerAxisValue; // 0x14(0x04)
	float RightTriggerAxisValue; // 0x18(0x04)
	float MouseWheelAxisValue; // 0x1c(0x04)
	struct FVector2D MouseAxisValues; // 0x20(0x08)
	struct FVector2D TouchpadAxisValues; // 0x28(0x08)
};

// ScriptStruct UMGFocus.UMGInputListenerStack
// Size: 0x10 (Inherited: 0x00)
struct FUMGInputListenerStack {
	struct TArray<struct FUMGInputListener> InputListenerStack; // 0x00(0x10)
};

// ScriptStruct UMGFocus.UMGInputListener
// Size: 0x10 (Inherited: 0x00)
struct FUMGInputListener {
	int32_t UIPriority; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UUMGFocusWidget* UMGFocusWidget; // 0x08(0x08)
};

// ScriptStruct UMGFocus.UMGInputActionInfo
// Size: 0x02 (Inherited: 0x00)
struct FUMGInputActionInfo {
	enum class EUMGInputAction InputAction; // 0x00(0x01)
	enum class EInputEvent InputEvent; // 0x01(0x01)
};

