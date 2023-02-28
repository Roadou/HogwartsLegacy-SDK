// BlueprintGeneratedClass BP_DH_Item.BP_DH_Item_C
// Size: 0x2a8 (Inherited: 0x248)
struct ABP_DH_Item_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct FName ItemType; // 0x268(0x08)
	struct FVector StartingLocation; // 0x270(0x0c)
	float HoverDegrees; // 0x27c(0x04)
	float HoverSpeedDegrees; // 0x280(0x04)
	float HoverDistance; // 0x284(0x04)
	struct FString NotificationTitle; // 0x288(0x10)
	struct FString NotificationIcon; // 0x298(0x10)

	void FOFF(); // Function BP_DH_Item.BP_DH_Item_C.FOFF // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowItem(); // Function BP_DH_Item.BP_DH_Item_C.ShowItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideItem(); // Function BP_DH_Item.BP_DH_Item_C.HideItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteractionInitiated(struct UObject* Caller); // Function BP_DH_Item.BP_DH_Item_C.InteractionInitiated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_DH_Item.BP_DH_Item_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DH_Item.BP_DH_Item_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_DH_Item.BP_DH_Item_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DH_Item(int32_t EntryPoint); // Function BP_DH_Item.BP_DH_Item_C.ExecuteUbergraph_BP_DH_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

