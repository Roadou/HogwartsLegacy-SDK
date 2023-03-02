// BlueprintGeneratedClass BP_HM_AxeStump_Interact.BP_HM_AxeStump_Interact_C
// Size: 0x39c (Inherited: 0x2d8)
struct ABP_HM_AxeStump_Interact_C : ASimpleInteractObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2e0(0x08)
	struct UCapsuleComponent* Capsule; // 0x2e8(0x08)
	struct UBillboardComponent* SpawnPoint_Right; // 0x2f0(0x08)
	struct UBillboardComponent* SpawnPoint_Left; // 0x2f8(0x08)
	struct USceneComponent* TransformRight; // 0x300(0x08)
	struct USceneComponent* TransformLeft; // 0x308(0x08)
	struct UStaticMeshComponent* SM_BCProps_Wood_Chopped_Single_K3; // 0x310(0x08)
	struct USceneComponent* ForTag; // 0x318(0x08)
	struct USceneComponent* Scene; // 0x320(0x08)
	struct UStaticMeshComponent* SM_BCProps_Wood_Chopped_Single_U; // 0x328(0x08)
	struct UStaticMeshComponent* SM_BCProps_Wood_Chopped_Single_K2; // 0x330(0x08)
	struct UStaticMeshComponent* SM_BCProps_Wood_Chopped_Single_H; // 0x338(0x08)
	struct UStaticMeshComponent* SM_BCProps_Wood_Chopped_Single_K1; // 0x340(0x08)
	struct UStaticMeshComponent* SM_BCProps_Wood_Chopped_Single_K; // 0x348(0x08)
	struct TArray<struct ABP_ChoppedWood_A_Interact_C*> WoodChunksSpawned; // 0x350(0x10)
	struct FTransform SpawnLocation; // 0x360(0x30)
	struct FVector Direction; // 0x390(0x0c)

	void DestroyWoodChunk(); // Function BP_HM_AxeStump_Interact.BP_HM_AxeStump_Interact_C.DestroyWoodChunk // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnWoodChunk(); // Function BP_HM_AxeStump_Interact.BP_HM_AxeStump_Interact_C.SpawnWoodChunk // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(); // Function BP_HM_AxeStump_Interact.BP_HM_AxeStump_Interact_C.InteractionInitiated // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HM_AxeStump_Interact.BP_HM_AxeStump_Interact_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HM_AxeStump_Interact(int32_t EntryPoint); // Function BP_HM_AxeStump_Interact.BP_HM_AxeStump_Interact_C.ExecuteUbergraph_BP_HM_AxeStump_Interact // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

