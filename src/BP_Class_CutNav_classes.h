// BlueprintGeneratedClass BP_Class_CutNav.BP_Class_CutNav_C
// Size: 0x271 (Inherited: 0x258)
struct ABP_Class_CutNav_C : AStaticMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UStaticMeshComponent* BlockerStaticMesh; // 0x260(0x08)
	struct UOdcObstacleComponent* OdcObstacle; // 0x268(0x08)
	bool InitiallyBlocked; // 0x270(0x01)

	void ReceiveBeginPlay(); // Function BP_Class_CutNav.BP_Class_CutNav_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ActivateNavBlock(bool TRUE); // Function BP_Class_CutNav.BP_Class_CutNav_C.ActivateNavBlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Class_CutNav(int32_t EntryPoint); // Function BP_Class_CutNav.BP_Class_CutNav_C.ExecuteUbergraph_BP_Class_CutNav // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

