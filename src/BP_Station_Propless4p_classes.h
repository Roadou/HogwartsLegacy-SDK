// BlueprintGeneratedClass BP_Station_Propless4p.BP_Station_Propless4p_C
// Size: 0x498 (Inherited: 0x371)
struct ABP_Station_Propless4p_C : ANone {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStaticMeshComponent* ParentProp; // 0x380(0x08)
	struct TSoftObjectPtr<UStaticMesh> ParentPropMesh; // 0x388(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose; // 0x3b0(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose1; // 0x3d8(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose2; // 0x400(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose3; // 0x428(0x28)
	struct USkeletalMeshComponent* SkelMesh; // 0x450(0x08)
	struct USkeletalMeshComponent* SkelMesh1; // 0x458(0x08)
	struct USkeletalMeshComponent* SkelMesh2; // 0x460(0x08)
	struct USkeletalMeshComponent* SkelMesh3; // 0x468(0x08)
	struct TSoftObjectPtr<USkeletalMesh> Character; // 0x470(0x28)

	void UserConstructionScript(); // Function BP_Station_Propless4p.BP_Station_Propless4p_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Station_Propless4p.BP_Station_Propless4p_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Station_Propless4p(int32_t EntryPoint); // Function BP_Station_Propless4p.BP_Station_Propless4p_C.ExecuteUbergraph_BP_Station_Propless4p // (Final|UbergraphFunction) // @ game+0x38a7480
};

