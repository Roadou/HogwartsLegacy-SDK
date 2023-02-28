// BlueprintGeneratedClass BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C
// Size: 0xb8 (Inherited: 0xa8)
struct UBP_SceneAction_TransformLightRig_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UBoolProvider* RigVisible; // 0xb0(0x08)

	void IsRigVisible(bool& Result); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.IsRigVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetActorListRecursive(struct AActor* Actor, struct TArray<struct AActor*>& ActorList, struct TArray<struct AActor*>& Result); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.GetActorListRecursive // (Exec|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HideLightRig(bool HideActor); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.HideLightRig // (Exec|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool HasPostActorTick(); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.HasPostActorTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	bool HasNormalTick(); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.HasNormalTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	float GetSortOrderPostActorTick(); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.GetSortOrderPostActorTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	float GetSortOrder(); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.GetSortOrder // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.OnExitInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnSetTimeInsideInterval(float Time, float LocalTime, bool IsScrubbing); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.OnSetTimeInsideInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCreate(struct UObject* ActionState); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.OnCreate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_TransformLightRig(int32_t EntryPoint); // Function BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.ExecuteUbergraph_BP_SceneAction_TransformLightRig // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

