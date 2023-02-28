// BlueprintGeneratedClass BP_FleePoint.BP_FleePoint_C
// Size: 0x258 (Inherited: 0x248)
struct ABP_FleePoint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)

	void ReceiveBeginPlay(); // Function BP_FleePoint.BP_FleePoint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FleePoint.BP_FleePoint_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FleePoint(int32_t EntryPoint); // Function BP_FleePoint.BP_FleePoint_C.ExecuteUbergraph_BP_FleePoint // (Final|UbergraphFunction) // @ game+0x38a7480
};

