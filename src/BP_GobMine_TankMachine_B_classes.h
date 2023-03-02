// BlueprintGeneratedClass BP_GobMine_TankMachine_B.BP_GobMine_TankMachine_B_C
// Size: 0x309 (Inherited: 0x248)
struct ABP_GobMine_TankMachine_B_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_GobMine_TankMachine_B; // 0x250(0x08)
	struct UObjectStateComponent* ObjectState; // 0x258(0x08)
	struct UParticleSystemComponent* ParticleSystem2; // 0x260(0x08)
	struct UStaticMeshComponent* SM_GobMine_TankMachine_Switch_A2; // 0x268(0x08)
	struct UStaticMeshComponent* SM_GobMine_TankMachine_Wheel_D; // 0x270(0x08)
	struct UStaticMeshComponent* SM_GobMine_TankMachine_Wheel_C; // 0x278(0x08)
	struct UStaticMeshComponent* SM_GobMine_TankMachine_Wheel_E; // 0x280(0x08)
	struct UStaticMeshComponent* SM_GobMine_TankMachine_Wheel_B; // 0x288(0x08)
	struct UStaticMeshComponent* SM_GobMine_TankMachine_Wheel_A; // 0x290(0x08)
	struct USceneComponent* WheelERotator; // 0x298(0x08)
	struct USceneComponent* WheelDRotator; // 0x2a0(0x08)
	struct USceneComponent* WheelCRotator; // 0x2a8(0x08)
	struct USceneComponent* WheelBRotator; // 0x2b0(0x08)
	struct USceneComponent* WheelARotator; // 0x2b8(0x08)
	struct USceneComponent* PistonHandle; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_GobMine_TankMachine_Base_A; // 0x2c8(0x08)
	struct UStaticMeshComponent* SM_GobMine_TankMachine_Switch_A; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	float Timeline_1_NewTrack_0_8E65698E47A63B800C661D958A8CCB99; // 0x2e0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_8E65698E47A63B800C661D958A8CCB99; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2e8(0x08)
	float Timeline_0_NewTrack_0_0232BB2E49C676324C7021A96689E58B; // 0x2f0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_0232BB2E49C676324C7021A96689E58B; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2f8(0x08)
	struct UMaterialInstanceDynamic* StrapDynMat; // 0x300(0x08)
	bool bIsMachineTurnedOff; // 0x308(0x01)

	void UserConstructionScript(); // Function BP_GobMine_TankMachine_B.BP_GobMine_TankMachine_B_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_GobMine_TankMachine_B.BP_GobMine_TankMachine_B_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_GobMine_TankMachine_B.BP_GobMine_TankMachine_B_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_GobMine_TankMachine_B.BP_GobMine_TankMachine_B_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_GobMine_TankMachine_B.BP_GobMine_TankMachine_B_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GobMine_TankMachine_B.BP_GobMine_TankMachine_B_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ActivateMachine(); // Function BP_GobMine_TankMachine_B.BP_GobMine_TankMachine_B_C.ActivateMachine // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GobMine_TankMachine_B(int32_t EntryPoint); // Function BP_GobMine_TankMachine_B.BP_GobMine_TankMachine_B_C.ExecuteUbergraph_BP_GobMine_TankMachine_B // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

