// BlueprintGeneratedClass SUB_Global_Tech.SUB_Global_Tech_C
// Size: 0x290 (Inherited: 0x250)
struct ASUB_Global_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FHermesBPDelegateHandle LightingPassiveHandle; // 0x258(0x10)
	struct FHermesBPDelegateHandle SNC_01UpdateHandle; // 0x268(0x10)
	struct FName SanctuaryHouseElf; // 0x278(0x08)
	struct ANone* UI_BP_FastTravel_EdGraph_1_RefProperty; // 0x280(0x08)
	struct ANone* UI_BP_FastTravel_EdGraph_2_RefProperty; // 0x288(0x08)

	void EnableFastTravelPoint(); // Function SUB_Global_Tech.SUB_Global_Tech_C.EnableFastTravelPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableFastTravelPoint(); // Function SUB_Global_Tech.SUB_Global_Tech_C.DisableFastTravelPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UnbindLightingConversation(); // Function SUB_Global_Tech.SUB_Global_Tech_C.UnbindLightingConversation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnActiveIslandSet(struct FName IslandName); // Function SUB_Global_Tech.SUB_Global_Tech_C.OnActiveIslandSet // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetConjurationContextForIsland(struct FName IslandName); // Function SUB_Global_Tech.SUB_Global_Tech_C.SetConjurationContextForIsland // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSanctuaryExit(struct FName IslandName); // Function SUB_Global_Tech.SUB_Global_Tech_C.SetSanctuaryExit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetAvailableConversations(struct FName IslandName); // Function SUB_Global_Tech.SUB_Global_Tech_C.SetAvailableConversations // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function SUB_Global_Tech.SUB_Global_Tech_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_Global_Tech.SUB_Global_Tech_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function SUB_Global_Tech.SUB_Global_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void UpdateTeagueSE(); // Function SUB_Global_Tech.SUB_Global_Tech_C.UpdateTeagueSE // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SNC_01_Updated(struct UObject* Caller, struct FName& String); // Function SUB_Global_Tech.SUB_Global_Tech_C.SNC_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_Global_Tech(int32_t EntryPoint); // Function SUB_Global_Tech.SUB_Global_Tech_C.ExecuteUbergraph_SUB_Global_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

