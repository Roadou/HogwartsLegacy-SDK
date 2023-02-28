// BlueprintGeneratedClass BP_FlyingBroomProp.BP_FlyingBroomProp_C
// Size: 0x9e8 (Inherited: 0x980)
struct ABP_FlyingBroomProp_C : AFlyingBroom {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x980(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x988(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x990(0x08)
	float DismountTimeline_Scale_54A5A1134813F2F93F1823926DBFE5F9; // 0x998(0x04)
	float DismountTimeline_ToHandAlpha_54A5A1134813F2F93F1823926DBFE5F9; // 0x99c(0x04)
	enum class ETimelineDirection DismountTimeline__Direction_54A5A1134813F2F93F1823926DBFE5F9; // 0x9a0(0x01)
	char pad_9A1[0x7]; // 0x9a1(0x07)
	struct UTimelineComponent* DismountTimeline; // 0x9a8(0x08)
	struct ABiped_Player* Player; // 0x9b0(0x08)
	struct FSTR_Apperate_Colors Apperate_Color; // 0x9b8(0x30)

	void SetScale(float InScale); // Function BP_FlyingBroomProp.BP_FlyingBroomProp_C.SetScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FlyingBroomProp.BP_FlyingBroomProp_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DismountTimeline__FinishedFunc(); // Function BP_FlyingBroomProp.BP_FlyingBroomProp_C.DismountTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void DismountTimeline__UpdateFunc(); // Function BP_FlyingBroomProp.BP_FlyingBroomProp_C.DismountTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void DismountTimeline__StartFadeOut__EventFunc(); // Function BP_FlyingBroomProp.BP_FlyingBroomProp_C.DismountTimeline__StartFadeOut__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void DismountBroom(struct ABiped_Player* Player, bool Instant); // Function BP_FlyingBroomProp.BP_FlyingBroomProp_C.DismountBroom // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_FlyingBroomProp.BP_FlyingBroomProp_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FlyingBroomProp.BP_FlyingBroomProp_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FlyingBroomProp(int32_t EntryPoint); // Function BP_FlyingBroomProp.BP_FlyingBroomProp_C.ExecuteUbergraph_BP_FlyingBroomProp // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

