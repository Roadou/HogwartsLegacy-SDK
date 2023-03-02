// BlueprintGeneratedClass BP_Gob_WaterWheel_01.BP_Gob_WaterWheel_01_C
// Size: 0x270 (Inherited: 0x248)
struct ABP_Gob_WaterWheel_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak; // 0x250(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x258(0x08)
	struct UStaticMeshComponent* E; // 0x260(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x268(0x08)

	void ReceiveBeginPlay(); // Function BP_Gob_WaterWheel_01.BP_Gob_WaterWheel_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Gob_WaterWheel_01.BP_Gob_WaterWheel_01_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Gob_WaterWheel_01(int32_t EntryPoint); // Function BP_Gob_WaterWheel_01.BP_Gob_WaterWheel_01_C.ExecuteUbergraph_BP_Gob_WaterWheel_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

