// BlueprintGeneratedClass BP_EVL_01_Brazier.BP_EVL_01_Brazier_C
// Size: 0x860 (Inherited: 0x839)
struct ABP_EVL_01_Brazier_C : ABP_Torch_C {
	char pad_839[0x7]; // 0x839(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x840(0x08)
	struct UNiagaraComponent* SlytherinDecal; // 0x848(0x08)
	struct FMulticastInlineDelegate TorchCountdownFinished; // 0x850(0x10)

	void UserConstructionScript(); // Function BP_EVL_01_Brazier.BP_EVL_01_Brazier_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_EVL_01_Brazier.BP_EVL_01_Brazier_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TorchCountdown(); // Function BP_EVL_01_Brazier.BP_EVL_01_Brazier_C.TorchCountdown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_EVL_01_Brazier(int32_t EntryPoint); // Function BP_EVL_01_Brazier.BP_EVL_01_Brazier_C.ExecuteUbergraph_BP_EVL_01_Brazier // (Final|UbergraphFunction) // @ game+0x38a7480
	void TorchCountdownFinished__DelegateSignature(); // Function BP_EVL_01_Brazier.BP_EVL_01_Brazier_C.TorchCountdownFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

