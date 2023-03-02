// BlueprintGeneratedClass BP_Delivery_Package.BP_Delivery_Package_C
// Size: 0x268 (Inherited: 0x248)
struct ABP_Delivery_Package_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x250(0x08)
	struct FMulticastInlineDelegate OnPackageLanded; // 0x258(0x10)

	void ReceiveTick(float DeltaSeconds); // Function BP_Delivery_Package.BP_Delivery_Package_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Delivery_Package(int32_t EntryPoint); // Function BP_Delivery_Package.BP_Delivery_Package_C.ExecuteUbergraph_BP_Delivery_Package // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnPackageLanded__DelegateSignature(struct ABP_Delivery_Package_C* Package); // Function BP_Delivery_Package.BP_Delivery_Package_C.OnPackageLanded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

