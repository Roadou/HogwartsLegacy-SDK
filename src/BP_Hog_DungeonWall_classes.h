// BlueprintGeneratedClass BP_Hog_DungeonWall.BP_Hog_DungeonWall_C
// Size: 0x2e0 (Inherited: 0x248)
struct ABP_Hog_DungeonWall_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* Sphere1; // 0x250(0x08)
	struct UNiagaraComponent* Niagara; // 0x258(0x08)
	struct UTargetComponent* TargetLightRays; // 0x260(0x08)
	struct URectLightComponent* RectLight; // 0x268(0x08)
	struct UStaticMeshComponent* Collision_Closed; // 0x270(0x08)
	struct UStaticMeshComponent* Collision_Open; // 0x278(0x08)
	struct UTargetComponent* Target; // 0x280(0x08)
	struct UBoxComponent* Box; // 0x288(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float Timeline_0_NewTrack_0_620FE2724A2C1AF5B4097CAB648AB565; // 0x2a0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_620FE2724A2C1AF5B4097CAB648AB565; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a8(0x08)
	struct UAnimSequence* AnimForward; // 0x2b0(0x08)
	float Position; // 0x2b8(0x04)
	bool IsOpen; // 0x2bc(0x01)
	bool PlayerInTrig; // 0x2bd(0x01)
	char pad_2BE[0x2]; // 0x2be(0x02)
	struct ANone* DungeonEntrance; // 0x2c0(0x08)
	int32_t BeaconHandle; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct ABeaconLocation* BeaconLocation; // 0x2d0(0x08)
	bool IgnoreMission; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float InitialIntensity; // 0x2dc(0x04)

	void Timeline_0__FinishedFunc(); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void CollisionState(bool Open); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.CollisionState // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateDungeonText(bool ACTIVE); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.ActivateDungeonText // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayBackwards(); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.PlayBackwards // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayForward(); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.PlayForward // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void TurnOnLightRays(bool On); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.TurnOnLightRays // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Hog_DungeonWall(int32_t EntryPoint); // Function BP_Hog_DungeonWall.BP_Hog_DungeonWall_C.ExecuteUbergraph_BP_Hog_DungeonWall // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

