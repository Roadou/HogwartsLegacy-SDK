// BlueprintGeneratedClass BP_WE_PuffClouds.BP_WE_PuffClouds_C
// Size: 0x2d0 (Inherited: 0x280)
struct ABP_WE_PuffClouds_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume; // 0x290(0x08)
	struct TArray<struct ABP_WE_PuffClouds_SpellCollider_C*> SpellColliders; // 0x298(0x10)
	struct TArray<struct ANPC_Character*> Puffskeins; // 0x2a8(0x10)
	float GravityScale; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TArray<struct USceneComponent*> PuffskeinLocations; // 0x2c0(0x10)

	void SetSpellCollider(struct ABP_WE_PuffClouds_SpellCollider_C* Collider, struct FVector Location, struct ANPC_Character* Puffskein); // Function BP_WE_PuffClouds.BP_WE_PuffClouds_C.SetSpellCollider // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSpawnTransform(struct FTransform& Transform); // Function BP_WE_PuffClouds.BP_WE_PuffClouds_C.GetSpawnTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReenablePuffskeinBehaviour(struct ANPC_Character* PuffskeinHit); // Function BP_WE_PuffClouds.BP_WE_PuffClouds_C.ReenablePuffskeinBehaviour // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__DynamicObjectVolume_K2Node_ComponentBoundEvent_0_SpawnerActorSpawnedSignature__DelegateSignature(struct AActor* SpawnedActor, struct FName& GroupName); // Function BP_WE_PuffClouds.BP_WE_PuffClouds_C.BndEvt__DynamicObjectVolume_K2Node_ComponentBoundEvent_0_SpawnerActorSpawnedSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void StartBinding(); // Function BP_WE_PuffClouds.BP_WE_PuffClouds_C.StartBinding // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PuffskeinHit(struct ANPC_Character* ColliderHit); // Function BP_WE_PuffClouds.BP_WE_PuffClouds_C.PuffskeinHit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_PuffClouds.BP_WE_PuffClouds_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_PuffClouds(int32_t EntryPoint); // Function BP_WE_PuffClouds.BP_WE_PuffClouds_C.ExecuteUbergraph_BP_WE_PuffClouds // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

