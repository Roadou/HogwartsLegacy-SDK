// BlueprintGeneratedClass BP_Ghost.BP_Ghost_C
// Size: 0x2564 (Inherited: 0x2538)
struct ABP_Ghost_C : ABP_Student_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2538(0x08)
	struct UAkComponent* Ak_BP_Ghost; // 0x2540(0x08)
	float BobbingAlphaMultiplier; // 0x2548(0x04)
	float BobbingPlayRateMultiplier; // 0x254c(0x04)
	struct FName SimulateBelow1; // 0x2550(0x08)
	struct FName SimulateBelow2; // 0x2558(0x08)
	float PhysicsBlendWeight; // 0x2560(0x04)

	void ReceiveBeginPlay(); // Function BP_Ghost.BP_Ghost_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Ghost.BP_Ghost_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Ghost(int32_t EntryPoint); // Function BP_Ghost.BP_Ghost_C.ExecuteUbergraph_BP_Ghost // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

