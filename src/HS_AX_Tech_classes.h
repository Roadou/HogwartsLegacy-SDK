// BlueprintGeneratedClass HS_AX_Tech.HS_AX_Tech_C
// Size: 0x2c8 (Inherited: 0x250)
struct AHS_AX_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TArray<struct ABlockingVolume*> RuinsBlockers; // 0x258(0x10)
	bool CollisionEnabled; // 0x268(0x01)
	bool NotesAvailable; // 0x269(0x01)
	bool VoPlaying?; // 0x26a(0x01)
	char pad_26B[0x1]; // 0x26b(0x01)
	int32_t PlayerDialogue; // 0x26c(0x04)
	struct AActor* LookAtActor_EVCHamlet_ExecuteUbergraph_HS_AX_Tech_RefProperty; // 0x270(0x08)
	struct ABP_EVC_Overlook_Station_C* BP_EVC_Overlook_Station_2_ExecuteUbergraph_HS_AX_Tech_RefProperty; // 0x278(0x08)
	struct ABP_EVC_CurseObject2_C* BP_EVC_CurseObject2_2_ExecuteUbergraph_HS_AX_Tech_RefProperty; // 0x280(0x08)
	struct ABP_EVC_CurseObject1_C* BP_EVC_CurseObject1_3_ExecuteUbergraph_HS_AX_Tech_RefProperty; // 0x288(0x08)
	struct ABP_EVC_CurseObject3_C* BP_EVC_CurseObject3_2_ExecuteUbergraph_HS_AX_Tech_RefProperty; // 0x290(0x08)
	struct ABP_EVC_MagicalWell_C* BP_EVC_MagicalWell_ExecuteUbergraph_HS_AX_Tech_RefProperty; // 0x298(0x08)
	struct ABP_EVC_MarredPortrait_C* BP_EVC_MarredPortrait_2_ExecuteUbergraph_HS_AX_Tech_RefProperty; // 0x2a0(0x08)
	struct ABP_QuestItem_EVC_01_IsidoraJournal2_C* BP_QuestItem_EVC_01_IsidoraJournal2_2_EdGraph_0_RefProperty; // 0x2a8(0x08)
	struct ABP_QuestItem_EVC_01_IsidoraJournal1_C* BP_QuestItem_EVC_01_IsidoraJournal1_2_EdGraph_0_RefProperty; // 0x2b0(0x08)
	struct ABP_QuestItem_EVC_01_IsidoraJournal2_C* BP_QuestItem_EVC_01_IsidoraJournal2_2_EdGraph_1_RefProperty; // 0x2b8(0x08)
	struct ABP_QuestItem_EVC_01_IsidoraJournal1_C* BP_QuestItem_EVC_01_IsidoraJournal1_2_EdGraph_1_RefProperty; // 0x2c0(0x08)

	void UnRegisterNotes(); // Function HS_AX_Tech.HS_AX_Tech_C.UnRegisterNotes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RegisterNotes(); // Function HS_AX_Tech.HS_AX_Tech_C.RegisterNotes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function HS_AX_Tech.HS_AX_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void InvestigateOverlook(); // Function HS_AX_Tech.HS_AX_Tech_C.InvestigateOverlook // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVC_01_Courtyard_Updated(struct UObject* Caller, struct FName& String); // Function HS_AX_Tech.HS_AX_Tech_C.EVC_01_Courtyard_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVC_01_Manor_Updated(struct UObject* Caller, struct FName& String); // Function HS_AX_Tech.HS_AX_Tech_C.EVC_01_Manor_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVC_01_Courtyard2_Updated(struct UObject* Caller, struct FName& String); // Function HS_AX_Tech.HS_AX_Tech_C.EVC_01_Courtyard2_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVC_01_Courtyard3_Updated(struct UObject* Caller, struct FName& String); // Function HS_AX_Tech.HS_AX_Tech_C.EVC_01_Courtyard3_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVC_01_Manor2_Updated(struct UObject* Caller, struct FName& String); // Function HS_AX_Tech.HS_AX_Tech_C.EVC_01_Manor2_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVC_01_Manor3_Updated(struct UObject* Caller, struct FName& String); // Function HS_AX_Tech.HS_AX_Tech_C.EVC_01_Manor3_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EVC_01_CP2_3_Updated(struct UObject* Caller, struct FName& String); // Function HS_AX_Tech.HS_AX_Tech_C.EVC_01_CP2_3_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_AX_Tech(int32_t EntryPoint); // Function HS_AX_Tech.HS_AX_Tech_C.ExecuteUbergraph_HS_AX_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

