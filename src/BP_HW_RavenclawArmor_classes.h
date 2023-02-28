// BlueprintGeneratedClass BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C
// Size: 0x2c2 (Inherited: 0x248)
struct ABP_HW_RavenclawArmor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)
	struct UCapsuleComponent* Capsule; // 0x258(0x08)
	struct USkeletalMeshComponent* SK_HW_Armor_Kit; // 0x260(0x08)
	bool AllowSnapToAttention; // 0x268(0x01)
	enum class E_RavenclawArmorPose ArmorPose; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct TMap<enum class E_RavenclawArmorPose, struct FSTR_RavenclawArmorAnimation> ArmorPoseMap; // 0x270(0x50)
	bool Asleep; // 0x2c0(0x01)
	bool BlockPath; // 0x2c1(0x01)

	void UserConstructionScript(); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnOverlappedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FVector& MunitionLocation); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.OnOverlappedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpellEnd(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.OnAffectedBySpellEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAffectedBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct TArray<struct UInteractionArchitectAsset*>& DataAssets, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FGameplayTagContainer Impact, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.OnAffectedBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void PlayIdle(); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.PlayIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SnapToAttention(); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.SnapToAttention // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnSpellTooWeak(struct AActor* Instigator); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.OnSpellTooWeak // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellIneffective(struct AActor* Instigator); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.OnSpellIneffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSpellEffective(struct AActor* Instigator); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.OnSpellEffective // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_RavenclawArmor(int32_t EntryPoint); // Function BP_HW_RavenclawArmor.BP_HW_RavenclawArmor_C.ExecuteUbergraph_BP_HW_RavenclawArmor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

