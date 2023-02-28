// BlueprintGeneratedClass UI_MapHogsmeade.UI_MapHogsmeade_C
// Size: 0x260 (Inherited: 0x250)
struct AUI_MapHogsmeade_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct ATriggerSphere* MouseCursor3DLocation_ExecuteUbergraph_UI_MapHogsmeade_RefProperty; // 0x258(0x08)

	void ReceiveBeginPlay(); // Function UI_MapHogsmeade.UI_MapHogsmeade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void MapCursorLocation(struct UObject* Caller, struct FVector& Vector); // Function UI_MapHogsmeade.UI_MapHogsmeade_C.MapCursorLocation // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_MapHogsmeade(int32_t EntryPoint); // Function UI_MapHogsmeade.UI_MapHogsmeade_C.ExecuteUbergraph_UI_MapHogsmeade // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

