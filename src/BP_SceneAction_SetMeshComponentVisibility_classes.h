// BlueprintGeneratedClass BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBP_SceneAction_SetMeshComponentVisibility_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool Visible; // 0xb0(0x01)
	bool ResetOnActionEnd; // 0xb1(0x01)
	bool PropagateToChildren; // 0xb2(0x01)
	char pad_B3[0x1]; // 0xb3(0x01)
	struct FName ComponentTag; // 0xb4(0x08)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<bool> PreviousVisiblity; // 0xc0(0x10)
	struct TArray<struct UMeshComponent*> MeshComponents; // 0xd0(0x10)

	bool IsInstant(); // Function BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C.IsInstant // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnInstant(float Time, bool IsScrubbing); // Function BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C.OnInstant // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_SetMeshComponentVisibility(int32_t EntryPoint); // Function BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C.ExecuteUbergraph_BP_SceneAction_SetMeshComponentVisibility // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

