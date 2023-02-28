// BlueprintGeneratedClass BP_DungeonInteract.BP_DungeonInteract_C
// Size: 0x29c (Inherited: 0x248)
struct ABP_DungeonInteract_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x250(0x08)
	struct UCapsuleComponent* Capsule; // 0x258(0x08)
	struct UWidgetComponent* TextName; // 0x260(0x08)
	struct UBillboardComponent* Billboard; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	struct FMulticastInlineDelegate InteractedWith; // 0x278(0x10)
	struct ABP_DungeonLOCs_C* Parent; // 0x288(0x08)
	bool ShowUI; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	struct FName DungeonName; // 0x294(0x08)

	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_DungeonInteract.BP_DungeonInteract_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DungeonInteract.BP_DungeonInteract_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DungeonInteract(int32_t EntryPoint); // Function BP_DungeonInteract.BP_DungeonInteract_C.ExecuteUbergraph_BP_DungeonInteract // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void InteractedWith__DelegateSignature(); // Function BP_DungeonInteract.BP_DungeonInteract_C.InteractedWith__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

