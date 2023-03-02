// BlueprintGeneratedClass BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C
// Size: 0x2b0 (Inherited: 0x248)
struct ABP_DevilsSnareDyn_Smother_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_BP_DevilsSnare; // 0x250(0x08)
	struct UStaticMeshComponent* VFX_SM_DevilsSnareSmotherA01; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float SmotherAnimShrink_VATAlpha_080DB6734804D4170E64C4829137317F; // 0x268(0x04)
	enum class ETimelineDirection SmotherAnimShrink__Direction_080DB6734804D4170E64C4829137317F; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* SmotherAnimShrink; // 0x270(0x08)
	float SmotherAnimFX_VATAlpha_AAAA43D348534642FC69CD9D59AD4300; // 0x278(0x04)
	enum class ETimelineDirection SmotherAnimFX__Direction_AAAA43D348534642FC69CD9D59AD4300; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* SmotherAnimFX; // 0x280(0x08)
	struct UMaterialInstanceDynamic* DMI_SmotherA01; // 0x288(0x08)
	bool DebugStartOnPlay; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float SmotherTime; // 0x294(0x04)
	float SmotherStartDelay; // 0x298(0x04)
	float SmotherScale; // 0x29c(0x04)
	struct UNiagaraComponent* FX_DebrisDust; // 0x2a0(0x08)
	struct UNiagaraComponent* VFX_DebrisDust; // 0x2a8(0x08)

	void SmotherAnimShrink__FinishedFunc(); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.SmotherAnimShrink__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void SmotherAnimShrink__UpdateFunc(); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.SmotherAnimShrink__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SmotherAnimFX__FinishedFunc(); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.SmotherAnimFX__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void SmotherAnimFX__UpdateFunc(); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.SmotherAnimFX__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void DEBUGLoopAnim(); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.DEBUGLoopAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GrowSmother(); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.GrowSmother // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShrinkSmother(); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.ShrinkSmother // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSmotherLocation(); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.SetSmotherLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StartSmotherFX(); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.StartSmotherFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DevilsSnareDyn_Smother(int32_t EntryPoint); // Function BP_DevilsSnareDyn_Smother.BP_DevilsSnareDyn_Smother_C.ExecuteUbergraph_BP_DevilsSnareDyn_Smother // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

