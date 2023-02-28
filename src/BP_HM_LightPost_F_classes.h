// BlueprintGeneratedClass BP_HM_LightPost_F.BP_HM_LightPost_F_C
// Size: 0xb08 (Inherited: 0xaec)
struct ABP_HM_LightPost_F_C : ABP_LightFixture_Master_C {
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf0(0x08)
	struct UNiagaraComponent* Niagara; // 0xaf8(0x08)
	struct ABP_Candles_C* LanternVar; // 0xb00(0x08)

	void ReceiveBeginPlay(); // Function BP_HM_LightPost_F.BP_HM_LightPost_F_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_LightPost_F(int32_t EntryPoint); // Function BP_HM_LightPost_F.BP_HM_LightPost_F_C.ExecuteUbergraph_BP_HM_LightPost_F // (Final|UbergraphFunction) // @ game+0x38a7480
};

