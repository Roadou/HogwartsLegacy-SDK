// BlueprintGeneratedClass BP_WE_Fireworks.BP_WE_Fireworks_C
// Size: 0x3a5 (Inherited: 0x280)
struct ABP_WE_Fireworks_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ABP_Station_C* Player Station; // 0x290(0x08)
	struct ABP_Station_C* Firework Station; // 0x298(0x08)
	struct ABP_Station_C* Spectate Station; // 0x2a0(0x08)
	float Timeout Duration; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct AFocusTrigger* FocusTrigger; // 0x2b0(0x08)
	struct FTimerHandle TimoutHandle; // 0x2b8(0x08)
	struct UScheduledEntity* Firework Student; // 0x2c0(0x08)
	struct UScheduledEntity* Spectator Student; // 0x2c8(0x08)
	bool EventTimedOut; // 0x2d0(0x01)
	bool PlayerParticipating; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct FHermesBPDelegateHandle StationFinishedEnterHandle; // 0x2d8(0x10)
	struct FHermesBPDelegateHandle StationFinishedExitHandle; // 0x2e8(0x10)
	struct TMap<struct USkeletalMeshComponent*, bool> AnimNotifyFloodgate dictionary; // 0x2f8(0x50)
	enum class HouseIds Firework Student House; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct TMap<struct UNiagaraSystem*, struct FTransform> Niagara Fireworks (with offsets); // 0x350(0x50)
	int32_t StudentsSpawned; // 0x3a0(0x04)
	bool SpawnSpectator; // 0x3a4(0x01)

	void Select Niagara System(int32_t Cast Type, struct USkeletalMeshComponent* Sk mesh ref, struct UNiagaraSystem*& Niagara System, struct FTransform& Offset); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.Select Niagara System // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TryTearDownEvent(bool Force); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.TryTearDownEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCheeringStudentExitStation(); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.OnCheeringStudentExitStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnFireworkStudentExitStation(); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.OnFireworkStudentExitStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FireworksTimeout(); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.FireworksTimeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EvacuateStation(struct UScheduledEntity* Student, struct ABP_Station_C* Station, struct FDelegate& Event); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.EvacuateStation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spawn Hobo In Station(bool Spectator?); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.Spawn Hobo In Station // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void [WE_Fireworks] Cast Fireworks FX(int32_t CastType, bool Block FX?, struct USkeletalMeshComponent* Attach ref); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.[WE_Fireworks] Cast Fireworks FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AnimNotifyFloodgate(struct USkeletalMeshComponent* Sk mesh ref); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.AnimNotifyFloodgate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Fireworks(int32_t EntryPoint); // Function BP_WE_Fireworks.BP_WE_Fireworks_C.ExecuteUbergraph_BP_WE_Fireworks // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

