// AnimBlueprintGeneratedClass ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C
// Size: 0x1455 (Inherited: 0x2c0)
struct UABP_Robe_ClothJoints_Base_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2c8(0x1d8)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_5; // 0x4a0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x5a8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x5c8(0x20)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_4; // 0x5e8(0x108)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_3; // 0x6f0(0x108)
	struct FAnimNode_Constraint AnimGraphNode_Constraint_2; // 0x7f8(0x108)
	struct FAnimNode_Constraint AnimGraphNode_Constraint; // 0x900(0x108)
	char pad_A08[0x8]; // 0xa08(0x08)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_5; // 0xa10(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_4; // 0xbc0(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_3; // 0xd70(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_2; // 0xf20(0x1b0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x10d0(0x30)
	struct FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1100(0x1b0)
	struct FTransform ClothTargetHips; // 0x12b0(0x30)
	struct FTransform ClothTargetLeft; // 0x12e0(0x30)
	struct FTransform ClothTargetRight; // 0x1310(0x30)
	float ClothTargetAlpha; // 0x1340(0x04)
	float ClothTargetAlphaDesired; // 0x1344(0x04)
	struct FClothMountTargets Cloth Mount Targets; // 0x1348(0x18)
	struct TArray<struct FName> ValidClothingAssetNames; // 0x1360(0x10)
	struct FVector2DClothInteractorValue Anim Drive Stiffness; // 0x1370(0x0c)
	struct FVector2DClothInteractorValue Anim Drive Damping; // 0x137c(0x0c)
	struct FFloatClothInteractorValue Drag Coefficient; // 0x1388(0x08)
	struct FFloatClothInteractorValue Lift Coefficient; // 0x1390(0x08)
	struct FFloatClothInteractorValue Collision Thickness; // 0x1398(0x08)
	struct FFloatClothInteractorValue Friction Coefficient; // 0x13a0(0x08)
	struct FFloatClothInteractorValue Damping Coefficient; // 0x13a8(0x08)
	bool Show Debug; // 0x13b0(0x01)
	char pad_13B1[0x3]; // 0x13b1(0x03)
	struct FFloatClothInteractorValue Gravity Scale; // 0x13b4(0x08)
	struct FBoolClothInteractorValue UseGravityOverride; // 0x13bc(0x02)
	char pad_13BE[0x2]; // 0x13be(0x02)
	struct FVectorClothInteractorValue Gravity Override; // 0x13c0(0x10)
	struct FVector2DClothInteractorValue Tether Stiffness; // 0x13d0(0x0c)
	struct FFloatClothInteractorValue Edge Stiffness; // 0x13dc(0x08)
	struct FFloatClothInteractorValue Bending Stiffness; // 0x13e4(0x08)
	struct FFloatClothInteractorValue Area Stiffness; // 0x13ec(0x08)
	struct FVectorClothInteractorValue Linear Velocity Scale; // 0x13f4(0x10)
	struct FFloatClothInteractorValue Angular Velocity Scale; // 0x1404(0x08)
	struct FFloatClothInteractorValue Fictitious Angular Scale; // 0x140c(0x08)
	struct FFloatClothInteractorValue Wind Velocity Scale; // 0x1414(0x08)
	struct FIntClothInteractorValue Interation Count; // 0x141c(0x08)
	struct FIntClothInteractorValue Subdivision Count; // 0x1424(0x08)
	char pad_142C[0x4]; // 0x142c(0x04)
	struct UObject* Caller; // 0x1430(0x08)
	float PreviousClothAlpha; // 0x1438(0x04)
	float BlendTime; // 0x143c(0x04)
	struct FVector2D ActiveAnimDriveStiffness; // 0x1440(0x08)
	struct FVector2D ActiveAnimDriveDamping; // 0x1448(0x08)
	float LastAnimDriveVelocityScale; // 0x1450(0x04)
	bool Targets Only; // 0x1454(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetVelocityActor(struct AActor*& NewParam); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.GetVelocityActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetSpeed(float& Speed); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.GetSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateVelocityAnimDrive(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.UpdateVelocityAnimDrive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateClothAlpha(float DeltaTime); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.UpdateClothAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool ShouldProcessClothingAsset(struct FString ClothingAsset); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.ShouldProcessClothingAsset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Restore Clothing Asset Values(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.Restore Clothing Asset Values // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Restore Cloth Interactor Values(struct UChaosClothingInteractor* ChaosClothInteractor, struct UChaosClothingSimulationInteractor* ChaosClothSimInterator); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.Restore Cloth Interactor Values // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Cloth Interactor Values(struct UChaosClothingInteractor* ChaosClothInteractor, struct UChaosClothingSimulationInteractor* ChaosClothSimInterator); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.Set Cloth Interactor Values // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Update Cloth Target(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.Update Cloth Target // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Clothing Asset Values(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.Set Clothing Asset Values // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_2585B5A94FF85B361E3034931BCB0624(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_2585B5A94FF85B361E3034931BCB0624 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FB17C4724885D341E2012B9B4FF5781E(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FB17C4724885D341E2012B9B4FF5781E // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_A6077BAE40160E78E9E8C690781E2893(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_A6077BAE40160E78E9E8C690781E2893 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FA19EDC14B7EEBA1388BFC9C77A50936(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_FA19EDC14B7EEBA1388BFC9C77A50936 // (BlueprintEvent) // @ game+0x38a7480
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_5EEAE11C437407E030FA068B5DF9635C(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Robe_ClothJoints_Base_AnimGraphNode_LookAt_5EEAE11C437407E030FA068B5DF9635C // (BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintInitializeAnimation(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnClothTargetEnd(); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.OnClothTargetEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnClothTargetStart(struct FClothMountTargets& ClothMountTargets, struct UObject* Caller, bool BlendIn, bool TargetsOnly); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.OnClothTargetStart // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_Robe_ClothJoints_Base(int32_t EntryPoint); // Function ABP_Robe_ClothJoints_Base.ABP_Robe_ClothJoints_Base_C.ExecuteUbergraph_ABP_Robe_ClothJoints_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

