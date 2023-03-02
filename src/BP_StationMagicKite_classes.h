// BlueprintGeneratedClass BP_StationMagicKite.BP_StationMagicKite_C
// Size: 0x3a9 (Inherited: 0x371)
struct ABP_StationMagicKite_C : ABP_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UBP_WorldEvent_DropActorToGround_C* BP_WorldEvent_DropActorToGround; // 0x380(0x08)
	struct UArrowComponent* Arrow; // 0x388(0x08)
	struct UStationArchitectComponent* StationArchitect; // 0x390(0x08)
	struct USkeletalMeshComponent* SkelMesh; // 0x398(0x08)
	struct ABP_WE_MagicKiteBattle_C* EventManager; // 0x3a0(0x08)
	bool IsPlayerStation; // 0x3a8(0x01)

	void InteractionInitiated(struct UObject* Caller); // Function BP_StationMagicKite.BP_StationMagicKite_C.InteractionInitiated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_StationMagicKite.BP_StationMagicKite_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StationMagicKite(int32_t EntryPoint); // Function BP_StationMagicKite.BP_StationMagicKite_C.ExecuteUbergraph_BP_StationMagicKite // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

