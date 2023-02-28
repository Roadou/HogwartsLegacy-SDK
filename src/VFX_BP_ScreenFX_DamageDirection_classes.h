// BlueprintGeneratedClass VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C
// Size: 0x27c (Inherited: 0x248)
struct AVFX_BP_ScreenFX_DamageDirection_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPostProcessComponent* DamageDirection; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float Damage_Dircetion_Spike_D93EC798415488C4E7D36D97047EF801; // 0x260(0x04)
	float Damage_Dircetion_cloud_D93EC798415488C4E7D36D97047EF801; // 0x264(0x04)
	float Damage_Dircetion_Direct_D93EC798415488C4E7D36D97047EF801; // 0x268(0x04)
	enum class ETimelineDirection Damage_Dircetion__Direction_D93EC798415488C4E7D36D97047EF801; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Damage Dircetion; // 0x270(0x08)
	float Parameter Value; // 0x278(0x04)

	void Damage Dircetion__FinishedFunc(); // Function VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C.Damage Dircetion__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Damage Dircetion__UpdateFunc(); // Function VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C.Damage Dircetion__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void DamageEffect(struct UObject* Caller, int32_t Int1, int32_t Int2); // Function VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C.DamageEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_ScreenFX_DamageDirection(int32_t EntryPoint); // Function VFX_BP_ScreenFX_DamageDirection.VFX_BP_ScreenFX_DamageDirection_C.ExecuteUbergraph_VFX_BP_ScreenFX_DamageDirection // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

