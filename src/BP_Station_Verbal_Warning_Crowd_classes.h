// BlueprintGeneratedClass BP_Station_Verbal_Warning_Crowd.BP_Station_Verbal_Warning_Crowd_C
// Size: 0x4b0 (Inherited: 0x371)
struct ABP_Station_Verbal_Warning_Crowd_C : ABP_Crowd_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x380(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x388(0x08)
	int32_t CharacterID; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UStaticMeshComponent* ParentProp; // 0x398(0x08)
	struct USkeletalMeshComponent* SkelMesh; // 0x3a0(0x08)
	struct USkeletalMeshComponent* SkelMesh1; // 0x3a8(0x08)
	struct USkeletalMeshComponent* Skel Mesh 2; // 0x3b0(0x08)
	struct USkeletalMeshComponent* Skel Mesh 3; // 0x3b8(0x08)
	struct TSoftObjectPtr<UStaticMesh> ParentPropMesh; // 0x3c0(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose; // 0x3e8(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose1; // 0x410(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose2; // 0x438(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose3; // 0x460(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Character; // 0x488(0x28)

	void UserConstructionScript(); // Function BP_Station_Verbal_Warning_Crowd.BP_Station_Verbal_Warning_Crowd_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Station_Verbal_Warning_Crowd.BP_Station_Verbal_Warning_Crowd_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Station_Verbal_Warning_Crowd(int32_t EntryPoint); // Function BP_Station_Verbal_Warning_Crowd.BP_Station_Verbal_Warning_Crowd_C.ExecuteUbergraph_BP_Station_Verbal_Warning_Crowd // (Final|UbergraphFunction) // @ game+0x38a7480
};

