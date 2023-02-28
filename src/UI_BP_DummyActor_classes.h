// BlueprintGeneratedClass UI_BP_DummyActor.UI_BP_DummyActor_C
// Size: 0x598 (Inherited: 0x540)
struct AUI_BP_DummyActor_C : AUIDummyActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetComponent* UIWidget; // 0x548(0x08)
	struct UManagedCharacterComponent* ManagedCharacter; // 0x550(0x08)
	struct UAnimationComponent* Animation; // 0x558(0x08)
	struct USpringArmComponent* FaceSpringArm; // 0x560(0x08)
	struct UFacialComponent* Facial; // 0x568(0x08)
	struct UCustomizableCharacterComponent* CustomizableCharacter; // 0x570(0x08)
	bool IsGearLoading; // 0x578(0x01)
	bool IsBodyLoading; // 0x579(0x01)
	bool bDelegatesSetup; // 0x57a(0x01)
	bool EnableClothSimulation; // 0x57b(0x01)
	float ClothSimulationVelocityScale; // 0x57c(0x04)
	bool Override Facial Emotion; // 0x580(0x01)
	enum class EFacialEmotion Override Emotion; // 0x581(0x01)
	bool BeginPlay; // 0x582(0x01)
	char pad_583[0x5]; // 0x583(0x05)
	struct FMulticastInlineDelegate FullBodyPresetLoaded; // 0x588(0x10)

	void Enable Cloth Simulation(bool Enable); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.Enable Cloth Simulation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoCameraCutThisFrame(); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.DoCameraCutThisFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleVisibility(bool Visible); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.ToggleVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetDummyPreset(enum class EAvatarPresetType PresetType, struct FName PresetName); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.I_SetDummyPreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SyncDummy(struct FName CharID); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.I_SyncDummy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_EquipDummyGear(struct FString GearID); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.I_EquipDummyGear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetFullBodyPreset(struct FName PresetName); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.SetFullBodyPreset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSinglePreset(enum class EAvatarPresetType PresetType, struct FName PresetName); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.SetSinglePreset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GearLoadComplete(struct AActor* Actor, bool bSuccess); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.GearLoadComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CharLoadComplete(struct AActor* Actor); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.CharLoadComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideDummy(); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.HideDummy // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowDummy(); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.ShowDummy // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupDelegates(); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.SetupDelegates // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAddOnMeshesChanged(struct AActor* Actor); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.OnAddOnMeshesChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnPresetLoadFinished(struct AActor* Actor, bool Success); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.OnPresetLoadFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFinishedLoadingFullbodyPreset(struct AActor* Actor, bool Success); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.OnFinishedLoadingFullbodyPreset // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_SetDummyFullbody(struct FName PresetName); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.I_SetDummyFullbody // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_DummyActor(int32_t EntryPoint); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.ExecuteUbergraph_UI_BP_DummyActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void FullBodyPresetLoaded__DelegateSignature(); // Function UI_BP_DummyActor.UI_BP_DummyActor_C.FullBodyPresetLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

