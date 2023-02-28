// WidgetBlueprintGeneratedClass UI_BP_GearTooltipContent.UI_BP_GearTooltipContent_C
// Size: 0x2f0 (Inherited: 0x268)
struct UUI_BP_GearTooltipContent_C : UUserWidget {
	struct UImage* cooldownArrow; // 0x268(0x08)
	struct UHorizontalBox* cooldownBox; // 0x270(0x08)
	struct UPhoenixTextBlock* cooldownValue; // 0x278(0x08)
	struct UImage* defenseArrow; // 0x280(0x08)
	struct UHorizontalBox* defenseBox; // 0x288(0x08)
	struct UPhoenixTextBlock* defenseValue; // 0x290(0x08)
	struct UPhoenixTextBlock* GearDeleteMessage; // 0x298(0x08)
	struct UImage* gearDivider; // 0x2a0(0x08)
	struct UVerticalBox* GearStats; // 0x2a8(0x08)
	struct UImage* offenseArrow; // 0x2b0(0x08)
	struct UHorizontalBox* offenseBox; // 0x2b8(0x08)
	struct UPhoenixTextBlock* offenseValue; // 0x2c0(0x08)
	struct UUI_BP_TraitNote_C* trait1; // 0x2c8(0x08)
	struct UUI_BP_TraitNote_C* trait2; // 0x2d0(0x08)
	struct UUI_BP_TraitNote_C* trait3; // 0x2d8(0x08)
	struct TArray<struct FName> StatsArray; // 0x2e0(0x10)

	void CreateStatArray(struct TArray<struct FName>& TraitArray, int32_t EmptySlotCount); // Function UI_BP_GearTooltipContent.UI_BP_GearTooltipContent_C.CreateStatArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStatData(struct FString GearID, struct FName Variation, bool DisplayIfSafeToDelete); // Function UI_BP_GearTooltipContent.UI_BP_GearTooltipContent_C.SetStatData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

