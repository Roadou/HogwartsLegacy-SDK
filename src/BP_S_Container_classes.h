// BlueprintGeneratedClass BP_S_Container.BP_S_Container_C
// Size: 0x3ca (Inherited: 0x2b0)
struct ABP_S_Container_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct ULootDropComponent* LootDrop; // 0x2b8(0x08)
	struct UStaticMeshComponent* lid; // 0x2c0(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2d0(0x08)
	float Timeline_Doors_Rotate_Close_18FA3C1C4D5F5539586D4A9768CD2271; // 0x2d8(0x04)
	float Timeline_Doors_Slide_Close_18FA3C1C4D5F5539586D4A9768CD2271; // 0x2dc(0x04)
	float Timeline_Doors_Slide_Open_18FA3C1C4D5F5539586D4A9768CD2271; // 0x2e0(0x04)
	float Timeline_Doors_Rotation_Open_18FA3C1C4D5F5539586D4A9768CD2271; // 0x2e4(0x04)
	enum class ETimelineDirection Timeline_Doors__Direction_18FA3C1C4D5F5539586D4A9768CD2271; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct UTimelineComponent* Timeline_Doors; // 0x2f0(0x08)
	bool Searching; // 0x2f8(0x01)
	bool Open; // 0x2f9(0x01)
	enum class EEnvironment Environment; // 0x2fa(0x01)
	char pad_2FB[0x1]; // 0x2fb(0x01)
	int32_t PropIndex; // 0x2fc(0x04)
	struct FTransform Lid_Transform; // 0x300(0x30)
	float Lid_RotationX; // 0x330(0x04)
	float RandomZRotation; // 0x334(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x338(0x50)
	int32_t EnvInt; // 0x388(0x04)
	bool AutoSelectLoot; // 0x38c(0x01)
	bool NotEmpty; // 0x38d(0x01)
	char pad_38E[0x2]; // 0x38e(0x02)
	struct FMulticastInlineDelegate ContainerOpened; // 0x390(0x10)
	struct FMulticastInlineDelegate ContainerClosed; // 0x3a0(0x10)
	struct FMulticastInlineDelegate ContainerEmpty; // 0x3b0(0x10)
	struct FRandomStream Random Seed; // 0x3c0(0x08)
	bool Empty; // 0x3c8(0x01)
	bool Opening; // 0x3c9(0x01)

	void RefreshList(); // Function BP_S_Container.BP_S_Container_C.RefreshList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_S_Container.BP_S_Container_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_Doors__FinishedFunc(); // Function BP_S_Container.BP_S_Container_C.Timeline_Doors__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Doors__UpdateFunc(); // Function BP_S_Container.BP_S_Container_C.Timeline_Doors__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_S_Container.BP_S_Container_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_S_Container.BP_S_Container_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_S_Container.BP_S_Container_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_S_Container.BP_S_Container_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CloseContainer(struct UObject* Caller); // Function BP_S_Container.BP_S_Container_C.CloseContainer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetWwiseSwitchAndPlayOpenSFX(); // Function BP_S_Container.BP_S_Container_C.SetWwiseSwitchAndPlayOpenSFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(struct UObject* i_caller); // Function BP_S_Container.BP_S_Container_C.BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Perceived_Interact(struct UObject* Caller); // Function BP_S_Container.BP_S_Container_C.Perceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_Interact(struct UObject* Caller); // Function BP_S_Container.BP_S_Container_C.NoLongerPerceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CheckLoot(); // Function BP_S_Container.BP_S_Container_C.CheckLoot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_S_Container(int32_t EntryPoint); // Function BP_S_Container.BP_S_Container_C.ExecuteUbergraph_BP_S_Container // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void ContainerEmpty__DelegateSignature(); // Function BP_S_Container.BP_S_Container_C.ContainerEmpty__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ContainerClosed__DelegateSignature(); // Function BP_S_Container.BP_S_Container_C.ContainerClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ContainerOpened__DelegateSignature(); // Function BP_S_Container.BP_S_Container_C.ContainerOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

