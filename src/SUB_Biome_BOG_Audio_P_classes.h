// BlueprintGeneratedClass SUB_Biome_BOG_Audio_P.SUB_Biome_BOG_Audio_P_C
// Size: 0x290 (Inherited: 0x250)
struct ASUB_Biome_BOG_Audio_P_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	int32_t audioVolumesOverlapped; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences; // 0x260(0x10)
	struct FHermesBPDelegateHandle IslandEntered_Handle; // 0x270(0x10)
	struct FHermesBPDelegateHandle IslandLeft_Handle; // 0x280(0x10)

	void ReceiveBeginPlay(); // Function SUB_Biome_BOG_Audio_P.SUB_Biome_BOG_Audio_P_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Sanc_IslandEntered(struct UObject* Caller, struct FName& String); // Function SUB_Biome_BOG_Audio_P.SUB_Biome_BOG_Audio_P_C.Sanc_IslandEntered // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Sanc_IslandLeft(struct UObject* Caller, struct FName& String); // Function SUB_Biome_BOG_Audio_P.SUB_Biome_BOG_Audio_P_C.Sanc_IslandLeft // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartAmbience(); // Function SUB_Biome_BOG_Audio_P.SUB_Biome_BOG_Audio_P_C.StartAmbience // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopAmbience(); // Function SUB_Biome_BOG_Audio_P.SUB_Biome_BOG_Audio_P_C.StopAmbience // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_Biome_BOG_Audio_P.SUB_Biome_BOG_Audio_P_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function SUB_Biome_BOG_Audio_P.SUB_Biome_BOG_Audio_P_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_Biome_BOG_Audio_P(int32_t EntryPoint); // Function SUB_Biome_BOG_Audio_P.SUB_Biome_BOG_Audio_P_C.ExecuteUbergraph_SUB_Biome_BOG_Audio_P // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

