// BlueprintGeneratedClass BP_Shadow_Projection_Wolf_Run.BP_Shadow_Projection_Wolf_Run_C
// Size: 0x310 (Inherited: 0x2f1)
struct ABP_Shadow_Projection_Wolf_Run_C : ABP_Shadow_Projector_C {
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	float Speed; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct UBoxComponent* TriggerCollider; // 0x308(0x08)

	void SetRandomSpawnPosition(); // Function BP_Shadow_Projection_Wolf_Run.BP_Shadow_Projection_Wolf_Run_C.SetRandomSpawnPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Shadow_Projection_Wolf_Run.BP_Shadow_Projection_Wolf_Run_C.OnBeginOverlap // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Uninitialise(); // Function BP_Shadow_Projection_Wolf_Run.BP_Shadow_Projection_Wolf_Run_C.Uninitialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialise(); // Function BP_Shadow_Projection_Wolf_Run.BP_Shadow_Projection_Wolf_Run_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Shadow_Projection_Wolf_Run.BP_Shadow_Projection_Wolf_Run_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Shadow_Projection_Wolf_Run.BP_Shadow_Projection_Wolf_Run_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExperienceEnded(); // Function BP_Shadow_Projection_Wolf_Run.BP_Shadow_Projection_Wolf_Run_C.ExperienceEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Shadow_Projection_Wolf_Run(int32_t EntryPoint); // Function BP_Shadow_Projection_Wolf_Run.BP_Shadow_Projection_Wolf_Run_C.ExecuteUbergraph_BP_Shadow_Projection_Wolf_Run // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

