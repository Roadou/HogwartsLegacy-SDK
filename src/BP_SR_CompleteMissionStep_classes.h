// BlueprintGeneratedClass BP_SR_CompleteMissionStep.BP_SR_CompleteMissionStep_C
// Size: 0xc8 (Inherited: 0xa8)
struct UBP_SR_CompleteMissionStep_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FName Mission ID; // 0xb0(0x08)
	struct FString Mission Step Nickname; // 0xb8(0x10)

	bool IsInstant(); // Function BP_SR_CompleteMissionStep.BP_SR_CompleteMissionStep_C.IsInstant // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnInstant(float Time, bool IsScrubbing); // Function BP_SR_CompleteMissionStep.BP_SR_CompleteMissionStep_C.OnInstant // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SR_CompleteMissionStep(int32_t EntryPoint); // Function BP_SR_CompleteMissionStep.BP_SR_CompleteMissionStep_C.ExecuteUbergraph_BP_SR_CompleteMissionStep // (Final|UbergraphFunction) // @ game+0x38a7480
};

