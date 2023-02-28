// AnimBlueprintGeneratedClass ABP_FloatingBalloon.ABP_FloatingBalloon_C
// Size: 0xf08 (Inherited: 0x2c0)
struct UABP_FloatingBalloon_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x300(0x440)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x740(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x760(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x780(0x440)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xbc0(0x118)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xcd8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xde0(0x108)
	struct FRotator PropRotation; // 0xee8(0x0c)
	struct FRotator BalloonRot; // 0xef4(0x0c)
	float PropSpeed; // 0xf00(0x04)
	float BalloonRotSpeed; // 0xf04(0x04)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_FloatingBalloon.ABP_FloatingBalloon_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_FloatingBalloon.ABP_FloatingBalloon_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintBeginPlay(); // Function ABP_FloatingBalloon.ABP_FloatingBalloon_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_ABP_FloatingBalloon(int32_t EntryPoint); // Function ABP_FloatingBalloon.ABP_FloatingBalloon_C.ExecuteUbergraph_ABP_FloatingBalloon // (Final|UbergraphFunction) // @ game+0x38a7480
};

