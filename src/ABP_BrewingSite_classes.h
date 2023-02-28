// AnimBlueprintGeneratedClass ABP_BrewingSite.ABP_BrewingSite_C
// Size: 0x15e2 (Inherited: 0x2c0)
struct UABP_BrewingSite_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x438(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x460(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x488(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x578(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x5a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x5c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x5f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x618(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x640(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0x668(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x6e8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x718(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x798(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x7c8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x848(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x878(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x8f8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x928(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x9a8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x9d8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xa58(0x30)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0xa88(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0xb48(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0xbc8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0xc48(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0xcc8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0xd48(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0xdc8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0xe48(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xec8(0x30)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xef8(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0xfb8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x1038(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x10b8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x1138(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x11b8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1238(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x12b8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x1338(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1368(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x13e8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1418(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1498(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x14c8(0xb0)
	struct ABP_BrewingSite_C* BrewingSite; // 0x1578(0x08)
	enum class E_CauldronSpawnState CauldronSpawnState; // 0x1580(0x01)
	bool IngredientsAdded; // 0x1581(0x01)
	char pad_1582[0x6]; // 0x1582(0x06)
	struct UAnimSequence* Slot1_Anim; // 0x1588(0x08)
	struct UAnimSequence* Slot2_Anim; // 0x1590(0x08)
	struct UAnimSequence* Slot3_Anim; // 0x1598(0x08)
	struct UAnimSequence* Slot4_Anim; // 0x15a0(0x08)
	struct UAnimSequence* Slot5_Anim; // 0x15a8(0x08)
	struct UAnimSequence* Slot6_Anim; // 0x15b0(0x08)
	float Slot1_PlayRate; // 0x15b8(0x04)
	float Slot2_PlayRate; // 0x15bc(0x04)
	float Slot3_PlayRate; // 0x15c0(0x04)
	float Slot4_PlayRate; // 0x15c4(0x04)
	float Slot5_PlayRate; // 0x15c8(0x04)
	float Slot6_PlayRate; // 0x15cc(0x04)
	struct UAnimSequence* SecretIngredient_Anim; // 0x15d0(0x08)
	bool SecretIngredientAdded_Success; // 0x15d8(0x01)
	bool PotionReadyForPickup; // 0x15d9(0x01)
	bool PotionPickedUp; // 0x15da(0x01)
	bool PotionCancelled; // 0x15db(0x01)
	float SecretIng_PlayRate; // 0x15dc(0x04)
	bool SecretIngredientAdded_Fail; // 0x15e0(0x01)
	bool IngredientsLoading; // 0x15e1(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_3D1BD14F499ED2C90E7A608AA8504523(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_3D1BD14F499ED2C90E7A608AA8504523 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_02C7442545FC4985F30FE090F4432BDF(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_02C7442545FC4985F30FE090F4432BDF // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_57D4A9564CF6DAF49353BDB8EF7CA0F2(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_57D4A9564CF6DAF49353BDB8EF7CA0F2 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_212ACC004F3813FA4E99AF8E3E522C9A(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_212ACC004F3813FA4E99AF8E3E522C9A // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_E8B708B649E5E5ED68D236AFCEC72227(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_E8B708B649E5E5ED68D236AFCEC72227 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_80911136445611BE56EF139FDA00807E(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_80911136445611BE56EF139FDA00807E // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_DAC53B7248331BC8819A51B026DEF7C2(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_DAC53B7248331BC8819A51B026DEF7C2 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_A041B6E84E7A84A66021BEB2D9814B48(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_A041B6E84E7A84A66021BEB2D9814B48 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_957DCD4B423DAA0BBE468191A604EE44(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_957DCD4B423DAA0BBE468191A604EE44 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_D30B6C0A4A7B1A2EE7F7A8AD14764EA1(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_D30B6C0A4A7B1A2EE7F7A8AD14764EA1 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_12179CAF49942B76EA0B939B877343B2(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_12179CAF49942B76EA0B939B877343B2 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_857671FD46373C19F7D57F9E7FB8F617(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_857671FD46373C19F7D57F9E7FB8F617 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_B69720FD4B61154A4B85369DD5EE7253(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_B69720FD4B61154A4B85369DD5EE7253 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_391EB56C4EA5F163D47494BF5E028186(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_391EB56C4EA5F163D47494BF5E028186 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_7AA0D6BB4511E0F49F3F549F284213F2(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_7AA0D6BB4511E0F49F3F549F284213F2 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_9413BFB04A4DE8A9FC1B28B514FEE113(); // Function ABP_BrewingSite.ABP_BrewingSite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrewingSite_AnimGraphNode_TransitionResult_9413BFB04A4DE8A9FC1B28B514FEE113 // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_BrewingSite.ABP_BrewingSite_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintBeginPlay(); // Function ABP_BrewingSite.ABP_BrewingSite_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_CauldronSpawned(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_CauldronSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_CauldronDespawned(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_CauldronDespawned // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_CauldronSpawning(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_CauldronSpawning // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_CauldronDespawning(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_CauldronDespawning // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetIngredientsAdded(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_ResetIngredientsAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_SetSlotPlayrates(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_SetSlotPlayrates // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetSlotPlayRates(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_ResetSlotPlayRates // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_ResetCancelled(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_ResetCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Ingredient_Added_Notify(int32_t Slot); // Function ABP_BrewingSite.ABP_BrewingSite_C.Ingredient_Added_Notify // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_PickupNotify(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_PickupNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_DebugStartStir(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_DebugStartStir // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotify_onStir(); // Function ABP_BrewingSite.ABP_BrewingSite_C.AnimNotify_onStir // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_BrewingSite(int32_t EntryPoint); // Function ABP_BrewingSite.ABP_BrewingSite_C.ExecuteUbergraph_ABP_BrewingSite // (Final|UbergraphFunction) // @ game+0x38a7480
};

