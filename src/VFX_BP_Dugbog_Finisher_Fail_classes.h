// BlueprintGeneratedClass VFX_BP_Dugbog_Finisher_Fail.VFX_BP_Dugbog_Finisher_Fail_C
// Size: 0x2b0 (Inherited: 0x248)
struct AVFX_BP_Dugbog_Finisher_Fail_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* Smoke; // 0x250(0x08)
	struct UDecalComponent* Decal; // 0x258(0x08)
	struct UNiagaraComponent* LightningStrike; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	float Timeline_2_NewTrack_0_EA406E564210D92FBE83029A5F1D0A56; // 0x270(0x04)
	float Timeline_2_NewTrack_2_EA406E564210D92FBE83029A5F1D0A56; // 0x274(0x04)
	enum class ETimelineDirection Timeline_2__Direction_EA406E564210D92FBE83029A5F1D0A56; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UTimelineComponent* Timeline_3; // 0x280(0x08)
	float Timeline_1_NewTrack_0_1E7BAF014A2F54385AAB43B592AA8067; // 0x288(0x04)
	enum class ETimelineDirection Timeline_1__Direction_1E7BAF014A2F54385AAB43B592AA8067; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x290(0x08)
	float Timeline_0_NewTrack_0_CF93F7DC45C5491E64F94397088CE298; // 0x298(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CF93F7DC45C5491E64F94397088CE298; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* Decal_Mat; // 0x2a8(0x08)

	void UserConstructionScript(); // Function VFX_BP_Dugbog_Finisher_Fail.VFX_BP_Dugbog_Finisher_Fail_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function VFX_BP_Dugbog_Finisher_Fail.VFX_BP_Dugbog_Finisher_Fail_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function VFX_BP_Dugbog_Finisher_Fail.VFX_BP_Dugbog_Finisher_Fail_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function VFX_BP_Dugbog_Finisher_Fail.VFX_BP_Dugbog_Finisher_Fail_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function VFX_BP_Dugbog_Finisher_Fail.VFX_BP_Dugbog_Finisher_Fail_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function VFX_BP_Dugbog_Finisher_Fail.VFX_BP_Dugbog_Finisher_Fail_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function VFX_BP_Dugbog_Finisher_Fail.VFX_BP_Dugbog_Finisher_Fail_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Dugbog_Finisher_Fail.VFX_BP_Dugbog_Finisher_Fail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Dugbog_Finisher_Fail(int32_t EntryPoint); // Function VFX_BP_Dugbog_Finisher_Fail.VFX_BP_Dugbog_Finisher_Fail_C.ExecuteUbergraph_VFX_BP_Dugbog_Finisher_Fail // (Final|UbergraphFunction) // @ game+0x38a7480
};

