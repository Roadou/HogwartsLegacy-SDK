// BlueprintGeneratedClass BP_AVM_02_Poacher_Clue_Skins.BP_AVM_02_Poacher_Clue_Skins_C
// Size: 0x300 (Inherited: 0x2d8)
struct ABP_AVM_02_Poacher_Clue_Skins_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_CampA_Furpile_C; // 0x2e0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x2e8(0x08)
	struct USceneComponent* ForTag; // 0x2f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f8(0x08)

	void InteractionInitiated(); // Function BP_AVM_02_Poacher_Clue_Skins.BP_AVM_02_Poacher_Clue_Skins_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AVM_02_Poacher_Clue_Skins.BP_AVM_02_Poacher_Clue_Skins_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void RegisterDragonHarness(struct UObject* Caller); // Function BP_AVM_02_Poacher_Clue_Skins.BP_AVM_02_Poacher_Clue_Skins_C.RegisterDragonHarness // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AVM_02_Poacher_Clue_Skins(int32_t EntryPoint); // Function BP_AVM_02_Poacher_Clue_Skins.BP_AVM_02_Poacher_Clue_Skins_C.ExecuteUbergraph_BP_AVM_02_Poacher_Clue_Skins // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

