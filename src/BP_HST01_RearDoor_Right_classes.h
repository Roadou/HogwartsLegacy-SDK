// BlueprintGeneratedClass BP_HST01_RearDoor_Right.BP_HST01_RearDoor_Right_C
// Size: 0x2b8 (Inherited: 0x248)
struct ABP_HST01_RearDoor_Right_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_HST01_RearDoorR_Details; // 0x250(0x08)
	struct UDecalComponent* Decal7; // 0x258(0x08)
	struct UDecalComponent* Decal6; // 0x260(0x08)
	struct UDecalComponent* Decal5; // 0x268(0x08)
	struct UDecalComponent* Decal4; // 0x270(0x08)
	struct UDecalComponent* Decal3; // 0x278(0x08)
	struct UDecalComponent* Decal2; // 0x280(0x08)
	struct UDecalComponent* Decal1; // 0x288(0x08)
	struct UDecalComponent* Decal; // 0x290(0x08)
	struct UStaticMeshComponent* SM_HST01_RearDoorR_Wood; // 0x298(0x08)
	struct UStaticMeshComponent* SM_HST01_RearDoorR_Metal; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	struct FName LockId; // 0x2b0(0x08)

	void ReceiveBeginPlay(); // Function BP_HST01_RearDoor_Right.BP_HST01_RearDoor_Right_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function BP_HST01_RearDoor_Right.BP_HST01_RearDoor_Right_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HST01_RearDoor_Right(int32_t EntryPoint); // Function BP_HST01_RearDoor_Right.BP_HST01_RearDoor_Right_C.ExecuteUbergraph_BP_HST01_RearDoor_Right // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

