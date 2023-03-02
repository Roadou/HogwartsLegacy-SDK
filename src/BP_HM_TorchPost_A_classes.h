// BlueprintGeneratedClass BP_HM_TorchPost_A.BP_HM_TorchPost_A_C
// Size: 0xb18 (Inherited: 0xaec)
struct ABP_HM_TorchPost_A_C : ANone {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UStaticMeshComponent* SM_BCProps_Tentpole_A; // 0xaf8(0x08)
	struct UNiagaraComponent* Fire particle; // 0xb00(0x08)
	struct UStaticMeshComponent* SM_BCProps_RopeLashing_A; // 0xb08(0x08)
	struct ANone* LanternVar; // 0xb10(0x08)

	void ReceiveBeginPlay(); // Function BP_HM_TorchPost_A.BP_HM_TorchPost_A_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_TorchPost_A(int32_t EntryPoint); // Function BP_HM_TorchPost_A.BP_HM_TorchPost_A_C.ExecuteUbergraph_BP_HM_TorchPost_A // (Final|UbergraphFunction) // @ game+0x38a7480
};

