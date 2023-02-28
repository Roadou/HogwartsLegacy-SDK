// WidgetBlueprintGeneratedClass UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C
// Size: 0x340 (Inherited: 0x2e8)
struct UUI_BP_CompanionLevelUp_C : UHUDElementGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* HideSpecialNotification; // 0x2f0(0x08)
	struct UWidgetAnimation* ShowSpecialNotification; // 0x2f8(0x08)
	struct UImage* companionIcon; // 0x300(0x08)
	struct UPhoenixTextBlock* CompanionName; // 0x308(0x08)
	struct UImage* flame; // 0x310(0x08)
	struct UImage* Left_Image; // 0x318(0x08)
	struct UImage* Right_Image; // 0x320(0x08)
	struct UBorder* TheBorder; // 0x328(0x08)
	struct TArray<struct FPickupNotificationData> ItemsToShow; // 0x330(0x10)

	void ShowNotification(struct FString ItemName, struct FString IconName, int32_t Count); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.ShowNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideComplete(); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.HideComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Hide(); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddCollectionKnownNotification(struct FName CollectionID, struct FName CollectionCategory); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.I_AddCollectionKnownNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddCollectionObtainedNotification(struct FName CollectionID, struct FName CollectionCategory); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.I_AddCollectionObtainedNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddChallengeCompleteNotification(struct FName ChallengeID, struct FName ChallengeCategory, int32_t CompletedLevel, int32_t MaxLevels); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.I_AddChallengeCompleteNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ItemCollected(struct FString Name, struct FString IconName, int32_t Count, struct FString Header, bool SpecialCollection, struct FName Variation); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.I_ItemCollected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddGenericNotification(struct FString HeaderText, struct FString SubheaderText, struct FString IconName); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.I_AddGenericNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Construct(); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EventDisplaySpecialNotification(struct FString ItemId); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.EventDisplaySpecialNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EventHideSpecialNotification(); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.EventHideSpecialNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideAnimationFinished(); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.HideAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDisplaySpecialNotification(struct UObject* Caller); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.OnDisplaySpecialNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_CompanionLevelUp(int32_t EntryPoint); // Function UI_BP_CompanionLevelUp.UI_BP_CompanionLevelUp_C.ExecuteUbergraph_UI_BP_CompanionLevelUp // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

