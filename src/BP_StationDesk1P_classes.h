// BlueprintGeneratedClass BP_StationDesk1P.BP_StationDesk1P_C
// Size: 0x3a0 (Inherited: 0x371)
struct ABP_StationDesk1P_C : ABP_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStaticMeshComponent* SM_Desk_GRF; // 0x380(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x388(0x08)
	bool HasDesk?; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UStaticMesh* DeskMesh; // 0x398(0x08)

	void UserConstructionScript(); // Function BP_StationDesk1P.BP_StationDesk1P_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_StationDesk1P.BP_StationDesk1P_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__SM_Desk_GRF_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_StationDesk1P.BP_StationDesk1P_C.BndEvt__SM_Desk_GRF_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StationDesk1P(int32_t EntryPoint); // Function BP_StationDesk1P.BP_StationDesk1P_C.ExecuteUbergraph_BP_StationDesk1P // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

