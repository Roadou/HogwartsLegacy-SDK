// BlueprintGeneratedClass BP_SceneAction_SanctuaryChangeLighting.BP_SceneAction_SanctuaryChangeLighting_C
// Size: 0x100 (Inherited: 0xa8)
struct UBP_SceneAction_SanctuaryChangeLighting_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct TMap<int32_t, enum class ESanctuaryIdentity> IntToLightingIdentityMap; // 0xb0(0x50)

	bool IsInstant(); // Function BP_SceneAction_SanctuaryChangeLighting.BP_SceneAction_SanctuaryChangeLighting_C.IsInstant // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnInstant(float Time, bool IsScrubbing); // Function BP_SceneAction_SanctuaryChangeLighting.BP_SceneAction_SanctuaryChangeLighting_C.OnInstant // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_SanctuaryChangeLighting(int32_t EntryPoint); // Function BP_SceneAction_SanctuaryChangeLighting.BP_SceneAction_SanctuaryChangeLighting_C.ExecuteUbergraph_BP_SceneAction_SanctuaryChangeLighting // (Final|UbergraphFunction) // @ game+0x38a7480
};

