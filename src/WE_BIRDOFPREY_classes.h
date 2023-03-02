// BlueprintGeneratedClass WE_BIRDOFPREY.WE_BIRDOFPREY_C
// Size: 0x2b8 (Inherited: 0x250)
struct AWE_BIRDOFPREY_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	float Hunter1GlideVelocity; // 0x258(0x04)
	float Hunter1MaxVelocity; // 0x25c(0x04)
	float Hunter2GlideVelocity; // 0x260(0x04)
	float Hunter2MaxVelocity; // 0x264(0x04)
	float Hunter3GlideVelocity; // 0x268(0x04)
	float Hunter3MaxVelocity; // 0x26c(0x04)
	float Prey1GlideVelocity; // 0x270(0x04)
	float Prey1MaxVelocity; // 0x274(0x04)
	float Prey2GlideVelocity; // 0x278(0x04)
	float Prey2MaxVelocity; // 0x27c(0x04)
	float Prey3GlideVelocity; // 0x280(0x04)
	float Prey3MaxVelocity; // 0x284(0x04)
	struct UObject* AnimBP; // 0x288(0x08)
	struct USkeletalMesh* CreatureMesh; // 0x290(0x08)
	struct ABP_WE_BOP_MoveObjectAlongSpline_Owl_C* BP_WE_BOP_MoveObjectAlongSpline_Owl_2_ExecuteUbergraph_WE_BIRDOFPREY_RefProperty; // 0x298(0x08)
	struct ABP_WE_BOP_MoveObjectAlongSpline_Hippogriff_C* BP_WE_BOP_MoveObjectAlongSpline_Hippogriff_2_ExecuteUbergraph_WE_BIRDOFPREY_RefProperty; // 0x2a0(0x08)
	struct ABP_WE_GenericSpline_C* BP_WE_BOP_Hippogriff_Spline_B_ExecuteUbergraph_WE_BIRDOFPREY_RefProperty; // 0x2a8(0x08)
	struct ABP_WE_GenericSpline_C* BP_WE_BOP_Bird_Spline_B_ExecuteUbergraph_WE_BIRDOFPREY_RefProperty; // 0x2b0(0x08)

	void ReceiveBeginPlay(); // Function WE_BIRDOFPREY.WE_BIRDOFPREY_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_WE_BIRDOFPREY(int32_t EntryPoint); // Function WE_BIRDOFPREY.WE_BIRDOFPREY_C.ExecuteUbergraph_WE_BIRDOFPREY // (Final|UbergraphFunction) // @ game+0x38a7480
};

