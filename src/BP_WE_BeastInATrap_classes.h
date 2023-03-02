// BlueprintGeneratedClass BP_WE_BeastInATrap.BP_WE_BeastInATrap_C
// Size: 0x3b0 (Inherited: 0x280)
struct ABP_WE_BeastInATrap_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ADynamicObjectVolume* DOVRef; // 0x290(0x08)
	struct ACreature_Character* Creature; // 0x298(0x08)
	struct TMap<struct FName, float> ScaleMap; // 0x2a0(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<UAnimationArchitectAsset>> ADAMap; // 0x2f0(0x50)
	struct ABP_BeastInTrap_C* CageRef; // 0x340(0x08)
	float ScaleCache; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct AActor* OtherActor; // 0x350(0x08)
	struct TMap<struct FName, float> OffsetMap; // 0x358(0x50)
	struct FName CreatureName; // 0x3a8(0x08)

	void SetCreatureStata(struct ACreature_Character* CreatureCharacter, bool InCage); // Function BP_WE_BeastInATrap.BP_WE_BeastInATrap_C.SetCreatureStata // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_E494541C443AF3BDA2FC038431112EE1(struct UObject* Loaded); // Function BP_WE_BeastInATrap.BP_WE_BeastInATrap_C.OnLoaded_E494541C443AF3BDA2FC038431112EE1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_BeastInATrap.BP_WE_BeastInATrap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnCreatureSpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function BP_WE_BeastInATrap.BP_WE_BeastInATrap_C.OnCreatureSpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CageOpenedOrClosed(); // Function BP_WE_BeastInATrap.BP_WE_BeastInATrap_C.CageOpenedOrClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCageDroppedToGround(); // Function BP_WE_BeastInATrap.BP_WE_BeastInATrap_C.OnCageDroppedToGround // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_BeastInATrap(int32_t EntryPoint); // Function BP_WE_BeastInATrap.BP_WE_BeastInATrap_C.ExecuteUbergraph_BP_WE_BeastInATrap // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

