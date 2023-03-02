// BlueprintGeneratedClass BP_WE_LateNightStudy.BP_WE_LateNightStudy_C
// Size: 0x368 (Inherited: 0x280)
struct ABP_WE_LateNightStudy_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UPointLightComponent* PointLight; // 0x288(0x08)
	struct USceneComponent* Marker2; // 0x290(0x08)
	struct USceneComponent* Marker1; // 0x298(0x08)
	struct USceneComponent* Marker0; // 0x2a0(0x08)
	struct UChildActorComponent* MainBook; // 0x2a8(0x08)
	struct UStaticMeshComponent* WandMesh; // 0x2b0(0x08)
	struct UChildActorComponent* PropSet; // 0x2b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c0(0x08)
	int32_t SittingVariation; // 0x2c8(0x04)
	float Light Intensity; // 0x2cc(0x04)
	struct FDynamicLightAdaptationSettings Adaptive Light Settings; // 0x2d0(0x60)
	struct FTimerHandle TimerHandle; // 0x330(0x08)
	struct AActor* ActorRef; // 0x338(0x08)
	struct ABP_Station_C* Study Station ref; // 0x340(0x08)
	struct UScheduledEntity* StudentHobo ref; // 0x348(0x08)
	struct UWorldEventManager* WorldEventManager; // 0x350(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> Prop Set Array; // 0x358(0x10)

	void Remove Wand Prop(); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.Remove Wand Prop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Finish Book Prop(); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.Finish Book Prop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Put Hobo in Station(struct UScheduledEntity* Hobo ref, struct ABP_Station_C* Station ref, struct FString Station Action, bool Teleport to Station?); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.Put Hobo in Station // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Start Book Prop(); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.Start Book Prop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Attach Wand to Hand(struct AActor* Actor); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.Attach Wand to Hand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Sitting Variation(); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.Set Sitting Variation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Evacuate station(); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.Evacuate station // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spawn Student Hobo(enum class HouseIds InHouse); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.Spawn Student Hobo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_B1A4A52248EDC66B4DAA428CE6762823(struct UObject* Loaded); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.OnLoaded_B1A4A52248EDC66B4DAA428CE6762823 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnFleshCreated(struct AActor* Actor, struct UScheduledEntity* ScheduledEntity); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.OnFleshCreated // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_LateNightStudy(int32_t EntryPoint); // Function BP_WE_LateNightStudy.BP_WE_LateNightStudy_C.ExecuteUbergraph_BP_WE_LateNightStudy // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

