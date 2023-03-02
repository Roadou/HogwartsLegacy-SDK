// BlueprintGeneratedClass BP_dugbogEatDeer.BP_dugbogEatDeer_C
// Size: 0x310 (Inherited: 0x280)
struct ABP_dugbogEatDeer_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* dugbog_elk_attack; // 0x288(0x08)
	struct UNiagaraComponent* NiagaraDeerWake; // 0x290(0x08)
	struct UParticleSystemComponent* ParticleSystem_Splash; // 0x298(0x08)
	struct UStaticMeshComponent* DeerCube; // 0x2a0(0x08)
	struct UStaticMeshComponent* BubbleLocation_Cube; // 0x2a8(0x08)
	struct UNiagaraComponent* Niagara_DugBogWake; // 0x2b0(0x08)
	struct UStaticMeshComponent* WakeCubeCube; // 0x2b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c0(0x08)
	struct FVector Wake_FX_DeerDrag_30B96C4A429BBFCFA82ADFA6F2F024AC; // 0x2c8(0x0c)
	struct FVector Wake_FX_Wake_Cube_Move_30B96C4A429BBFCFA82ADFA6F2F024AC; // 0x2d4(0x0c)
	enum class ETimelineDirection Wake_FX__Direction_30B96C4A429BBFCFA82ADFA6F2F024AC; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct UTimelineComponent* Wake_FX; // 0x2e8(0x08)
	bool isReplayable; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct ASceneRigActor* DugbogDeerSR; // 0x2f8(0x08)
	struct UWorldEventSocketComponent* StartTriggerSocket; // 0x300(0x08)
	struct ATriggerBox* DefaultBoxTrigger; // 0x308(0x08)

	void Wake_FX__FinishedFunc(); // Function BP_dugbogEatDeer.BP_dugbogEatDeer_C.Wake_FX__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Wake_FX__UpdateFunc(); // Function BP_dugbogEatDeer.BP_dugbogEatDeer_C.Wake_FX__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Wake_FX__SpawnDeerWake__EventFunc(); // Function BP_dugbogEatDeer.BP_dugbogEatDeer_C.Wake_FX__SpawnDeerWake__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void Wake_FX__EndBubbles__EventFunc(); // Function BP_dugbogEatDeer.BP_dugbogEatDeer_C.Wake_FX__EndBubbles__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_dugbogEatDeer.BP_dugbogEatDeer_C.OnComponentBeginOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_dugbogEatDeer.BP_dugbogEatDeer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_dugbogEatDeer(int32_t EntryPoint); // Function BP_dugbogEatDeer.BP_dugbogEatDeer_C.ExecuteUbergraph_BP_dugbogEatDeer // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

