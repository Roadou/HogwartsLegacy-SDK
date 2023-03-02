// BlueprintGeneratedClass BP_BoneContainer.BP_BoneContainer_C
// Size: 0x3e1 (Inherited: 0x248)
struct ABP_BoneContainer_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USpotLightComponent* SpotLight; // 0x250(0x08)
	struct UPhysicsThrusterComponent* PhysicsThruster; // 0x258(0x08)
	struct UStaticMeshComponent* Handle; // 0x260(0x08)
	struct UStaticMeshComponent* HandleAnchor; // 0x268(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x270(0x08)
	struct UStaticMeshComponent* PushBlock; // 0x278(0x08)
	struct UParticleSystemComponent* Debris1; // 0x280(0x08)
	struct UParticleSystemComponent* Debris ; // 0x288(0x08)
	struct UAkComponent* Ak_BP_BoneContainer; // 0x290(0x08)
	struct UObjectStateComponent* ObjectState; // 0x298(0x08)
	struct UStaticMeshComponent* lid; // 0x2a0(0x08)
	struct USceneComponent* SharedRoot; // 0x2a8(0x08)
	float Timeline_1_NewTrack_0_52A27C14490013CE49DF379EFF6C0C6C; // 0x2b0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_52A27C14490013CE49DF379EFF6C0C6C; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2b8(0x08)
	float Timeline_0_NewTrack_0_72FC5B364ED4204744589CA100C49781; // 0x2c0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_72FC5B364ED4204744589CA100C49781; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2c8(0x08)
	struct TMap<struct AActor*, bool> BoneCluster; // 0x2d0(0x50)
	struct AActor* Pile; // 0x320(0x08)
	bool Boolean; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	struct FVector BlockStartingLoc; // 0x32c(0x0c)
	bool ContainsBones?; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	struct FRotator StartingRotation; // 0x33c(0x0c)
	struct TMap<enum class None, struct FString> SpiderMap; // 0x348(0x50)
	struct FString SpiderTypeToSpawn; // 0x398(0x10)
	int32_t ChanceToSpawn Spider; // 0x3a8(0x04)
	enum class None SpiderType; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	float PushDistance; // 0x3b0(0x04)
	bool Old Rock Door; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct FMulticastInlineDelegate FinishedOpening; // 0x3b8(0x10)
	struct ABP_BoneCluster_C* BonesActor; // 0x3c8(0x08)
	bool Old Rock Door_1; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct AActor* Cluster; // 0x3d8(0x08)
	bool Opened; // 0x3e0(0x01)

	void FindSpawnPoint(struct FTransform& SpawnTransform); // Function BP_BoneContainer.BP_BoneContainer_C.FindSpawnPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_BoneContainer.BP_BoneContainer_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_BoneContainer.BP_BoneContainer_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_BoneContainer.BP_BoneContainer_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_BoneContainer.BP_BoneContainer_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_BoneContainer.BP_BoneContainer_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_BoneContainer.BP_BoneContainer_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_BoneContainer.BP_BoneContainer_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_BoneContainer.BP_BoneContainer_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_BoneContainer.BP_BoneContainer_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_BoneContainer.BP_BoneContainer_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_BoneContainer.BP_BoneContainer_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BoneContainer.BP_BoneContainer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_BoneContainer.BP_BoneContainer_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveDestroyed(); // Function BP_BoneContainer.BP_BoneContainer_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BoneContainer(int32_t EntryPoint); // Function BP_BoneContainer.BP_BoneContainer_C.ExecuteUbergraph_BP_BoneContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void FinishedOpening__DelegateSignature(); // Function BP_BoneContainer.BP_BoneContainer_C.FinishedOpening__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

