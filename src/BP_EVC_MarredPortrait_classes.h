// BlueprintGeneratedClass BP_EVC_MarredPortrait.BP_EVC_MarredPortrait_C
// Size: 0x3c8 (Inherited: 0x371)
struct ABP_EVC_MarredPortrait_C : ANone {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x380(0x08)
	struct UStaticMeshComponent* Portrait; // 0x388(0x08)
	struct UStaticMeshComponent* Frame; // 0x390(0x08)
	struct FText ObjectName; // 0x398(0x18)
	struct FString Talk to BirdBath; // 0x3b0(0x10)
	struct AActor* LookAtTarget; // 0x3c0(0x08)

	void ReceiveBeginPlay(); // Function BP_EVC_MarredPortrait.BP_EVC_MarredPortrait_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_EVC_MarredPortrait(int32_t EntryPoint); // Function BP_EVC_MarredPortrait.BP_EVC_MarredPortrait_C.ExecuteUbergraph_BP_EVC_MarredPortrait // (Final|UbergraphFunction) // @ game+0x38a7480
};

