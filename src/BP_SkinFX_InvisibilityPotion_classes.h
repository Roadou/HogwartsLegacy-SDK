// BlueprintGeneratedClass BP_SkinFX_InvisibilityPotion.BP_SkinFX_InvisibilityPotion_C
// Size: 0x5f0 (Inherited: 0x5d0)
struct ABP_SkinFX_InvisibilityPotion_C : ABP_SkinFX_Graph_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	float Timeline_0_NewTrack_2_7CA3028A4E086227129F9C99BDE5B8A9; // 0x5d8(0x04)
	float Timeline_0_NewTrack_1_7CA3028A4E086227129F9C99BDE5B8A9; // 0x5dc(0x04)
	float Timeline_0_NewTrack_0_7CA3028A4E086227129F9C99BDE5B8A9; // 0x5e0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_7CA3028A4E086227129F9C99BDE5B8A9; // 0x5e4(0x01)
	char pad_5E5[0x3]; // 0x5e5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x5e8(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_SkinFX_InvisibilityPotion.BP_SkinFX_InvisibilityPotion_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_SkinFX_InvisibilityPotion.BP_SkinFX_InvisibilityPotion_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyStart(); // Function BP_SkinFX_InvisibilityPotion.BP_SkinFX_InvisibilityPotion_C.SkinFXNotifyStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyKill(); // Function BP_SkinFX_InvisibilityPotion.BP_SkinFX_InvisibilityPotion_C.SkinFXNotifyKill // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyRetrigger(float CurrentTime); // Function BP_SkinFX_InvisibilityPotion.BP_SkinFX_InvisibilityPotion_C.SkinFXNotifyRetrigger // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyEnd(enum class ESkinFXEffectEndStyle EndStyle, float CurrentTime); // Function BP_SkinFX_InvisibilityPotion.BP_SkinFX_InvisibilityPotion_C.SkinFXNotifyEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SkinFX_InvisibilityPotion(int32_t EntryPoint); // Function BP_SkinFX_InvisibilityPotion.BP_SkinFX_InvisibilityPotion_C.ExecuteUbergraph_BP_SkinFX_InvisibilityPotion // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

