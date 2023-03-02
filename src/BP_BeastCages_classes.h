// BlueprintGeneratedClass BP_BeastCages.BP_BeastCages_C
// Size: 0x1808 (Inherited: 0x1668)
struct ABP_BeastCages_C : ADynamicObjectVolume {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1668(0x08)
	struct UPadlockComponent* padlock; // 0x1670(0x08)
	struct UBoxComponent* Large; // 0x1678(0x08)
	struct UBoxComponent* Medium; // 0x1680(0x08)
	struct UBoxComponent* Small; // 0x1688(0x08)
	struct UStaticMeshComponent* DoorMesh; // 0x1690(0x08)
	struct UStaticMeshComponent* CageMesh; // 0x1698(0x08)
	struct USceneComponent* Scene; // 0x16a0(0x08)
	struct UObjectStateComponent* ObjectState; // 0x16a8(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x16b0(0x08)
	float Open_Door_Negative_NewTrack_0_46210C39442C72B49FF50F9E7A085B65; // 0x16b8(0x04)
	float Open_Door_Negative_Open_Door_46210C39442C72B49FF50F9E7A085B65; // 0x16bc(0x04)
	enum class ETimelineDirection Open_Door_Negative__Direction_46210C39442C72B49FF50F9E7A085B65; // 0x16c0(0x01)
	char pad_16C1[0x7]; // 0x16c1(0x07)
	struct UTimelineComponent* Open Door Negative; // 0x16c8(0x08)
	enum class E_CageType NewCageType; // 0x16d0(0x01)
	bool Open; // 0x16d1(0x01)
	char pad_16D2[0x2]; // 0x16d2(0x02)
	struct FRotator Initial_Rotation; // 0x16d4(0x0c)
	int32_t LockLevel; // 0x16e0(0x04)
	int32_t PropIndex; // 0x16e4(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x16e8(0x50)
	bool CompiledList; // 0x1738(0x01)
	bool Autosize; // 0x1739(0x01)
	char pad_173A[0x6]; // 0x173a(0x06)
	struct TArray<struct UBoxComponent*> HeightChecks; // 0x1740(0x10)
	struct FMulticastInlineDelegate OpenedCage; // 0x1750(0x10)
	struct USceneComponent* WalkoutTarget; // 0x1760(0x08)
	bool NoLockEffect; // 0x1768(0x01)
	bool HasWwiseSwitchBeenSet; // 0x1769(0x01)
	bool SnapToFloor; // 0x176a(0x01)
	char pad_176B[0x1]; // 0x176b(0x01)
	struct FVector Relative Location; // 0x176c(0x0c)
	float Box Extent Z; // 0x1778(0x04)
	char pad_177C[0x4]; // 0x177c(0x04)
	struct AActor* Creature; // 0x1780(0x08)
	struct TArray<struct UBoxComponent*> NavCollision; // 0x1788(0x10)
	struct AActor* Spawned Actor; // 0x1798(0x08)
	struct FSTR_Creature_Overrides CreatureOverrides; // 0x17a0(0x50)
	struct UBoxComponent* doorNav; // 0x17f0(0x08)
	bool OnlyResizeForIntenalCreature; // 0x17f8(0x01)
	bool Internal; // 0x17f9(0x01)
	char pad_17FA[0x6]; // 0x17fa(0x06)
	struct UBoxComponent* PlayerOnlyCOL; // 0x1800(0x08)

	struct UMeshComponent* GetAttachToMesh(); // Function BP_BeastCages.BP_BeastCages_C.GetAttachToMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetSoundPos(); // Function BP_BeastCages.BP_BeastCages_C.GetSoundPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct USceneComponent* GetWalkoutTarget(); // Function BP_BeastCages.BP_BeastCages_C.GetWalkoutTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsCageOpen(); // Function BP_BeastCages.BP_BeastCages_C.IsCageOpen // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ShouldBeLocked(); // Function BP_BeastCages.BP_BeastCages_C.ShouldBeLocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Target Setup(); // Function BP_BeastCages.BP_BeastCages_C.Target Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void NavBlocker Setup(); // Function BP_BeastCages.BP_BeastCages_C.NavBlocker Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Setup(bool AutoAdjust); // Function BP_BeastCages.BP_BeastCages_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_BeastCages.BP_BeastCages_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Open Door Negative__FinishedFunc(); // Function BP_BeastCages.BP_BeastCages_C.Open Door Negative__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Open Door Negative__UpdateFunc(); // Function BP_BeastCages.BP_BeastCages_C.Open Door Negative__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnLocked(); // Function BP_BeastCages.BP_BeastCages_C.OnLocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetAudioSwitch(struct UAkComponent* AkComponent); // Function BP_BeastCages.BP_BeastCages_C.SetAudioSwitch // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BeastCages.BP_BeastCages_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ActorSpawned(struct AActor* SpawnedActor, struct FName& GroupName); // Function BP_BeastCages.BP_BeastCages_C.ActorSpawned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetWwsiseSwitch(); // Function BP_BeastCages.BP_BeastCages_C.SetWwsiseSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnUnlocked(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool FromMinigame); // Function BP_BeastCages.BP_BeastCages_C.OnUnlocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_1(struct AActor* SpawnedActor, struct FName& GroupName); // Function BP_BeastCages.BP_BeastCages_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BeastCages(int32_t EntryPoint); // Function BP_BeastCages.BP_BeastCages_C.ExecuteUbergraph_BP_BeastCages // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void OpenedCage__DelegateSignature(struct AActor* Who); // Function BP_BeastCages.BP_BeastCages_C.OpenedCage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

