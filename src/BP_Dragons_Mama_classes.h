// BlueprintGeneratedClass BP_Dragons_Mama.BP_Dragons_Mama_C
// Size: 0x25b4 (Inherited: 0x2588)
struct ABP_Dragons_Mama_C : ABP_Dragons_HebrideanBlack_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2588(0x08)
	struct FName LandingPointBaseName; // 0x2590(0x08)
	struct UMaterialInstanceDynamic* MaterialEffectHead; // 0x2598(0x08)
	struct UMaterialInstanceDynamic* MaterialEffectBody; // 0x25a0(0x08)
	int32_t NumberOfAttacks; // 0x25a8(0x04)
	int32_t ShotCount; // 0x25ac(0x04)
	float AttackDelayRate; // 0x25b0(0x04)

	void ReceiveBeginPlay(); // Function BP_Dragons_Mama.BP_Dragons_Mama_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DragonFireball(struct UObject* Caller); // Function BP_Dragons_Mama.BP_Dragons_Mama_C.DragonFireball // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void KillMamaDragon(struct UObject* Caller); // Function BP_Dragons_Mama.BP_Dragons_Mama_C.KillMamaDragon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonAttackStart(struct UObject* Caller); // Function BP_Dragons_Mama.BP_Dragons_Mama_C.DragonAttackStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DragonAttackStop(struct UObject* Caller); // Function BP_Dragons_Mama.BP_Dragons_Mama_C.DragonAttackStop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AdvanceToPoint(struct UObject* Caller, struct AActor* Actor); // Function BP_Dragons_Mama.BP_Dragons_Mama_C.AdvanceToPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MamaSpitFire01(struct UObject* Caller); // Function BP_Dragons_Mama.BP_Dragons_Mama_C.MamaSpitFire01 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnhideDragon(); // Function BP_Dragons_Mama.BP_Dragons_Mama_C.UnhideDragon // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Dragons_Mama(int32_t EntryPoint); // Function BP_Dragons_Mama.BP_Dragons_Mama_C.ExecuteUbergraph_BP_Dragons_Mama // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

