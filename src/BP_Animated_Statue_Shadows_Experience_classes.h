// BlueprintGeneratedClass BP_Animated_Statue_Shadows_Experience.BP_Animated_Statue_Shadows_Experience_C
// Size: 0x2e4 (Inherited: 0x2c1)
struct ABP_Animated_Statue_Shadows_Experience_C : ABP_WE_Superposition_Experience_C {
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2d0(0x08)
	struct UBoxComponent* BoxCollision; // 0x2d8(0x08)
	int32_t TriggerAttackChance; // 0x2e0(0x04)

	void Uninitialise(); // Function BP_Animated_Statue_Shadows_Experience.BP_Animated_Statue_Shadows_Experience_C.Uninitialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Animated_Statue_Shadows_Experience.BP_Animated_Statue_Shadows_Experience_C.OnBeginOverlap // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialise(); // Function BP_Animated_Statue_Shadows_Experience.BP_Animated_Statue_Shadows_Experience_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Animated_Statue_Shadows_Experience.BP_Animated_Statue_Shadows_Experience_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Animated_Statue_Shadows_Experience(int32_t EntryPoint); // Function BP_Animated_Statue_Shadows_Experience.BP_Animated_Statue_Shadows_Experience_C.ExecuteUbergraph_BP_Animated_Statue_Shadows_Experience // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

