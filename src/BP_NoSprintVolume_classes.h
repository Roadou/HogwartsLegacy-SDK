// BlueprintGeneratedClass BP_NoSprintVolume.BP_NoSprintVolume_C
// Size: 0x258 (Inherited: 0x248)
struct ABP_NoSprintVolume_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)

	void SetContextOnActor(struct AActor* InActor, bool InFlag); // Function BP_NoSprintVolume.BP_NoSprintVolume_C.SetContextOnActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_NoSprintVolume.BP_NoSprintVolume_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_NoSprintVolume.BP_NoSprintVolume_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_NoSprintVolume.BP_NoSprintVolume_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_NoSprintVolume(int32_t EntryPoint); // Function BP_NoSprintVolume.BP_NoSprintVolume_C.ExecuteUbergraph_BP_NoSprintVolume // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

