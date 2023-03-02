// BlueprintGeneratedClass BP_Mill_WaterWheel.BP_Mill_WaterWheel_C
// Size: 0x2e4 (Inherited: 0x248)
struct ABP_Mill_WaterWheel_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDecalComponent* Decal4; // 0x250(0x08)
	struct UDecalComponent* Decal3; // 0x258(0x08)
	struct UDecalComponent* Decal2; // 0x260(0x08)
	struct UDecalComponent* Decal1; // 0x268(0x08)
	struct UDecalComponent* Decal; // 0x270(0x08)
	struct UAkComponent* AkWheel; // 0x278(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Middle_part1; // 0x280(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Middle_part; // 0x288(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Long_middle_B1; // 0x290(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Long_middle_A1; // 0x298(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Wheel; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Long_middle_A; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Wheel3; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Wheel2; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Wheel1; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Long_middle_B; // 0x2c8(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Axis; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	float Rotation Speed; // 0x2e0(0x04)

	void UpdateMaterialValues(); // Function BP_Mill_WaterWheel.BP_Mill_WaterWheel_C.UpdateMaterialValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Mill_WaterWheel.BP_Mill_WaterWheel_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Mill_WaterWheel.BP_Mill_WaterWheel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Mill_WaterWheel.BP_Mill_WaterWheel_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Mill_WaterWheel(int32_t EntryPoint); // Function BP_Mill_WaterWheel.BP_Mill_WaterWheel_C.ExecuteUbergraph_BP_Mill_WaterWheel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

