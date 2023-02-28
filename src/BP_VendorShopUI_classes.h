// BlueprintGeneratedClass BP_VendorShopUI.BP_VendorShopUI_C
// Size: 0xc0 (Inherited: 0xa8)
struct UBP_VendorShopUI_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct APawn* InteractionTarget; // 0xb0(0x08)
	struct UUI_BP_Vendor_C* VendorWidget; // 0xb8(0x08)

	void GetInteractActor(); // Function BP_VendorShopUI.BP_VendorShopUI_C.GetInteractActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCreate(struct UObject* ActionState); // Function BP_VendorShopUI.BP_VendorShopUI_C.OnCreate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnButtonClicked(struct UUI_BP_InteractButton_C* TextButton); // Function BP_VendorShopUI.BP_VendorShopUI_C.OnButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnMenuCancelled(); // Function BP_VendorShopUI.BP_VendorShopUI_C.OnMenuCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_VendorShopUI.BP_VendorShopUI_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ShowVendorUI(); // Function BP_VendorShopUI.BP_VendorShopUI_C.ShowVendorUI // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_VendorShopUI.BP_VendorShopUI_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCloseUI(); // Function BP_VendorShopUI.BP_VendorShopUI_C.OnCloseUI // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_VendorShopUI(int32_t EntryPoint); // Function BP_VendorShopUI.BP_VendorShopUI_C.ExecuteUbergraph_BP_VendorShopUI // (Final|UbergraphFunction) // @ game+0x38a7480
};

