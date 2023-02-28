// BlueprintGeneratedClass BP_Station_Propless3p.BP_Station_Propless3p_C
// Size: 0x468 (Inherited: 0x371)
struct ABP_Station_Propless3p_C : ABP_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStaticMeshComponent* ParentProp; // 0x380(0x08)
	struct TSoftObjectPtr<UStaticMesh> ParentPropMesh; // 0x388(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose; // 0x3b0(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose1; // 0x3d8(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose2; // 0x400(0x28)
	struct USkeletalMeshComponent* SkelMesh; // 0x428(0x08)
	struct USkeletalMeshComponent* SkelMesh1; // 0x430(0x08)
	struct USkeletalMeshComponent* SkelMesh2; // 0x438(0x08)
	struct TSoftObjectPtr<USkeletalMesh> Character; // 0x440(0x28)

	void UserConstructionScript(); // Function BP_Station_Propless3p.BP_Station_Propless3p_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Station_Propless3p.BP_Station_Propless3p_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Station_Propless3p(int32_t EntryPoint); // Function BP_Station_Propless3p.BP_Station_Propless3p_C.ExecuteUbergraph_BP_Station_Propless3p // (Final|UbergraphFunction) // @ game+0x38a7480
};

