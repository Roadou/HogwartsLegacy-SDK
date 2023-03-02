// BlueprintGeneratedClass BP_Cairn_BoneStepBase_A.BP_Cairn_BoneStepBase_A_C
// Size: 0x290 (Inherited: 0x248)
struct ABP_Cairn_BoneStepBase_A_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* torch_glow_single_Stop; // 0x250(0x08)
	struct UAkComponent* torch_glow_single1; // 0x258(0x08)
	struct UAkComponent* torch_glow_single; // 0x260(0x08)
	struct UChildActorComponent* BP_Cairn_BoneStep; // 0x268(0x08)
	struct UStaticMeshComponent* StaticMeshComponent03; // 0x270(0x08)
	struct UStaticMeshComponent* StaticMeshComponent02; // 0x278(0x08)
	struct UStaticMeshComponent* StaticMeshComponent01; // 0x280(0x08)
	struct USceneComponent* SharedRoot; // 0x288(0x08)

	void ReceiveBeginPlay(); // Function BP_Cairn_BoneStepBase_A.BP_Cairn_BoneStepBase_A_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Cairn_BoneStepBase_A.BP_Cairn_BoneStepBase_A_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Cairn_BoneStepBase_A(int32_t EntryPoint); // Function BP_Cairn_BoneStepBase_A.BP_Cairn_BoneStepBase_A_C.ExecuteUbergraph_BP_Cairn_BoneStepBase_A // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

