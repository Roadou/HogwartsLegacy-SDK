// BlueprintGeneratedClass BP_Protected.BP_Protected_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_Protected_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UParticleSystemComponent* VFX_P_DW_Protego_Shield_Loop_Strong; // 0x250(0x08)
	struct UCapsuleComponent* bLocked; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)

	void ReceiveBeginPlay(); // Function BP_Protected.BP_Protected_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Protected(int32_t EntryPoint); // Function BP_Protected.BP_Protected_C.ExecuteUbergraph_BP_Protected // (Final|UbergraphFunction) // @ game+0x38a7480
};

