// BlueprintGeneratedClass HN_BG_Tech.HN_BG_Tech_C
// Size: 0x298 (Inherited: 0x250)
struct AHN_BG_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	int32_t Braziers_Lit_Count; // 0x258(0x04)
	int32_t Brazier_Fail_Count; // 0x25c(0x04)
	int32_t Mission_Attempt_Count; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<enum class AmbientChatterTopicIDs> Topics Pool; // 0x268(0x10)
	struct ANone* BP_Sphinx_Puzzle_A_Brazier_ExecuteUbergraph_HN_BG_Tech_RefProperty; // 0x278(0x08)
	struct ASceneRigActor* CIV_MRT_01_04_IncendioWorks_ExecuteUbergraph_HN_BG_Tech_RefProperty; // 0x280(0x08)
	struct ABP_Station_CustomGardenPlow_1p_C* BP_Station_CustomGardenPlow_1p_2_ExecuteUbergraph_HN_BG_Tech_RefProperty; // 0x288(0x08)
	struct AAIPath* AIPath_0_ExecuteUbergraph_HN_BG_Tech_RefProperty; // 0x290(0x08)

	void ReceiveBeginPlay(); // Function HN_BG_Tech.HN_BG_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Gazebo_Activated(); // Function HN_BG_Tech.HN_BG_Tech_C.Gazebo_Activated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Brazier_Lit(); // Function HN_BG_Tech.HN_BG_Tech_C.Brazier_Lit // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Brazier_Restart(); // Function HN_BG_Tech.HN_BG_Tech_C.Brazier_Restart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MRT_01_CP2a_Updated(struct UObject* Caller, struct FName& String); // Function HN_BG_Tech.HN_BG_Tech_C.MRT_01_CP2a_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void IncendioHint_VO(); // Function HN_BG_Tech.HN_BG_Tech_C.IncendioHint_VO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_BG_Tech.HN_BG_Tech_C.BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function HN_BG_Tech.HN_BG_Tech_C.BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void NoraVO_Gazebo(); // Function HN_BG_Tech.HN_BG_Tech_C.NoraVO_Gazebo // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function HN_BG_Tech.HN_BG_Tech_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HN_BG_Tech(int32_t EntryPoint); // Function HN_BG_Tech.HN_BG_Tech_C.ExecuteUbergraph_HN_BG_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

