// BlueprintGeneratedClass CO_BA_Rookwood.CO_BA_Rookwood_C
// Size: 0x2a8 (Inherited: 0x250)
struct ACO_BA_Rookwood_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UMissionManager* MissionManager; // 0x258(0x08)
	struct FHermesBPDelegateHandle BindUpdatedHer03; // 0x260(0x10)
	struct FHermesBPDelegateHandle BindUpdatedHer03_CP01; // 0x270(0x10)
	bool DoorsOpened; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct ABP_Door_Template_C* BP_Door_Template4_2_ExecuteUbergraph_CO_BA_Rookwood_RefProperty; // 0x288(0x08)
	struct ABP_Door_Template_C* BP_Door_Template2_ExecuteUbergraph_CO_BA_Rookwood_RefProperty; // 0x290(0x08)
	struct ABP_Door_Template_C* BP_Door_Template4_2_EdGraph_0_RefProperty; // 0x298(0x08)
	struct ABP_Door_Template_C* BP_Door_Template2_EdGraph_0_RefProperty; // 0x2a0(0x08)

	void Updated HER_03(struct UObject* Caller, struct FMissionID& MissionID); // Function CO_BA_Rookwood.CO_BA_Rookwood_C.Updated HER_03 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function CO_BA_Rookwood.CO_BA_Rookwood_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_CO_BA_Rookwood(int32_t EntryPoint); // Function CO_BA_Rookwood.CO_BA_Rookwood_C.ExecuteUbergraph_CO_BA_Rookwood // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

