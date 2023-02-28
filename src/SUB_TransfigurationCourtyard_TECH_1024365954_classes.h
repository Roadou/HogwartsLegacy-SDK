// BlueprintGeneratedClass SUB_TransfigurationCourtyard_TECH_1024365954.SUB_TransfigurationCourtyard_TECH_C
// Size: 0x278 (Inherited: 0x250)
struct ASUB_TransfigurationCourtyard_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	bool Timeout; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct ULevelStreamingDynamic* ChristmasLevel; // 0x260(0x08)
	struct ULevelStreamingDynamic* HalloweenLevel; // 0x268(0x08)
	struct ABP_HW_ForgottenStatue_C* BP_HW_ForgottenStatue2_2_ExecuteUbergraph_SUB_TransfigurationCourtyard_TECH_RefProperty; // 0x270(0x08)

	void ReceiveBeginPlay(); // Function SUB_TransfigurationCourtyard_TECH_1024365954.SUB_TransfigurationCourtyard_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ActorHitBySpell(struct UObject* Caller, struct FHitBySpellData& HitBySpell); // Function SUB_TransfigurationCourtyard_TECH_1024365954.SUB_TransfigurationCourtyard_TECH_C.ActorHitBySpell // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DialogueFinished(); // Function SUB_TransfigurationCourtyard_TECH_1024365954.SUB_TransfigurationCourtyard_TECH_C.DialogueFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_2(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_TransfigurationCourtyard_TECH_1024365954.SUB_TransfigurationCourtyard_TECH_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_TransfigurationCourtyard_TECH_1024365954.SUB_TransfigurationCourtyard_TECH_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_TransfigurationCourtyard_TECH_1024365954.SUB_TransfigurationCourtyard_TECH_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_TransfigurationCourtyard_TECH(int32_t EntryPoint); // Function SUB_TransfigurationCourtyard_TECH_1024365954.SUB_TransfigurationCourtyard_TECH_C.ExecuteUbergraph_SUB_TransfigurationCourtyard_TECH // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

