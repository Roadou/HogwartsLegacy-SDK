// BlueprintGeneratedClass BP_WE_Mirage_Actor_Snowman.BP_WE_Mirage_Actor_Snowman_C
// Size: 0x358 (Inherited: 0x338)
struct ABP_WE_Mirage_Actor_Snowman_C : ABP_WE_Mirage_Actor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UTexture* HouseTexture; // 0x340(0x08)
	struct TArray<struct UTexture*> HouseTextures; // 0x348(0x10)

	void ReceiveBeginPlay(); // Function BP_WE_Mirage_Actor_Snowman.BP_WE_Mirage_Actor_Snowman_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHitBySpell(struct ASpellTool* SpellTool, struct AActor* Instigator, struct USpellToolRecord* SpellToolRecord, struct FName SpellType, struct FHitResult& Hit, struct FVector& ImpactDirection); // Function BP_WE_Mirage_Actor_Snowman.BP_WE_Mirage_Actor_Snowman_C.OnHitBySpell // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Mirage_Actor_Snowman(int32_t EntryPoint); // Function BP_WE_Mirage_Actor_Snowman.BP_WE_Mirage_Actor_Snowman_C.ExecuteUbergraph_BP_WE_Mirage_Actor_Snowman // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

