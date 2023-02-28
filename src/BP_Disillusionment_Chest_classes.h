// BlueprintGeneratedClass BP_Disillusionment_Chest.BP_Disillusionment_Chest_C
// Size: 0x3f9 (Inherited: 0x389)
struct ABP_Disillusionment_Chest_C : ABP_M_TreasureChest_C {
	char pad_389[0x7]; // 0x389(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UChildActorComponent* BP_HM_HW_MappedItems_Marker1; // 0x398(0x08)
	struct USphereComponent* Sphere; // 0x3a0(0x08)
	struct UAkComponent* Ak_BP_Disillusionment_Chest; // 0x3a8(0x08)
	struct UABP_DisillusionmentChest_Master_C* AnimBP2; // 0x3b0(0x08)
	float DistToPlayer; // 0x3b8(0x04)
	float UnlockDist; // 0x3bc(0x04)
	float AwakeDist; // 0x3c0(0x04)
	float LockDist; // 0x3c4(0x04)
	bool Awake; // 0x3c8(0x01)
	bool WasAwake; // 0x3c9(0x01)
	char pad_3CA[0x2]; // 0x3ca(0x02)
	float SuspectOnDist; // 0x3cc(0x04)
	float SuspectOffDist; // 0x3d0(0x04)
	bool WasOpen; // 0x3d4(0x01)
	bool WasLocked; // 0x3d5(0x01)
	bool WasSuspect; // 0x3d6(0x01)
	bool IsRegisteredForSense; // 0x3d7(0x01)
	struct TArray<struct AActor*> Actors to Ignore; // 0x3d8(0x10)
	struct UNiagaraSystem* DeathDisintegrationVFX; // 0x3e8(0x08)
	struct UNiagaraSystem* LootChestBurstVFX; // 0x3f0(0x08)
	bool HasTickedCheck; // 0x3f8(0x01)

	void ReceiveBeginPlay(); // Function BP_Disillusionment_Chest.BP_Disillusionment_Chest_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Disillusionment_Chest.BP_Disillusionment_Chest_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Landed(struct UObject* Caller); // Function BP_Disillusionment_Chest.BP_Disillusionment_Chest_C.Landed // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenChest(struct UObject* Caller); // Function BP_Disillusionment_Chest.BP_Disillusionment_Chest_C.OpenChest // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Disillusionment_Chest(int32_t EntryPoint); // Function BP_Disillusionment_Chest.BP_Disillusionment_Chest_C.ExecuteUbergraph_BP_Disillusionment_Chest // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

