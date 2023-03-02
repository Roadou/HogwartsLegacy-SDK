// AblAbilityBlueprintGeneratedClass ABL_RCT_TMB_DisarmThrowBack.ABL_RCT_TMB_DisarmThrowBack_C
// Size: 0xf0 (Inherited: 0xe0)
struct UABL_RCT_TMB_DisarmThrowBack_C : UAblReactionAbility {
	struct AEnemyAIWeapon* Weapon; // 0xe0(0x08)
	struct UNiagaraComponent* NS_Sword; // 0xe8(0x08)

	void OnAbilityStart(struct UAblAbilityContext* Context); // Function ABL_RCT_TMB_DisarmThrowBack.ABL_RCT_TMB_DisarmThrowBack_C.OnAbilityStart // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnCustomEvent(struct UAblAbilityContext* Context, struct FName& EventName); // Function ABL_RCT_TMB_DisarmThrowBack.ABL_RCT_TMB_DisarmThrowBack_C.OnCustomEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
};

