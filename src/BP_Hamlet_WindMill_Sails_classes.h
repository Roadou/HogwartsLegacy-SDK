// BlueprintGeneratedClass BP_Hamlet_WindMill_Sails.BP_Hamlet_WindMill_Sails_C
// Size: 0x2c8 (Inherited: 0x248)
struct ABP_Hamlet_WindMill_Sails_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_Hamlet_Windmill_Sail_A; // 0x250(0x08)
	struct UStaticMeshComponent* SM_Hamlet_Windmill_Sail_A1; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Hamlet_Windmill_Sail_A2; // 0x260(0x08)
	struct UStaticMeshComponent* SM_Hamlet_Windmill_Sail_A3; // 0x268(0x08)
	struct UChildActorComponent* Sails; // 0x270(0x08)
	struct UStaticMeshComponent* SM_HM_Mill_Gear_D; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HM_Mill_Gear_C_Base; // 0x280(0x08)
	struct UStaticMeshComponent* SM_HM_Mill_Gear_C; // 0x288(0x08)
	struct UStaticMeshComponent* SM_HM_Mill_Gear_B; // 0x290(0x08)
	struct UAkComponent* AkWindmill; // 0x298(0x08)
	struct UStaticMeshComponent* SM_Mill_WaterWheel_Axis; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	float Sail_Rotation; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct FVector> Rotation Rates; // 0x2b8(0x10)

	void SetMillSailsRelativeRotation(); // Function BP_Hamlet_WindMill_Sails.BP_Hamlet_WindMill_Sails_C.SetMillSailsRelativeRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Hamlet_WindMill_Sails.BP_Hamlet_WindMill_Sails_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Hamlet_WindMill_Sails.BP_Hamlet_WindMill_Sails_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Hamlet_WindMill_Sails.BP_Hamlet_WindMill_Sails_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void UpdateRotation(); // Function BP_Hamlet_WindMill_Sails.BP_Hamlet_WindMill_Sails_C.UpdateRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Hamlet_WindMill_Sails(int32_t EntryPoint); // Function BP_Hamlet_WindMill_Sails.BP_Hamlet_WindMill_Sails_C.ExecuteUbergraph_BP_Hamlet_WindMill_Sails // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

