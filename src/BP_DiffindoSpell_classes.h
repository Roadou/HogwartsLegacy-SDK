// BlueprintGeneratedClass BP_DiffindoSpell.BP_DiffindoSpell_C
// Size: 0x854 (Inherited: 0x810)
struct ABP_DiffindoSpell_C : ADiffindoSpellTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x810(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x818(0x08)
	struct UParticleSystemComponent* P_Beam; // 0x820(0x08)
	struct UMaterialInstanceDynamic* MAT_Beam; // 0x828(0x08)
	struct FVector LOC_Target; // 0x830(0x0c)
	struct FVector LOC_Wand; // 0x83c(0x0c)
	float StartTime; // 0x848(0x04)
	float BulletTime; // 0x84c(0x04)
	float BulletCountdown; // 0x850(0x04)

	void OnStart(); // Function BP_DiffindoSpell.BP_DiffindoSpell_C.OnStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectTarget(struct AActor* Target, struct USceneComponent* Component, bool bInTargetAffected); // Function BP_DiffindoSpell.BP_DiffindoSpell_C.OnAffectTarget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCanAffectTarget(struct AActor* Target, bool bInCanAffectTarget); // Function BP_DiffindoSpell.BP_DiffindoSpell_C.OnCanAffectTarget // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnMunitionFired(struct AActor* Target, struct FVector TargetLocation, struct AMunitionType_Base* BaseMunition, struct FGameplayTagContainer& InMunitionTagContainer); // Function BP_DiffindoSpell.BP_DiffindoSpell_C.OnMunitionFired // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DiffindoSpell(int32_t EntryPoint); // Function BP_DiffindoSpell.BP_DiffindoSpell_C.ExecuteUbergraph_BP_DiffindoSpell // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

