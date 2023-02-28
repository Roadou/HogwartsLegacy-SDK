// BlueprintGeneratedClass UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C
// Size: 0x28 (Inherited: 0x28)
struct UUI_BPI_NotificationPanel_C : UInterface {

	void I_AddChallengeCompleteNotification(struct FName ChallengeID, struct FName ChallengeCategory, int32_t CompletedLevel, int32_t MaxLevels); // Function UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C.I_AddChallengeCompleteNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddCollectionObtainedNotification(struct FName CollectionID, struct FName CollectionCategory); // Function UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C.I_AddCollectionObtainedNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddCollectionKnownNotification(struct FName CollectionID, struct FName CollectionCategory); // Function UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C.I_AddCollectionKnownNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_AddGenericNotification(struct FString HeaderText, struct FString SubheaderText, struct FString IconName); // Function UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C.I_AddGenericNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void I_ItemCollected(struct FString Name, struct FString IconName, int32_t Count, struct FString Header, bool SpecialCollection, struct FName Variation); // Function UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C.I_ItemCollected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

