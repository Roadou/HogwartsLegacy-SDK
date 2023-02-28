// BlueprintGeneratedClass BP_StationStoolTall.BP_StationStoolTall_C
// Size: 0x410 (Inherited: 0x371)
struct ABP_StationStoolTall_C : ABP_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x380(0x08)
	struct UStaticMeshComponent* ParentProp; // 0x388(0x08)
	struct USkeletalMeshComponent* SkelMesh; // 0x390(0x08)
	struct TSoftObjectPtr<UStaticMesh> ParentPropMesh; // 0x398(0x28)
	struct TSoftObjectPtr<UAnimSequence> AnimPose; // 0x3c0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Character; // 0x3e8(0x28)

	void UserConstructionScript(); // Function BP_StationStoolTall.BP_StationStoolTall_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_StationStoolTall.BP_StationStoolTall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StationStoolTall(int32_t EntryPoint); // Function BP_StationStoolTall.BP_StationStoolTall_C.ExecuteUbergraph_BP_StationStoolTall // (Final|UbergraphFunction) // @ game+0x38a7480
};

