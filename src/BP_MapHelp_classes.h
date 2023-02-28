// BlueprintGeneratedClass BP_MapHelp.BP_MapHelp_C
// Size: 0x450 (Inherited: 0x430)
struct ABP_MapHelp_C : AInventoryItemTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x438(0x08)
	struct TArray<struct FVector> Path; // 0x440(0x10)

	void UseItem(); // Function BP_MapHelp.BP_MapHelp_C.UseItem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BeginItemUsage(); // Function BP_MapHelp.BP_MapHelp_C.BeginItemUsage // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ItemEvent(struct FName EventName); // Function BP_MapHelp.BP_MapHelp_C.ItemEvent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MapHelp(int32_t EntryPoint); // Function BP_MapHelp.BP_MapHelp_C.ExecuteUbergraph_BP_MapHelp // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

