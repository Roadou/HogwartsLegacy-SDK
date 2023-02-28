// BlueprintGeneratedClass BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C
// Size: 0x370 (Inherited: 0x2e0)
struct ABP_Sanc_Desk_01_Parent_C : ASanctuaryDesk {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UStaticMeshComponent* Desk_SM; // 0x2e8(0x08)
	struct USkeletalMeshComponent* Inkwell_SK; // 0x2f0(0x08)
	struct USkeletalMeshComponent* Paper_SK; // 0x2f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x300(0x08)
	struct UAnimSequence* Paper_Flipping_StartFrame; // 0x308(0x08)
	struct UAnimSequence* Paper_Flipping_Action; // 0x310(0x08)
	struct UAnimSequence* Paper_Flipping_EndFrame; // 0x318(0x08)
	struct UAnimSequence* Paper_FlipBack_Startframe; // 0x320(0x08)
	struct UAnimSequence* Paper_FlipBack_Action; // 0x328(0x08)
	struct UAnimSequence* Paper_FlipBack_Endframe; // 0x330(0x08)
	struct UABP_Sanc_Desk_Paper_01_C* ABP_Paper_Ref; // 0x338(0x08)
	struct UAnimSequence* Quill_Startframe; // 0x340(0x08)
	struct UAnimSequence* Quill_Into; // 0x348(0x08)
	struct UAnimSequence* Quill_Loop; // 0x350(0x08)
	struct UAnimSequence* Quill_OutOf; // 0x358(0x08)
	struct UAnimSequence* Quill_EndFrame; // 0x360(0x08)
	struct UABP_Sanc_Desk_InkQuill_01_C* ABP_Quill_Ref; // 0x368(0x08)

	void ReceiveBeginPlay(); // Function BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Paper_FlipFinished(); // Function BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C.Paper_FlipFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Quill_WritingFinished(); // Function BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C.Quill_WritingFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Paper_FlipBackFinished(); // Function BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C.Paper_FlipBackFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Quill_WritingLoopStart(); // Function BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C.Quill_WritingLoopStart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ObjectConjured(); // Function BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_Desk_01_Parent(int32_t EntryPoint); // Function BP_Sanc_Desk_01_Parent.BP_Sanc_Desk_01_Parent_C.ExecuteUbergraph_BP_Sanc_Desk_01_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

