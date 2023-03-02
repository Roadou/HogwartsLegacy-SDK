// BlueprintGeneratedClass BP_Hamlet_Class_A_Shed_A.BP_Hamlet_Class_A_Shed_A_C
// Size: 0x2a8 (Inherited: 0x257)
struct ABP_Hamlet_Class_A_Shed_A_C : ABP_Hamlet_Base_C {
	char pad_257[0x1]; // 0x257(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Hamlet_PopOut_A_INT_EXT; // 0x260(0x08)
	struct UStaticMeshComponent* SM_Hamlet_PopOut_C_INT_EXT; // 0x268(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_8SM_CampB_5m_PostA_INT_EXT; // 0x270(0x08)
	struct UChildActorComponent* BP_WalkSpeedVolume; // 0x278(0x08)
	struct UCameraStackVolumeComponent* CameraStackVolume2; // 0x280(0x08)
	struct UBoxComponent* Box3; // 0x288(0x08)
	struct UChildActorComponent* BP_Door_Template1; // 0x290(0x08)
	struct UChildActorComponent* BP_Door_Template; // 0x298(0x08)
	struct USceneComponent* SharedRoot; // 0x2a0(0x08)

	void UserConstructionScript(); // Function BP_Hamlet_Class_A_Shed_A.BP_Hamlet_Class_A_Shed_A_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Hamlet_Class_A_Shed_A.BP_Hamlet_Class_A_Shed_A_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Hamlet_Class_A_Shed_A(int32_t EntryPoint); // Function BP_Hamlet_Class_A_Shed_A.BP_Hamlet_Class_A_Shed_A_C.ExecuteUbergraph_BP_Hamlet_Class_A_Shed_A // (Final|UbergraphFunction) // @ game+0x38a7480
};

