// BlueprintGeneratedClass BP_GobMine_Generator_A.BP_GobMine_Generator_A_C
// Size: 0x291 (Inherited: 0x248)
struct ABP_GobMine_Generator_A_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USkeletalMeshComponent* SK_GobMine_Generator_Gear_A; // 0x250(0x08)
	struct UAkComponent* Ak_BP_GobMine_Generator_A; // 0x258(0x08)
	struct UObjectStateComponent* ObjectState; // 0x260(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x268(0x08)
	struct UStaticMeshComponent* StaticMeshComponent3; // 0x270(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x278(0x08)
	struct UStaticMeshComponent* StaticMeshComponent2; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	bool bIsMachineTurnedOff; // 0x290(0x01)

	void UserConstructionScript(); // Function BP_GobMine_Generator_A.BP_GobMine_Generator_A_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GobMine_Generator_A.BP_GobMine_Generator_A_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ActivateMachine(); // Function BP_GobMine_Generator_A.BP_GobMine_Generator_A_C.ActivateMachine // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GobMine_Generator_A(int32_t EntryPoint); // Function BP_GobMine_Generator_A.BP_GobMine_Generator_A_C.ExecuteUbergraph_BP_GobMine_Generator_A // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

