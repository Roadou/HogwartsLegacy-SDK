// BlueprintGeneratedClass BP_AnmShrProc_StandConv.BP_AnmShrProc_StandConv_C
// Size: 0x60 (Inherited: 0x60)
struct UBP_AnmShrProc_StandConv_C : UT4_AnimationSharingStateProcessor {

	enum class EFacialAnimType GetFacialAnimType(char InCurrentState); // Function BP_AnmShrProc_StandConv.BP_AnmShrProc_StandConv_C.GetFacialAnimType // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetUsesEyeMouthAnims(char InCurrentState, bool& bOutUsesEyeAnims, bool& bOutUsesMouthAnims); // Function BP_AnmShrProc_StandConv.BP_AnmShrProc_StandConv_C.GetUsesEyeMouthAnims // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UEnum* GetAnimationStateEnum(); // Function BP_AnmShrProc_StandConv.BP_AnmShrProc_StandConv_C.GetAnimationStateEnum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function BP_AnmShrProc_StandConv.BP_AnmShrProc_StandConv_C.ProcessActorState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

