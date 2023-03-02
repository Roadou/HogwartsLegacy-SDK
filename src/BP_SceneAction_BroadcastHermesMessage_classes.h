// BlueprintGeneratedClass BP_SceneAction_BroadcastHermesMessage.BP_SceneAction_BroadcastHermesMessage_C
// Size: 0xd0 (Inherited: 0xa8)
struct UBP_SceneAction_BroadcastHermesMessage_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FString MessageName; // 0xb0(0x10)
	struct FString MessageArgument; // 0xc0(0x10)

	struct FText GetDisplayName(); // Function BP_SceneAction_BroadcastHermesMessage.BP_SceneAction_BroadcastHermesMessage_C.GetDisplayName // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool IsInstant(); // Function BP_SceneAction_BroadcastHermesMessage.BP_SceneAction_BroadcastHermesMessage_C.IsInstant // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnInstant(float Time, bool IsScrubbing); // Function BP_SceneAction_BroadcastHermesMessage.BP_SceneAction_BroadcastHermesMessage_C.OnInstant // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_BroadcastHermesMessage(int32_t EntryPoint); // Function BP_SceneAction_BroadcastHermesMessage.BP_SceneAction_BroadcastHermesMessage_C.ExecuteUbergraph_BP_SceneAction_BroadcastHermesMessage // (Final|UbergraphFunction) // @ game+0x38a7480
};

