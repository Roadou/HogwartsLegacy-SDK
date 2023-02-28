// BlueprintGeneratedClass BP_M_Container.BP_M_Container_C
// Size: 0x479 (Inherited: 0x3c0)
struct ABP_M_Container_C : AContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UChildActorComponent* BP_HM_HW_MappedItems_Marker; // 0x3c8(0x08)
	struct ULootDropComponent* LootDrop; // 0x3d0(0x08)
	struct UStaticMeshComponent* lid; // 0x3d8(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x3e0(0x08)
	struct UStaticMeshComponent* ContainerMesh; // 0x3e8(0x08)
	float OpenLidTimeline_Rotation_Close_B16ACF6F42EA8B6B211107B97EA47C4B; // 0x3f0(0x04)
	float OpenLidTimeline_Slide_Close_B16ACF6F42EA8B6B211107B97EA47C4B; // 0x3f4(0x04)
	float OpenLidTimeline_Slide_Open_B16ACF6F42EA8B6B211107B97EA47C4B; // 0x3f8(0x04)
	float OpenLidTimeline_Rotation_Open_B16ACF6F42EA8B6B211107B97EA47C4B; // 0x3fc(0x04)
	enum class ETimelineDirection OpenLidTimeline__Direction_B16ACF6F42EA8B6B211107B97EA47C4B; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UTimelineComponent* OpenLidTimeline; // 0x408(0x08)
	enum class EEnvironment Environment; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct TArray<struct UStaticMesh*> LockArray; // 0x418(0x10)
	struct TArray<struct UStaticMesh*> LockUnlockedArray; // 0x428(0x10)
	struct UPhysicsConstraintComponent* LockMeshConstraint; // 0x438(0x08)
	struct UStaticMeshComponent* LockMesh; // 0x440(0x08)
	struct FMulticastInlineDelegate ButterflyChestOpen; // 0x448(0x10)
	struct FMulticastInlineDelegate GenericOpenChest; // 0x458(0x10)
	bool MultipleProps; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct ABP_OL_Chest_VP_Marker_C* Beacon; // 0x470(0x08)
	bool ForceEmpty; // 0x478(0x01)

	struct FVector GetSoundPos(); // Function BP_M_Container.BP_M_Container_C.GetSoundPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetWwiseSwitchAndPlayOpenSFX(); // Function BP_M_Container.BP_M_Container_C.SetWwiseSwitchAndPlayOpenSFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddExpiry(); // Function BP_M_Container.BP_M_Container_C.AddExpiry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UMeshComponent* GetAttachToMesh(); // Function BP_M_Container.BP_M_Container_C.GetAttachToMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool NeedsKey(); // Function BP_M_Container.BP_M_Container_C.NeedsKey // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void RefreshList(); // Function BP_M_Container.BP_M_Container_C.RefreshList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_M_Container.BP_M_Container_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenLidTimeline__FinishedFunc(); // Function BP_M_Container.BP_M_Container_C.OpenLidTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void OpenLidTimeline__UpdateFunc(); // Function BP_M_Container.BP_M_Container_C.OpenLidTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_M_Container.BP_M_Container_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_M_Container.BP_M_Container_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseContainer(struct UObject* Caller); // Function BP_M_Container.BP_M_Container_C.CloseContainer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_M_Container.BP_M_Container_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(struct UObject* i_caller); // Function BP_M_Container.BP_M_Container_C.BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnUnlocked(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool FromMinigame); // Function BP_M_Container.BP_M_Container_C.OnUnlocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Perceived_Interact(struct UObject* Caller); // Function BP_M_Container.BP_M_Container_C.Perceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_Interact(struct UObject* Caller); // Function BP_M_Container.BP_M_Container_C.NoLongerPerceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckLoot(); // Function BP_M_Container.BP_M_Container_C.CheckLoot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Unlock(); // Function BP_M_Container.BP_M_Container_C.Unlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_M_Container(int32_t EntryPoint); // Function BP_M_Container.BP_M_Container_C.ExecuteUbergraph_BP_M_Container // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void GenericOpenChest__DelegateSignature(); // Function BP_M_Container.BP_M_Container_C.GenericOpenChest__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ButterflyChestOpen__DelegateSignature(); // Function BP_M_Container.BP_M_Container_C.ButterflyChestOpen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

