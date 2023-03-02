// BlueprintGeneratedClass BP_Shadow_Human_Still.BP_Shadow_Human_Still_C
// Size: 0x308 (Inherited: 0x2f1)
struct ABP_Shadow_Human_Still_C : ABP_Shadow_Projector_C {
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UBoxComponent* TriggerCollider; // 0x300(0x08)

	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Shadow_Human_Still.BP_Shadow_Human_Still_C.OnBeginOverlap // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Uninitialise(); // Function BP_Shadow_Human_Still.BP_Shadow_Human_Still_C.Uninitialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialise(); // Function BP_Shadow_Human_Still.BP_Shadow_Human_Still_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Shadow_Human_Still.BP_Shadow_Human_Still_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Shadow_Human_Still(int32_t EntryPoint); // Function BP_Shadow_Human_Still.BP_Shadow_Human_Still_C.ExecuteUbergraph_BP_Shadow_Human_Still // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

