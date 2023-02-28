// WidgetBlueprintGeneratedClass UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C
// Size: 0x42d (Inherited: 0x380)
struct UUI_BP_BroomChallengeAccept_C : UBroomChallengeScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UWidgetAnimation* BREventPopupOff; // 0x388(0x08)
	struct UWidgetAnimation* PlayerFifthPlaceNumOn; // 0x390(0x08)
	struct UWidgetAnimation* PlayerFourthPlaceNumOn; // 0x398(0x08)
	struct UWidgetAnimation* PlayerThirdPlaceNumOn; // 0x3a0(0x08)
	struct UWidgetAnimation* PlayerSecondPlaceNumOn; // 0x3a8(0x08)
	struct UWidgetAnimation* PlayerFirstPlaceNumberOn; // 0x3b0(0x08)
	struct UWidgetAnimation* BREventPopupOn; // 0x3b8(0x08)
	struct UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x3c0(0x08)
	struct UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x3c8(0x08)
	struct UPhoenixTextBlock* PlayersBestTime; // 0x3d0(0x08)
	struct UPhoenixTextBlock* PlayersBestTimeName; // 0x3d8(0x08)
	struct UUI_BP_BroomPosition_C* position1; // 0x3e0(0x08)
	struct UUI_BP_BroomPosition_C* position2; // 0x3e8(0x08)
	struct UUI_BP_BroomPosition_C* position3; // 0x3f0(0x08)
	struct UUI_BP_BroomPosition_C* position4; // 0x3f8(0x08)
	struct UUI_BP_BroomPosition_C* position5; // 0x400(0x08)
	struct UPhoenixTextBlock* RaceNameText; // 0x408(0x08)
	struct ARace* RaceObj; // 0x410(0x08)
	struct TArray<struct UUI_BP_BroomPosition_C*> PositionArray; // 0x418(0x10)
	int32_t OutroIndex; // 0x428(0x04)
	bool RaceStarting; // 0x42c(0x01)

	void SequenceEvent__ENTRYPOINTUI_BP_BroomChallengeAccept_1(); // Function UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.SequenceEvent__ENTRYPOINTUI_BP_BroomChallengeAccept_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool BlueprintOnUMGInputAction(enum class EUMGInputAction InputAction, enum class EInputEvent InputEvent); // Function UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.BlueprintOnUMGInputAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOutroAnimationComplete(); // Function UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.OnOutroAnimationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRaceCountdownBegin(struct UObject* Caller, int32_t int); // Function UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.OnRaceCountdownBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_BroomChallengeAccept(int32_t EntryPoint); // Function UI_BP_BroomChallengeAccept.UI_BP_BroomChallengeAccept_C.ExecuteUbergraph_UI_BP_BroomChallengeAccept // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

