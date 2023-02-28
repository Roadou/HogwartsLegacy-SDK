// BlueprintGeneratedClass SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C
// Size: 0x2c0 (Inherited: 0x250)
struct ASUB_CentralHall_TECH_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FTimerHandle COM_02MothTimer; // 0x258(0x08)
	struct FDialogueConversationReference COM_02LostMoth; // 0x260(0x10)
	struct FDialogueConversationReference COM_02GrabMoth; // 0x270(0x10)
	struct ULevelStreamingDynamic* ChristmasLevel; // 0x280(0x08)
	struct ULevelStreamingDynamic* HalloweenLevel; // 0x288(0x08)
	struct ABP_MothPictureFrame_C* BP_MothPictureFrame15_2_ExecuteUbergraph_SUB_CentralHall_TECH_RefProperty; // 0x290(0x08)
	struct ABP_Moth_C* BP_Moth12_2_ExecuteUbergraph_SUB_CentralHall_TECH_RefProperty; // 0x298(0x08)
	struct ABP_BenchStation_Propless_C* BP_BenchStation_Propless_2_ExecuteUbergraph_SUB_CentralHall_TECH_RefProperty; // 0x2a0(0x08)
	struct ABP_Station_Stand_CloseDiscussion_Student_2P_C* BP_Station_Stand_StudentTour_2P_2_ExecuteUbergraph_SUB_CentralHall_TECH_RefProperty; // 0x2a8(0x08)
	struct AAIPath* AIPath_CentralHall_Main_ExecuteUbergraph_SUB_CentralHall_TECH_RefProperty; // 0x2b0(0x08)
	struct ABP_FastTravel_C* BP_FastTravel13_ExecuteUbergraph_SUB_CentralHall_TECH_RefProperty; // 0x2b8(0x08)

	void ReceiveBeginPlay(); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void COM_02_MothEvent(bool inLight); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.COM_02_MothEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_02_LostMoth(); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.COM_02_LostMoth // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_02_FrameSolved(); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.COM_02_FrameSolved // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_02_FirstLumos(bool IsActive); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.COM_02_FirstLumos // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_02_MothActivate(bool Activated); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.COM_02_MothActivate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void COM_02_Updated(struct UObject* Caller, struct FName& String); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.COM_02_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_2(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_CentralHall_TECH(int32_t EntryPoint); // Function SUB_CentralHall_TECH_1024365954.SUB_CentralHall_TECH_C.ExecuteUbergraph_SUB_CentralHall_TECH // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

