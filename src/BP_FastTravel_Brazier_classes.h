// BlueprintGeneratedClass BP_FastTravel_Brazier.BP_FastTravel_Brazier_C
// Size: 0x270 (Inherited: 0x248)
struct ABP_FastTravel_Brazier_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* BP_FastTravel_PillarPlaque; // 0x250(0x08)
	struct UStaticMeshComponent* SM_Ignatia_Brazier_Mount; // 0x258(0x08)
	struct UNiagaraComponent* VFX_NS_Floo_Bowl_Flames; // 0x260(0x08)
	struct USceneComponent* SharedRoot; // 0x268(0x08)

	void UserConstructionScript(); // Function BP_FastTravel_Brazier.BP_FastTravel_Brazier_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FastTravel_Brazier.BP_FastTravel_Brazier_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FastTravel_Brazier(int32_t EntryPoint); // Function BP_FastTravel_Brazier.BP_FastTravel_Brazier_C.ExecuteUbergraph_BP_FastTravel_Brazier // (Final|UbergraphFunction) // @ game+0x38a7480
};

