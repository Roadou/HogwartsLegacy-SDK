// BlueprintGeneratedClass BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C
// Size: 0x600 (Inherited: 0x5d0)
struct ABP_SkinFX_StoneSkin_C : ABP_SkinFX_Graph_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	float Timeline_1_NewTrack_0_461AD6A145C277F47E9CACA8B97F7887; // 0x5d8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_461AD6A145C277F47E9CACA8B97F7887; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	struct UTimelineComponent* Timeline_2; // 0x5e0(0x08)
	float Timeline_0_NewTrack_1_13D198C14C93B8D3DBC74EBF02E16550; // 0x5e8(0x04)
	float Timeline_0_NewTrack_0_13D198C14C93B8D3DBC74EBF02E16550; // 0x5ec(0x04)
	enum class ETimelineDirection Timeline_0__Direction_13D198C14C93B8D3DBC74EBF02E16550; // 0x5f0(0x01)
	char pad_5F1[0x7]; // 0x5f1(0x07)
	struct UTimelineComponent* Timeline_1; // 0x5f8(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyRetrigger(float CurrentTime); // Function BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.SkinFXNotifyRetrigger // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyStart(); // Function BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.SkinFXNotifyStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyEnd(enum class ESkinFXEffectEndStyle EndStyle, float CurrentTime); // Function BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.SkinFXNotifyEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SkinFX_StoneSkin(int32_t EntryPoint); // Function BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.ExecuteUbergraph_BP_SkinFX_StoneSkin // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

