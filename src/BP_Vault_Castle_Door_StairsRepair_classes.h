// BlueprintGeneratedClass BP_Vault_Castle_Door_StairsRepair.BP_Vault_Castle_Door_StairsRepair_C
// Size: 0x400 (Inherited: 0x248)
struct ABP_Vault_Castle_Door_StairsRepair_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Before_Box13; // 0x250(0x08)
	struct UBoxComponent* Before_Box12; // 0x258(0x08)
	struct UBoxComponent* Before_Box11; // 0x260(0x08)
	struct UBoxComponent* Before_Box10; // 0x268(0x08)
	struct USphereComponent* Before_Sphere1; // 0x270(0x08)
	struct UBoxComponent* Before_Box9; // 0x278(0x08)
	struct UBoxComponent* Before_Box8; // 0x280(0x08)
	struct UBoxComponent* Before_Box7; // 0x288(0x08)
	struct UBoxComponent* Before_Box0; // 0x290(0x08)
	struct UBoxComponent* Before_Box5; // 0x298(0x08)
	struct USphereComponent* Before_Sphere; // 0x2a0(0x08)
	struct UBoxComponent* Before_Box4; // 0x2a8(0x08)
	struct UBoxComponent* Before_Box3; // 0x2b0(0x08)
	struct UBoxComponent* Before_Box2; // 0x2b8(0x08)
	struct UBoxComponent* Before_Box1; // 0x2c0(0x08)
	struct UBoxComponent* Before_Box6; // 0x2c8(0x08)
	struct UChildActorComponent* ChildActor; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Debris_BricksA_Lo; // 0x2d8(0x08)
	struct UDecalComponent* Decal4; // 0x2e0(0x08)
	struct UDecalComponent* Decal3; // 0x2e8(0x08)
	struct UDecalComponent* Decal2; // 0x2f0(0x08)
	struct UDecalComponent* Decal1; // 0x2f8(0x08)
	struct UDecalComponent* Decal; // 0x300(0x08)
	struct UChildActorComponent* BP_VaultRuinDoor_Marker_Solo; // 0x308(0x08)
	struct UChildActorComponent* ArchLOC; // 0x310(0x08)
	struct USkeletalMeshComponent* VFX_SK_Vault_Castle_Door_01; // 0x318(0x08)
	struct USceneComponent* Ruins; // 0x320(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_F_a7_StaticMeshComponent1; // 0x328(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Jail_ArchMedBase_B3_StaticMeshComponent0; // 0x330(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Column_B_Debris_5Meter_B1; // 0x338(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C2_StaticMeshComponent0; // 0x340(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_F_a3_StaticMeshComponent0; // 0x348(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_B_b1_StaticMeshComponent0; // 0x350(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_F_a9_StaticMeshComponent0; // 0x358(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_F_a8_StaticMeshComponent0; // 0x360(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_End_Cap_A_a3_StaticMeshComponent0; // 0x368(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C9_StaticMeshComponent0; // 0x370(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_F_a10_StaticMeshComponent0; // 0x378(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C11_StaticMeshComponent0; // 0x380(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C8_StaticMeshComponent0; // 0x388(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C3_StaticMeshComponent0; // 0x390(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C4_StaticMeshComponent0; // 0x398(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_F_a4_StaticMeshComponent0; // 0x3a0(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_F_a6_StaticMeshComponent0; // 0x3a8(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C7_StaticMeshComponent0; // 0x3b0(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_B_b3_StaticMeshComponent0; // 0x3b8(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_F_a7_StaticMeshComponent0; // 0x3c0(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C6_StaticMeshComponent0; // 0x3c8(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C5_StaticMeshComponent0; // 0x3d0(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Top_Trim_Cap_C10_StaticMeshComponent0; // 0x3d8(0x08)
	struct UStaticMeshComponent* SM_CastleRuins_1_Broken_F_a11_StaticMeshComponent0; // 0x3e0(0x08)
	struct UStaticMeshComponent* SM_CastleDun_Column_B_Debris_5Meter_B; // 0x3e8(0x08)
	struct UObjectStateComponent* ObjectState; // 0x3f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f8(0x08)

	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Vault_Castle_Door_StairsRepair.BP_Vault_Castle_Door_StairsRepair_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_Vault_Castle_Door_StairsRepair.BP_Vault_Castle_Door_StairsRepair_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_Vault_Castle_Door_StairsRepair.BP_Vault_Castle_Door_StairsRepair_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_Vault_Castle_Door_StairsRepair.BP_Vault_Castle_Door_StairsRepair_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_Vault_Castle_Door_StairsRepair.BP_Vault_Castle_Door_StairsRepair_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_Vault_Castle_Door_StairsRepair.BP_Vault_Castle_Door_StairsRepair_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Vault_Castle_Door_StairsRepair.BP_Vault_Castle_Door_StairsRepair_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_Vault_Castle_Door_StairsRepair.BP_Vault_Castle_Door_StairsRepair_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Vault_Castle_Door_StairsRepair(int32_t EntryPoint); // Function BP_Vault_Castle_Door_StairsRepair.BP_Vault_Castle_Door_StairsRepair_C.ExecuteUbergraph_BP_Vault_Castle_Door_StairsRepair // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

