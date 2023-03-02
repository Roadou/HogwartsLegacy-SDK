// BlueprintGeneratedClass BP_GoblinDrillDebris.BP_GoblinDrillDebris_C
// Size: 0x2b2 (Inherited: 0x248)
struct ABP_GoblinDrillDebris_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_DebrisB2; // 0x250(0x08)
	struct UStaticMeshComponent* SM_DebrisC2; // 0x258(0x08)
	struct UStaticMeshComponent* SM_DebrisE2; // 0x260(0x08)
	struct UStaticMeshComponent* SM_DebrisD1; // 0x268(0x08)
	struct UStaticMeshComponent* SM_DebrisA1; // 0x270(0x08)
	struct UStaticMeshComponent* SM_DebrisF1; // 0x278(0x08)
	struct UCogTargetAimSceneComponent* Debris; // 0x280(0x08)
	struct UStaticMeshComponent* SM_DebrisC1; // 0x288(0x08)
	struct UStaticMeshComponent* SM_DebrisB1; // 0x290(0x08)
	struct UStaticMeshComponent* SM_DebrisE1; // 0x298(0x08)
	struct USceneComponent* DebrisWithFire; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	bool TuneFX; // 0x2b0(0x01)
	bool StartOnBeginPlay; // 0x2b1(0x01)

	void ReceiveBeginPlay(); // Function BP_GoblinDrillDebris.BP_GoblinDrillDebris_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StartFires(); // Function BP_GoblinDrillDebris.BP_GoblinDrillDebris_C.StartFires // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GoblinDrillDebris(int32_t EntryPoint); // Function BP_GoblinDrillDebris.BP_GoblinDrillDebris_C.ExecuteUbergraph_BP_GoblinDrillDebris // (Final|UbergraphFunction) // @ game+0x38a7480
};

