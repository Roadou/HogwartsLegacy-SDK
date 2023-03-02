// BlueprintGeneratedClass BP_HangingPlatform.BP_HangingPlatform_C
// Size: 0x36c (Inherited: 0x248)
struct ABP_HangingPlatform_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UStaticMeshComponent* SM_BCProps_Ropecoil_B_StaticMeshComponent0; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_HangingProps_Bags_006_F_StaticMeshComponent0; // 0x260(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_Lantern_002_StaticMeshComponent0; // 0x268(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_Shovel_001_W_StaticMeshComponent0; // 0x270(0x08)
	struct UStaticMeshComponent* SM_Intro_Pickaxe_01_StaticMeshComponent0; // 0x278(0x08)
	struct UStaticMeshComponent* SM_Cairn_Dude_C_Broken03_A_StaticMeshComponent0; // 0x280(0x08)
	struct UStaticMeshComponent* SM_Cairn_DudeC_StaticMeshComponent0; // 0x288(0x08)
	struct UStaticMeshComponent* SM_Cairn_DudeF6_StaticMeshComponent0; // 0x290(0x08)
	struct UStaticMeshComponent* SM_Carin_Vessel01_Broken_Combine_B_StaticMeshComponent0; // 0x298(0x08)
	struct UStaticMeshComponent* SM_Int_BCProps_Barrel_001_W3_StaticMeshComponent0; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_Cairn_Dude_C_Broken04_A_StaticMeshComponent0; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_Cairn_CoffinLidPiece6_StaticMeshComponent0; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_Cairn_Dude_C_Broken01_A2_StaticMeshComponent0; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_HangingPlatform_A; // 0x2c0(0x08)
	struct FMulticastInlineDelegate HitBySpell; // 0x2c8(0x10)
	struct ABP_HangingObject_C* ParentActor; // 0x2d8(0x08)
	bool Released; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	struct FHitResult Hit Result; // 0x2e4(0x88)

	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HangingPlatform.BP_HangingPlatform_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_HangingPlatform.BP_HangingPlatform_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_HangingPlatform.BP_HangingPlatform_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_HangingPlatform.BP_HangingPlatform_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_HangingPlatform.BP_HangingPlatform_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_HangingPlatform.BP_HangingPlatform_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HangingPlatform.BP_HangingPlatform_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void EnableFallBreak(); // Function BP_HangingPlatform.BP_HangingPlatform_C.EnableFallBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__BP_HangingPlatform_SM_HangingPlatform_A_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_HangingPlatform.BP_HangingPlatform_C.BndEvt__BP_HangingPlatform_SM_HangingPlatform_A_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HangingPlatform(int32_t EntryPoint); // Function BP_HangingPlatform.BP_HangingPlatform_C.ExecuteUbergraph_BP_HangingPlatform // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void HitBySpell__DelegateSignature(); // Function BP_HangingPlatform.BP_HangingPlatform_C.HitBySpell__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

