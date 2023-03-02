// BlueprintGeneratedClass BP_WE_PotionBottle_01.BP_WE_PotionBottle_01_C
// Size: 0x288 (Inherited: 0x248)
struct ABP_WE_PotionBottle_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x250(0x08)
	struct FVector floating_bottle_floating_bottle_85E7E612406E285BD75BFFB97708F361; // 0x258(0x0c)
	enum class ETimelineDirection floating_bottle__Direction_85E7E612406E285BD75BFFB97708F361; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* floating_bottle; // 0x268(0x08)
	struct FVector StartPosition; // 0x270(0x0c)
	struct FVector StartRotation; // 0x27c(0x0c)

	void floating_bottle__FinishedFunc(); // Function BP_WE_PotionBottle_01.BP_WE_PotionBottle_01_C.floating_bottle__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void floating_bottle__UpdateFunc(); // Function BP_WE_PotionBottle_01.BP_WE_PotionBottle_01_C.floating_bottle__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_PotionBottle_01.BP_WE_PotionBottle_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_PotionBottle_01(int32_t EntryPoint); // Function BP_WE_PotionBottle_01.BP_WE_PotionBottle_01_C.ExecuteUbergraph_BP_WE_PotionBottle_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

