// BlueprintGeneratedClass BP_Superposition_Footsteps.BP_Superposition_Footsteps_C
// Size: 0x308 (Inherited: 0x2c1)
struct ABP_Superposition_Footsteps_C : ABP_WE_Superposition_Experience_C {
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct USceneComponent* Scene; // 0x2d0(0x08)
	float WalkSpeed; // 0x2d8(0x04)
	enum class EPhysicalSurface SurfaceType; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UABP_Inferi_CharacterCreator_C* ABPInferiCharacterCreator; // 0x2e0(0x08)
	struct FVector FootstepsDirection; // 0x2e8(0x0c)
	bool IsActive; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	float FootstepFrequency; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FTimerHandle PlayFootstepTimerHandle; // 0x300(0x08)

	void Uninitialise(); // Function BP_Superposition_Footsteps.BP_Superposition_Footsteps_C.Uninitialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetFootstepSocketBehindPlayer(struct UWorldEventSocketComponent*& FootstepSocket); // Function BP_Superposition_Footsteps.BP_Superposition_Footsteps_C.GetFootstepSocketBehindPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartExperience(); // Function BP_Superposition_Footsteps.BP_Superposition_Footsteps_C.StartExperience // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialise(); // Function BP_Superposition_Footsteps.BP_Superposition_Footsteps_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayFootStepImpact(); // Function BP_Superposition_Footsteps.BP_Superposition_Footsteps_C.PlayFootStepImpact // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSurfaceType(enum class EPhysicalSurface SurfaceType); // Function BP_Superposition_Footsteps.BP_Superposition_Footsteps_C.SetSurfaceType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Superposition_Footsteps.BP_Superposition_Footsteps_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_Superposition_Footsteps.BP_Superposition_Footsteps_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Superposition_Footsteps(int32_t EntryPoint); // Function BP_Superposition_Footsteps.BP_Superposition_Footsteps_C.ExecuteUbergraph_BP_Superposition_Footsteps // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

