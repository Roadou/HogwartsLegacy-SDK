// BlueprintGeneratedClass BP_Hamlets_RichPaperGeneral.BP_Hamlets_RichPaperGeneral_C
// Size: 0x37a (Inherited: 0x350)
struct ABP_Hamlets_RichPaperGeneral_C : ABP_InventoryObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UChildActorComponent* BP_HM_HW_MappedItems_Marker; // 0x358(0x08)
	struct FText ObjectName; // 0x360(0x18)
	enum class ECalloutType Callout Type; // 0x378(0x01)
	enum class ECalloutActions Callout Action; // 0x379(0x01)

	void ReceiveBeginPlay(); // Function BP_Hamlets_RichPaperGeneral.BP_Hamlets_RichPaperGeneral_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Hamlets_RichPaperGeneral(int32_t EntryPoint); // Function BP_Hamlets_RichPaperGeneral.BP_Hamlets_RichPaperGeneral_C.ExecuteUbergraph_BP_Hamlets_RichPaperGeneral // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

