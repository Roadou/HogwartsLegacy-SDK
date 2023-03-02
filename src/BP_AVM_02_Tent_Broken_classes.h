// BlueprintGeneratedClass BP_AVM_02_Tent_Broken.BP_AVM_02_Tent_Broken_C
// Size: 0x308 (Inherited: 0x248)
struct ABP_AVM_02_Tent_Broken_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* NiagaraFire_Brazier_XXXL_3; // 0x250(0x08)
	struct UNiagaraComponent* NiagaraFire_Brazier_XXXL_2; // 0x258(0x08)
	struct UNiagaraComponent* NiagaraBigSmoke; // 0x260(0x08)
	struct UNiagaraComponent* Niagara_ChimneySmoke_Black_SM; // 0x268(0x08)
	struct UStaticMeshComponent* SM_COL_CampB_TentB_Broken; // 0x270(0x08)
	struct UStaticMeshComponent* SM_CampB_TentB_Wall_Broken; // 0x278(0x08)
	struct UStaticMeshComponent* SM_CampB_TentB_Beams_Broken; // 0x280(0x08)
	struct UStaticMeshComponent* SM_CampB_Banner_C_Broken; // 0x288(0x08)
	struct UStaticMeshComponent* SM_CampB_Banner_D_Broken; // 0x290(0x08)
	struct UStaticMeshComponent* SM_CampB_Rope_B_Broken; // 0x298(0x08)
	struct UStaticMeshComponent* SM_CampB_Rope_E_Broken; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_CampB_Rope_C_Broken; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_CampB_TentB_Roof_Broken; // 0x2b0(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISM_3SM_CampB_Rope_D_Broken; // 0x2b8(0x08)
	struct USceneComponent* SharedRoot; // 0x2c0(0x08)
	struct FEventDateTime In Date; // 0x2c8(0x40)

	void ReceiveBeginPlay(); // Function BP_AVM_02_Tent_Broken.BP_AVM_02_Tent_Broken_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void avmTentFXsOff(struct FTimeEvent& InTimeEvent); // Function BP_AVM_02_Tent_Broken.BP_AVM_02_Tent_Broken_C.avmTentFXsOff // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AVM_02_Tent_Broken(int32_t EntryPoint); // Function BP_AVM_02_Tent_Broken.BP_AVM_02_Tent_Broken_C.ExecuteUbergraph_BP_AVM_02_Tent_Broken // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

