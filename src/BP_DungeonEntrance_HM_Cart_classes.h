// BlueprintGeneratedClass BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C
// Size: 0x309 (Inherited: 0x248)
struct ABP_DungeonEntrance_HM_Cart_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_DungeonEntrance_HM_Cart; // 0x250(0x08)
	struct USphereComponent* SphereTrigger; // 0x258(0x08)
	struct UStaticMeshComponent* SM_HM_Dungeon_Cart_Door_Left; // 0x260(0x08)
	struct UStaticMeshComponent* SM_HM_Dungeon_Cart_Door_Right; // 0x268(0x08)
	struct UObjectStateComponent* ObjectState; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float Timeline_1_NewTrack_0_F718E51E4F5C3745273A4E827500B50E; // 0x280(0x04)
	enum class ETimelineDirection Timeline_1__Direction_F718E51E4F5C3745273A4E827500B50E; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* Timeline_2; // 0x288(0x08)
	float Timeline_0_Alpha_B4766D9B4033D7BCE70D1FB80FDD10A5; // 0x290(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B4766D9B4033D7BCE70D1FB80FDD10A5; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Timeline_1; // 0x298(0x08)
	struct FText ObjectName; // 0x2a0(0x18)
	enum class E_DoorState DoorState; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float Right_Closed; // 0x2bc(0x04)
	float Right_Open; // 0x2c0(0x04)
	float Left_Closed; // 0x2c4(0x04)
	float Left_Open; // 0x2c8(0x04)
	struct FName MissionCheck; // 0x2cc(0x08)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FString MissionStepNotCheck; // 0x2d8(0x10)
	struct FString MissionStepCheck; // 0x2e8(0x10)
	bool UseMissionCheck; // 0x2f8(0x01)
	bool UseStatCheck; // 0x2f9(0x01)
	char pad_2FA[0x2]; // 0x2fa(0x02)
	struct FStatList StatName; // 0x2fc(0x08)
	int32_t StatValue; // 0x304(0x04)
	bool RevelioLinkedToStatCheck; // 0x308(0x01)

	void Delegate Stats Updated(struct FName Key, int32_t Value, int32_t Delta); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.Delegate Stats Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleStatCheckRevelio(); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.HandleStatCheckRevelio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleRevelioHighlight(bool CanHightlight); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.ToggleRevelioHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DungeonEntrance_HM_Cart(int32_t EntryPoint); // Function BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.ExecuteUbergraph_BP_DungeonEntrance_HM_Cart // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

