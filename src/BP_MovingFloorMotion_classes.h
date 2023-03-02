// BlueprintGeneratedClass BP_MovingFloorMotion.BP_MovingFloorMotion_C
// Size: 0x2b0 (Inherited: 0x248)
struct ABP_MovingFloorMotion_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	float Timeline_0_Bend_50D87D8E4B7CF499877237A055324E43; // 0x258(0x04)
	float Timeline_0_Bob_50D87D8E4B7CF499877237A055324E43; // 0x25c(0x04)
	float Timeline_0_Lerp_50D87D8E4B7CF499877237A055324E43; // 0x260(0x04)
	enum class ETimelineDirection Timeline_0__Direction_50D87D8E4B7CF499877237A055324E43; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* Timeline_1; // 0x268(0x08)
	int32_t Index; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct USceneComponent* FloorTile; // 0x278(0x08)
	struct FVector StartLoc; // 0x280(0x0c)
	struct FVector TargetLocation; // 0x28c(0x0c)
	float BendMultiplyer; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FMulticastInlineDelegate Finished; // 0x2a0(0x10)

	void Timeline_0__FinishedFunc(); // Function BP_MovingFloorMotion.BP_MovingFloorMotion_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_MovingFloorMotion.BP_MovingFloorMotion_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void MoveTiles(); // Function BP_MovingFloorMotion.BP_MovingFloorMotion_C.MoveTiles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reverse(); // Function BP_MovingFloorMotion.BP_MovingFloorMotion_C.Reverse // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MovingFloorMotion(int32_t EntryPoint); // Function BP_MovingFloorMotion.BP_MovingFloorMotion_C.ExecuteUbergraph_BP_MovingFloorMotion // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void Finished__DelegateSignature(); // Function BP_MovingFloorMotion.BP_MovingFloorMotion_C.Finished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

