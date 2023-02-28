// BlueprintGeneratedClass UI_BP_HogwartsMapClass.UI_BP_HogwartsMapClass_C
// Size: 0xc88 (Inherited: 0xc70)
struct UUI_BP_HogwartsMapClass_C : UMapHogwarts {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc70(0x08)
	struct FMulticastInlineDelegate MapItemSelected; // 0xc78(0x10)

	void ShowFastTavelMap(struct TMap<struct FString, struct FVector> Locations); // Function UI_BP_HogwartsMapClass.UI_BP_HogwartsMapClass_C.ShowFastTavelMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TestEvent(); // Function UI_BP_HogwartsMapClass.UI_BP_HogwartsMapClass_C.TestEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnMapItemSelected_Event(struct FString ItemString, int32_t ItemIndex, bool WasCanceled); // Function UI_BP_HogwartsMapClass.UI_BP_HogwartsMapClass_C.OnMapItemSelected_Event // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_HogwartsMapClass(int32_t EntryPoint); // Function UI_BP_HogwartsMapClass.UI_BP_HogwartsMapClass_C.ExecuteUbergraph_UI_BP_HogwartsMapClass // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void MapItemSelected__DelegateSignature(struct FString Item String, int32_t Item Index, bool Was Cancelled); // Function UI_BP_HogwartsMapClass.UI_BP_HogwartsMapClass_C.MapItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

