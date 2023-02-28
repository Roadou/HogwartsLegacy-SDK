// WidgetBlueprintGeneratedClass UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C
// Size: 0x298 (Inherited: 0x268)
struct UUI_BP_ObjectStateDiagnostics_C : UUserWidget {
	struct UProgressBar* Charred_Bar; // 0x268(0x08)
	struct UCheckBox* Frozen_CheckBox; // 0x270(0x08)
	struct UProgressBar* Health_Bar; // 0x278(0x08)
	struct UCheckBox* OnFire_CheckBox; // 0x280(0x08)
	struct UProgressBar* Wetness_Bar; // 0x288(0x08)
	struct UObjectStateInfo* ObjectStateInfo; // 0x290(0x08)

	enum class ECheckBoxState GetOnFireCheckedState(); // Function UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C.GetOnFireCheckedState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	enum class ECheckBoxState GetFrozenCheckedState(); // Function UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C.GetFrozenCheckedState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	float GetCharredPercent(); // Function UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C.GetCharredPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	float GetHealthPercent(); // Function UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C.GetHealthPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	float GetWetnessPercent(); // Function UI_BP_ObjectStateDiagnostics.UI_BP_ObjectStateDiagnostics_C.GetWetnessPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
};

