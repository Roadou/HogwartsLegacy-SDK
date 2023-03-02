// BlueprintGeneratedClass BP_WE_Ghost_Duel.BP_WE_Ghost_Duel_C
// Size: 0x338 (Inherited: 0x280)
struct ABP_WE_Ghost_Duel_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct TArray<struct ASceneRigActor*> SceneRigActors; // 0x290(0x10)
	struct FSceneRigParameters GregoryStabGarethParameters; // 0x2a0(0x88)
	struct ASceneRigActor* CurrentSceneRigActor; // 0x328(0x08)
	struct UWorldEventSocketComponent* StartTriggerSocket; // 0x330(0x08)

	void ReceiveBeginPlay(); // Function BP_WE_Ghost_Duel.BP_WE_Ghost_Duel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_Ghost_Duel.BP_WE_Ghost_Duel_C.OnComponentBeginOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_Ghost_Duel(int32_t EntryPoint); // Function BP_WE_Ghost_Duel.BP_WE_Ghost_Duel_C.ExecuteUbergraph_BP_WE_Ghost_Duel // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

