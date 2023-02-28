// BlueprintGeneratedClass BP_RevelioSpell.BP_RevelioSpell_C
// Size: 0x9d8 (Inherited: 0x9a8)
struct ABP_RevelioSpell_C : ARevelioSpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x9b0(0x08)
	float Timeline_0_FXMaterials_29DD10F54BA9547458C67886AC9AF275; // 0x9b8(0x04)
	float Timeline_0_Strength_29DD10F54BA9547458C67886AC9AF275; // 0x9bc(0x04)
	enum class ETimelineDirection Timeline_0__Direction_29DD10F54BA9547458C67886AC9AF275; // 0x9c0(0x01)
	char pad_9C1[0x7]; // 0x9c1(0x07)
	struct UTimelineComponent* Timeline_1; // 0x9c8(0x08)
	struct AActor* Target; // 0x9d0(0x08)

	void PostAtEventAtLocationNoOcclusion(struct FVector Location, struct UAkAudioEvent* Ak Event, struct UAkComponent*& Ak Component); // Function BP_RevelioSpell.BP_RevelioSpell_C.PostAtEventAtLocationNoOcclusion // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_RevelioSpell.BP_RevelioSpell_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_RevelioSpell.BP_RevelioSpell_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__audio_off__EventFunc(); // Function BP_RevelioSpell.BP_RevelioSpell_C.Timeline_0__audio_off__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_RevelioSpell.BP_RevelioSpell_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnCastSpell(struct AActor* Target, struct FVector& Location, struct FVector& MuzzleLocation); // Function BP_RevelioSpell.BP_RevelioSpell_C.OnCastSpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnStart(); // Function BP_RevelioSpell.BP_RevelioSpell_C.OnStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectTarget(struct AActor* Target, struct USceneComponent* Component, bool bInTargetAffected); // Function BP_RevelioSpell.BP_RevelioSpell_C.OnAffectTarget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_RevelioSpell(int32_t EntryPoint); // Function BP_RevelioSpell.BP_RevelioSpell_C.ExecuteUbergraph_BP_RevelioSpell // (Final|UbergraphFunction) // @ game+0x38a7480
};

