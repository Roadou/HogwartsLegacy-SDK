// BlueprintGeneratedClass BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C
// Size: 0x5f8 (Inherited: 0x5d0)
struct ABP_SkinFX_MaximaPotion_C : ABP_SkinFX_Graph_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	float Timeline_0_NewTrack_1_63F33BB74A32786DC2EA72B7E6537515; // 0x5d8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_63F33BB74A32786DC2EA72B7E6537515; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	struct UTimelineComponent* Timeline_1; // 0x5e0(0x08)
	struct FHermesBPDelegateHandle Handle; // 0x5e8(0x10)

	void Timeline_0__FinishedFunc(); // Function BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void MunitionCreatedWithData(struct UObject* Caller, struct AMunitionType_Base* MunitionType); // Function BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.MunitionCreatedWithData // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyStart(); // Function BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.SkinFXNotifyStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyEnd(enum class ESkinFXEffectEndStyle EndStyle, float CurrentTime); // Function BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.SkinFXNotifyEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyRetrigger(float CurrentTime); // Function BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.SkinFXNotifyRetrigger // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SkinFX_MaximaPotion(int32_t EntryPoint); // Function BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.ExecuteUbergraph_BP_SkinFX_MaximaPotion // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

