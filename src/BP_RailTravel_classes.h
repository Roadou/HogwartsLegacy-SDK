// BlueprintGeneratedClass BP_RailTravel.BP_RailTravel_C
// Size: 0x299 (Inherited: 0x248)
struct ABP_RailTravel_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x250(0x08)
	struct UStaticMeshComponent* CylinderOverlap; // 0x258(0x08)
	struct USplineComponent* Spline; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct TSoftClassPtr<UObject> WingedBoarSoftClass; // 0x270(0x28)
	bool Loaded; // 0x298(0x01)

	void UserConstructionScript(); // Function BP_RailTravel.BP_RailTravel_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_3760AC4F441A6F01D5ACA992D45BFB6A(struct UObject* Loaded); // Function BP_RailTravel.BP_RailTravel_C.OnLoaded_3760AC4F441A6F01D5ACA992D45BFB6A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_RailTravel.BP_RailTravel_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_RailTravel.BP_RailTravel_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_RailTravel.BP_RailTravel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_RailTravel.BP_RailTravel_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_RailTravel(int32_t EntryPoint); // Function BP_RailTravel.BP_RailTravel_C.ExecuteUbergraph_BP_RailTravel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

