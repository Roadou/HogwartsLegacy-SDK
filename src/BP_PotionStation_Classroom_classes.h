// BlueprintGeneratedClass BP_PotionStation_Classroom.BP_PotionStation_Classroom_C
// Size: 0x2e8 (Inherited: 0x2bc)
struct ABP_PotionStation_Classroom_C : ABP_SANC_PotionStation_Base_C {
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x2c8(0x08)
	struct UChildActorComponent* BrewingSite3; // 0x2d0(0x08)
	struct USceneComponent* SharedRoot; // 0x2d8(0x08)
	struct FName BeaconID; // 0x2e0(0x08)

	struct FName GetUniqueBeaconId(); // Function BP_PotionStation_Classroom.BP_PotionStation_Classroom_C.GetUniqueBeaconId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PotionStation_Classroom.BP_PotionStation_Classroom_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function BP_PotionStation_Classroom.BP_PotionStation_Classroom_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RegisterZZPTable(bool TRUE); // Function BP_PotionStation_Classroom.BP_PotionStation_Classroom_C.RegisterZZPTable // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PotionStation_Classroom(int32_t EntryPoint); // Function BP_PotionStation_Classroom.BP_PotionStation_Classroom_C.ExecuteUbergraph_BP_PotionStation_Classroom // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

