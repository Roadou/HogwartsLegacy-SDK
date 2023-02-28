// BlueprintGeneratedClass BP_LootDrop_Container.BP_LootDrop_Container_C
// Size: 0x308 (Inherited: 0x2b0)
struct ABP_LootDrop_Container_C : AWorldObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct ULootDropComponent* LootDrop; // 0x2b8(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2c8(0x08)
	struct UAkComponent* NewVar_1; // 0x2d0(0x08)
	enum class EEnvironment Environment; // 0x2d8(0x01)
	bool AutoSelectLoot; // 0x2d9(0x01)
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct FMulticastInlineDelegate onBagEmpty; // 0x2e0(0x10)
	struct UNiagaraComponent* Beacon; // 0x2f0(0x08)
	bool Collected; // 0x2f8(0x01)
	bool AllowBeacon; // 0x2f9(0x01)
	char pad_2FA[0x2]; // 0x2fa(0x02)
	float fxStartTime; // 0x2fc(0x04)
	float fxScaleInDuration; // 0x300(0x04)
	float fxScaleOutDuration; // 0x304(0x04)

	struct UNiagaraComponent* SpawnBeacon(struct USceneComponent* AttachToComponent, struct FVector Location, struct FRotator Rotation); // Function BP_LootDrop_Container.BP_LootDrop_Container_C.SpawnBeacon // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_LootDrop_Container.BP_LootDrop_Container_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_LootDrop_Container.BP_LootDrop_Container_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(struct UObject* i_caller); // Function BP_LootDrop_Container.BP_LootDrop_Container_C.BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void Perceived_Interact(struct UObject* Caller); // Function BP_LootDrop_Container.BP_LootDrop_Container_C.Perceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NoLongerPerceived_Interact(struct UObject* Caller); // Function BP_LootDrop_Container.BP_LootDrop_Container_C.NoLongerPerceived_Interact // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowNonCinematicElements(struct UObject* Caller); // Function BP_LootDrop_Container.BP_LootDrop_Container_C.ShowNonCinematicElements // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideNonCinematicElements(struct UObject* Caller); // Function BP_LootDrop_Container.BP_LootDrop_Container_C.HideNonCinematicElements // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_LootDrop_Container(int32_t EntryPoint); // Function BP_LootDrop_Container.BP_LootDrop_Container_C.ExecuteUbergraph_BP_LootDrop_Container // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void onBagEmpty__DelegateSignature(); // Function BP_LootDrop_Container.BP_LootDrop_Container_C.onBagEmpty__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

