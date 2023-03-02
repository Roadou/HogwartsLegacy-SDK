// BlueprintGeneratedClass SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C
// Size: 0x2d8 (Inherited: 0x250)
struct ASUB_Study_Hub_Structure_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TSoftObjectPtr<USceneRig> EXP1_Unlock_SR_SoftRef; // 0x258(0x28)
	struct FHermesBPDelegateHandle TerrariumHermesHandle; // 0x280(0x10)
	struct FHermesBPDelegateHandle TransformAllHermesHandle; // 0x290(0x10)
	struct FHermesBPDelegateHandle IslandEntered_Handle; // 0x2a0(0x10)
	struct FHermesBPDelegateHandle IslandLeft_Handle; // 0x2b0(0x10)
	bool DoorsOpen; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct ATransfigurationPlaceholder* Sanc_Alcove_01_673_ExecuteUbergraph_SUB_Study_Hub_Structure_RefProperty; // 0x2c8(0x08)
	struct AStreamingPlaceholderUnlocked* Forest_Terrarium_ExecuteUbergraph_SUB_Study_Hub_Structure_RefProperty; // 0x2d0(0x08)

	void OnLoaded_21F65FE84DE4FEC09321C0920C40669D(struct UObject* Loaded); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.OnLoaded_21F65FE84DE4FEC09321C0920C40669D // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CloseDoor(); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.CloseDoor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EXP1Ready(); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.EXP1Ready // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EXP2Ready(); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.EXP2Ready // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EXP3Ready(); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.EXP3Ready // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadExpansions(); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.LoadExpansions // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TerrariumUnlockDone(struct UObject* Caller, struct FName& String); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.TerrariumUnlockDone // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TransformAllRequested(struct UObject* Caller); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.TransformAllRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Sanc_IslandEntered(struct UObject* Caller, struct FName& String); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.Sanc_IslandEntered // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Sanc_IslandLeft(struct UObject* Caller, struct FName& String); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.Sanc_IslandLeft // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RoomA_AllUnlockedZonesVisible(); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.RoomA_AllUnlockedZonesVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IslandChangeEventBinding(); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.IslandChangeEventBinding // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void EXP_3_Lighting_Ready(); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.EXP_3_Lighting_Ready // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_Study_Hub_Structure(int32_t EntryPoint); // Function SUB_Study_Hub_Structure.SUB_Study_Hub_Structure_C.ExecuteUbergraph_SUB_Study_Hub_Structure // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

