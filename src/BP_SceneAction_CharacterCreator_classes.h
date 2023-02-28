// BlueprintGeneratedClass BP_SceneAction_CharacterCreator.BP_SceneAction_CharacterCreator_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBP_SceneAction_CharacterCreator_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool CCActive; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct UUI_BP_AvatarCreator_C* WidgetReference; // 0xb8(0x08)
	bool IsSecondInstance; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TArray<int32_t> SuppressedCCTabs; // 0xc8(0x10)

	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_CharacterCreator.BP_SceneAction_CharacterCreator_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetTimeInsideInterval(float Time, float LocalTime, bool IsScrubbing); // Function BP_SceneAction_CharacterCreator.BP_SceneAction_CharacterCreator_C.OnSetTimeInsideInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_CharacterCreator.BP_SceneAction_CharacterCreator_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CC_Dismissed(); // Function BP_SceneAction_CharacterCreator.BP_SceneAction_CharacterCreator_C.CC_Dismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_CharacterCreator(int32_t EntryPoint); // Function BP_SceneAction_CharacterCreator.BP_SceneAction_CharacterCreator_C.ExecuteUbergraph_BP_SceneAction_CharacterCreator // (Final|UbergraphFunction) // @ game+0x38a7480
};

