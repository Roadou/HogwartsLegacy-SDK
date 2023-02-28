// WidgetBlueprintGeneratedClass UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C
// Size: 0x2c8 (Inherited: 0x268)
struct UUI_BP_CollectionsSubgroup_C : UUserWidget {
	struct UHorizontalBox* headerBox; // 0x268(0x08)
	struct UPhoenixTextBlock* ItemCategoryLabel; // 0x270(0x08)
	struct UUniformGridPanel* ItemGrid; // 0x278(0x08)
	int32_t Stride; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct TArray<struct UUI_BP_CollectionItemButton_C*> Buttons; // 0x288(0x10)
	struct FMulticastInlineDelegate ButtonHovered; // 0x298(0x10)
	struct FMulticastInlineDelegate ButtonUnhovered; // 0x2a8(0x10)
	struct FMulticastInlineDelegate ButtonClicked; // 0x2b8(0x10)

	void SortCategory(struct TArray<struct FCollectionItem>& CategoryItems, struct TArray<struct FCollectionItem>& SortedCategoryItems); // Function UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C.SortCategory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnButtonClicked(struct UUI_BP_CollectionItemButton_C* Button); // Function UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C.OnButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnButtonUnhovered(struct UUI_BP_CollectionItemButton_C* Button); // Function UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C.OnButtonUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnButtonHovered(struct UUI_BP_CollectionItemButton_C* Button); // Function UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C.OnButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetItem(int32_t Index, struct UUI_BP_CollectionItemButton_C*& Button); // Function UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C.GetItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void InitSubcategory(struct FCollectionSubcategory CategoryData, struct FName OwningCategory, int32_t Stride); // Function UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C.InitSubcategory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddButtonToGrid(struct UUI_BP_CollectionItemButton_C* ItemButton, int32_t Stride); // Function UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C.AddButtonToGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ButtonClicked__DelegateSignature(struct UUI_BP_CollectionItemButton_C* Button); // Function UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C.ButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ButtonUnhovered__DelegateSignature(struct UUI_BP_CollectionItemButton_C* Button); // Function UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C.ButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ButtonHovered__DelegateSignature(struct UUI_BP_CollectionItemButton_C* Button); // Function UI_BP_CollectionsSubgroup.UI_BP_CollectionsSubgroup_C.ButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

