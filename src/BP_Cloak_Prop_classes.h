// BlueprintGeneratedClass BP_Cloak_Prop.BP_Cloak_Prop_C
// Size: 0x26c (Inherited: 0x248)
struct ABP_Cloak_Prop_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct FObjectFadeParamsSpeedDuration Setup; // 0x260(0x0c)

	void ReceiveBeginPlay(); // Function BP_Cloak_Prop.BP_Cloak_Prop_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Cloak_Prop(int32_t EntryPoint); // Function BP_Cloak_Prop.BP_Cloak_Prop_C.ExecuteUbergraph_BP_Cloak_Prop // (Final|UbergraphFunction) // @ game+0x38a7480
};

