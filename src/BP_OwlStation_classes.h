// BlueprintGeneratedClass BP_OwlStation.BP_OwlStation_C
// Size: 0x390 (Inherited: 0x371)
struct ABP_OwlStation_C : ABP_Station_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UStaticMeshComponent* Mail; // 0x380(0x08)
	struct UChildActorComponent* ChildActor; // 0x388(0x08)

	void SetOwlVisible(bool Visible); // Function BP_OwlStation.BP_OwlStation_C.SetOwlVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_OwlStation.BP_OwlStation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetMailOwlVisibility(struct UObject* Caller, int32_t int); // Function BP_OwlStation.BP_OwlStation_C.SetMailOwlVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_OwlStation(int32_t EntryPoint); // Function BP_OwlStation.BP_OwlStation_C.ExecuteUbergraph_BP_OwlStation // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

