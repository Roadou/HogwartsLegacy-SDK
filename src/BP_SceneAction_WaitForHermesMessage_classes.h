// BlueprintGeneratedClass BP_SceneAction_WaitForHermesMessage.BP_SceneAction_WaitForHermesMessage_C
// Size: 0xd0 (Inherited: 0xa8)
struct UBP_SceneAction_WaitForHermesMessage_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FString MessageArgument; // 0xb0(0x10)
	struct FHermesBPDelegateHandle Handle; // 0xc0(0x10)

	struct FText GetDisplayName(); // Function BP_SceneAction_WaitForHermesMessage.BP_SceneAction_WaitForHermesMessage_C.GetDisplayName // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool IsInstant(); // Function BP_SceneAction_WaitForHermesMessage.BP_SceneAction_WaitForHermesMessage_C.IsInstant // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_WaitForHermesMessage.BP_SceneAction_WaitForHermesMessage_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_WaitForHermesMessage.BP_SceneAction_WaitForHermesMessage_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SRHermesMessage(struct UObject* Caller, struct FString String); // Function BP_SceneAction_WaitForHermesMessage.BP_SceneAction_WaitForHermesMessage_C.SRHermesMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_WaitForHermesMessage(int32_t EntryPoint); // Function BP_SceneAction_WaitForHermesMessage.BP_SceneAction_WaitForHermesMessage_C.ExecuteUbergraph_BP_SceneAction_WaitForHermesMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

