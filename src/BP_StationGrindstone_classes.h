// BlueprintGeneratedClass BP_StationGrindstone.BP_StationGrindstone_C
// Size: 0x410 (Inherited: 0x371)
struct ABP_StationGrindstone_C : ANone {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x380(0x08)
	struct USkeletalMeshComponent* SkelMesh; // 0x388(0x08)
	struct TSoftObjectPtr<UStaticMesh> ParentPropMesh; // 0x390(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose; // 0x3b8(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Character; // 0x3e0(0x28)
	struct UStaticMeshComponent* ParentProp; // 0x408(0x08)

	void UserConstructionScript(); // Function BP_StationGrindstone.BP_StationGrindstone_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_StationGrindstone.BP_StationGrindstone_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StationGrindstone(int32_t EntryPoint); // Function BP_StationGrindstone.BP_StationGrindstone_C.ExecuteUbergraph_BP_StationGrindstone // (Final|UbergraphFunction) // @ game+0x38a7480
};

