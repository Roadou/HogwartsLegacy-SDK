// BlueprintGeneratedClass BP_StationStreetPreacherCrowd1P.BP_StationStreetPreacherCrowd1P_C
// Size: 0x431 (Inherited: 0x40c)
struct ABP_StationStreetPreacherCrowd1P_C : ABP_Station_Propless1p_C {
	char pad_40C[0x4]; // 0x40c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x418(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x420(0x08)
	struct USkeletalMeshComponent* SkelMesh_1; // 0x428(0x08)
	bool Occupied; // 0x430(0x01)

	void IsOccupied(bool& Occupied); // Function BP_StationStreetPreacherCrowd1P.BP_StationStreetPreacherCrowd1P_C.IsOccupied // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_StationStreetPreacherCrowd1P.BP_StationStreetPreacherCrowd1P_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetOccupied(bool Occupied); // Function BP_StationStreetPreacherCrowd1P.BP_StationStreetPreacherCrowd1P_C.SetOccupied // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StationStreetPreacherCrowd1P(int32_t EntryPoint); // Function BP_StationStreetPreacherCrowd1P.BP_StationStreetPreacherCrowd1P_C.ExecuteUbergraph_BP_StationStreetPreacherCrowd1P // (Final|UbergraphFunction) // @ game+0x38a7480
};

