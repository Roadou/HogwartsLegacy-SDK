// BlueprintGeneratedClass BP_WaterMill_Gears.BP_WaterMill_Gears_C
// Size: 0x2e8 (Inherited: 0x250)
struct ABP_WaterMill_Gears_C : AWaterMill_Gears {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UAkComponent* AkCogs; // 0x258(0x08)
	struct UAkComponent* AkWheel; // 0x260(0x08)
	struct UChildActorComponent* BP_Mill_WaterWheel; // 0x268(0x08)
	struct UStaticMeshComponent* SM_HM_Mill_Wheel_apl_COL; // 0x270(0x08)
	struct UStaticMeshComponent* SM_HM_Mill_Wheel_pl_COL; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HM_Mill_Gear_A_Base; // 0x280(0x08)
	struct UStaticMeshComponent* SM_Gear_B; // 0x288(0x08)
	struct UStaticMeshComponent* SM_Base; // 0x290(0x08)
	struct UStaticMeshComponent* SM_Gear_G; // 0x298(0x08)
	struct UStaticMeshComponent* SM_Gear_F; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_Gear_E; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_Gear_D; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_Gear_C; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_HM_Mill_Gear_C_Base; // 0x2c0(0x08)
	struct USceneComponent* SceneRoot; // 0x2c8(0x08)
	float Speed Control; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct FVector> Rotation Rates; // 0x2d8(0x10)

	void GetRotationRates(struct TArray<struct FVector>& Array); // Function BP_WaterMill_Gears.BP_WaterMill_Gears_C.GetRotationRates // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetGearComponents(struct TArray<struct UStaticMeshComponent*>& Array); // Function BP_WaterMill_Gears.BP_WaterMill_Gears_C.GetGearComponents // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	float GetSpeedControl(); // Function BP_WaterMill_Gears.BP_WaterMill_Gears_C.GetSpeedControl // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OrderChildren(struct TArray<struct UStaticMeshComponent*>& orderedGears); // Function BP_WaterMill_Gears.BP_WaterMill_Gears_C.OrderChildren // (HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WaterMill_Gears.BP_WaterMill_Gears_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WaterMill_Gears.BP_WaterMill_Gears_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void UpdateWaterWheelMaterialValues(); // Function BP_WaterMill_Gears.BP_WaterMill_Gears_C.UpdateWaterWheelMaterialValues // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WaterMill_Gears(int32_t EntryPoint); // Function BP_WaterMill_Gears.BP_WaterMill_Gears_C.ExecuteUbergraph_BP_WaterMill_Gears // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

