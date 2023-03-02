// BlueprintGeneratedClass CO_BB_Fig07_Int_Audio.CO_BB_Fig07_Int_Audio_C
// Size: 0x268 (Inherited: 0x250)
struct ACO_BB_Fig07_Int_Audio_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TArray<struct AAkAmbientSound*> 3D Sounds; // 0x258(0x10)

	void ReceiveBeginPlay(); // Function CO_BB_Fig07_Int_Audio.CO_BB_Fig07_Int_Audio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function CO_BB_Fig07_Int_Audio.CO_BB_Fig07_Int_Audio_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_CO_BB_Fig07_Int_Audio(int32_t EntryPoint); // Function CO_BB_Fig07_Int_Audio.CO_BB_Fig07_Int_Audio_C.ExecuteUbergraph_CO_BB_Fig07_Int_Audio // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

