// BlueprintGeneratedClass SUB_Study_Audio_P.SUB_Study_Audio_P_C
// Size: 0x380 (Inherited: 0x250)
struct ASUB_Study_Audio_P_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	int32_t audioVolumesOverlapped; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct FHermesBPDelegateHandle IslandEntered_Handle; // 0x260(0x10)
	struct FHermesBPDelegateHandle IslandLeft_Handle; // 0x270(0x10)
	struct FHermesBPDelegateHandle ExpansionLockChangedHandle; // 0x280(0x10)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences_Hub_AlwaysOn; // 0x290(0x10)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences_Hub_OnWhenDownstairsLocked; // 0x2a0(0x10)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences_DownstairsExp; // 0x2b0(0x10)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences_Hub_OnWhenUpstairsLocked; // 0x2c0(0x10)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences_UpstairsEXP; // 0x2d0(0x10)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences_FullExpansions; // 0x2e0(0x10)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences_SwampUnlock; // 0x2f0(0x10)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences_GrasslandsUnlock; // 0x300(0x10)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences_ForestUnlock; // 0x310(0x10)
	struct TArray<struct AAkAmbientSound*> 3dAmbiences_CoastUnlock; // 0x320(0x10)
	struct TMap<enum class ESanctuaryIdentity, struct UAkAudioEvent*> LightingIdentityAkEvents; // 0x330(0x50)

	void ReceiveBeginPlay(); // Function SUB_Study_Audio_P.SUB_Study_Audio_P_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Sanc_IslandEntered(struct UObject* Caller, struct FName& String); // Function SUB_Study_Audio_P.SUB_Study_Audio_P_C.Sanc_IslandEntered // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Sanc_IslandLeft(struct UObject* Caller, struct FName& String); // Function SUB_Study_Audio_P.SUB_Study_Audio_P_C.Sanc_IslandLeft // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartAmbience(); // Function SUB_Study_Audio_P.SUB_Study_Audio_P_C.StartAmbience // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StopAmbience(); // Function SUB_Study_Audio_P.SUB_Study_Audio_P_C.StopAmbience // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_Study_Audio_P.SUB_Study_Audio_P_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void LightingChanged(enum class ESanctuaryIdentity OldIdentity, enum class ESanctuaryIdentity NewIdentity); // Function SUB_Study_Audio_P.SUB_Study_Audio_P_C.LightingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExpansionLockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function SUB_Study_Audio_P.SUB_Study_Audio_P_C.ExpansionLockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LightingIdentityInitialized(struct UObject* Caller); // Function SUB_Study_Audio_P.SUB_Study_Audio_P_C.LightingIdentityInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_Study_Audio_P(int32_t EntryPoint); // Function SUB_Study_Audio_P.SUB_Study_Audio_P_C.ExecuteUbergraph_SUB_Study_Audio_P // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

