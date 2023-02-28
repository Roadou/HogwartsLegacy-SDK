// BlueprintGeneratedClass BP_RavenGroup.BP_RavenGroup_C
// Size: 0x2f2 (Inherited: 0x248)
struct ABP_RavenGroup_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* ChildActor19; // 0x250(0x08)
	struct USceneComponent* ChildActor14; // 0x258(0x08)
	struct USceneComponent* ChildActor13; // 0x260(0x08)
	struct USceneComponent* ChildActor12; // 0x268(0x08)
	struct USceneComponent* ChildActor11; // 0x270(0x08)
	struct USceneComponent* ChildActor10; // 0x278(0x08)
	struct USceneComponent* ChildActor2; // 0x280(0x08)
	struct USceneComponent* ChildActor8; // 0x288(0x08)
	struct USceneComponent* ChildActor7; // 0x290(0x08)
	struct USceneComponent* ChildActor5; // 0x298(0x08)
	struct USceneComponent* ChildActor4; // 0x2a0(0x08)
	struct USceneComponent* ChildActor1; // 0x2a8(0x08)
	struct UBP_WorldEvent_DropComponentsToGround_C* BP_WorldEvent_DropComponentsToGround; // 0x2b0(0x08)
	struct USphereComponent* Sphere; // 0x2b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c0(0x08)
	float Raven Trigger Radius; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TArray<struct USceneComponent*> RavenSpawnPointArray; // 0x2d0(0x10)
	struct TArray<struct ABP_RavenProp_C*> SpawnedRavenArray; // 0x2e0(0x10)
	bool bSpawningComplete; // 0x2f0(0x01)
	bool UseTrigger; // 0x2f1(0x01)

	void PlayFlappingSound(); // Function BP_RavenGroup.BP_RavenGroup_C.PlayFlappingSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TickSpawnRavens(); // Function BP_RavenGroup.BP_RavenGroup_C.TickSpawnRavens // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_RavenGroup.BP_RavenGroup_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_RavenGroup.BP_RavenGroup_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_RavenGroup.BP_RavenGroup_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_RavenGroup.BP_RavenGroup_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_RavenGroup.BP_RavenGroup_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_RavenGroup.BP_RavenGroup_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_RavenGroup.BP_RavenGroup_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_RavenGroup.BP_RavenGroup_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_RavenGroup.BP_RavenGroup_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_RavenGroup.BP_RavenGroup_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_RavenGroup.BP_RavenGroup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_RavenGroup.BP_RavenGroup_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_RavenGroup.BP_RavenGroup_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_RavenGroup(int32_t EntryPoint); // Function BP_RavenGroup.BP_RavenGroup_C.ExecuteUbergraph_BP_RavenGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

