// BlueprintGeneratedClass BP_WE_Slytherin_Fish_Mover.BP_WE_Slytherin_Fish_Mover_C
// Size: 0x2a0 (Inherited: 0x278)
struct ABP_WE_Slytherin_Fish_Mover_C : AFishMoverBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct USplineComponent* S_Fish_3; // 0x280(0x08)
	struct USplineComponent* S_Fish_2; // 0x288(0x08)
	float Fish_Timeline_FishPath_1_6665AE3E4B8FF1015AC8C0B21D6000A8; // 0x290(0x04)
	enum class ETimelineDirection Fish_Timeline__Direction_6665AE3E4B8FF1015AC8C0B21D6000A8; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Fish_Timeline; // 0x298(0x08)

	void Fish_Timeline__FinishedFunc(); // Function BP_WE_Slytherin_Fish_Mover.BP_WE_Slytherin_Fish_Mover_C.Fish_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Fish_Timeline__UpdateFunc(); // Function BP_WE_Slytherin_Fish_Mover.BP_WE_Slytherin_Fish_Mover_C.Fish_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Slytherin_Fish_Mover.BP_WE_Slytherin_Fish_Mover_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Slytherin_Fish_Mover(int32_t EntryPoint); // Function BP_WE_Slytherin_Fish_Mover.BP_WE_Slytherin_Fish_Mover_C.ExecuteUbergraph_BP_WE_Slytherin_Fish_Mover // (Final|UbergraphFunction) // @ game+0x38a7480
};

