// BlueprintGeneratedClass BP_AOE_DragonSpin.BP_AOE_DragonSpin_C
// Size: 0x690 (Inherited: 0x658)
struct ABP_AOE_DragonSpin_C : AMunitionType_AOE_MultiFX {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x660(0x08)
	struct FGameplayTagContainer MunitionTagContainer; // 0x668(0x20)
	struct UInteractionArchitectAsset* MunitionDataAsset; // 0x688(0x08)

	void ReceiveBeginPlay(); // Function BP_AOE_DragonSpin.BP_AOE_DragonSpin_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AOE_DragonSpin(int32_t EntryPoint); // Function BP_AOE_DragonSpin.BP_AOE_DragonSpin_C.ExecuteUbergraph_BP_AOE_DragonSpin // (Final|UbergraphFunction) // @ game+0x38a7480
};

