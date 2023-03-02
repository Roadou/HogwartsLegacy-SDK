// BlueprintGeneratedClass BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C
// Size: 0x2fc (Inherited: 0x280)
struct ABP_WE_LetsJustStayHere_scene_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UBoxComponent* Trigger_Volume; // 0x288(0x08)
	struct UChildActorComponent* Ghost_A; // 0x290(0x08)
	struct UChildActorComponent* Ghost_B; // 0x298(0x08)
	struct USceneComponent* Scene; // 0x2a0(0x08)
	struct FVector Trigger box extent; // 0x2a8(0x0c)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct USkeletalMeshComponent* SK_GhostB; // 0x2b8(0x08)
	struct USkeletalMeshComponent* SK_GhostA; // 0x2c0(0x08)
	struct AActor* GhostActor A actor ref; // 0x2c8(0x08)
	struct AActor* GhostActor B actor ref; // 0x2d0(0x08)
	struct TArray<float> DescentSpeedModifier; // 0x2d8(0x10)
	struct FDateTime Date at event spawn; // 0x2e8(0x08)
	bool Sunset?; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float TimeBeforeEventFinish; // 0x2f4(0x04)
	float TimeBeforeEventFinish (Player Near Event); // 0x2f8(0x04)

	void EventTimeout(); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.EventTimeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Destroy Dancer(bool Ghost Actor A or B?); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.Destroy Dancer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Notify dancer of partner readiness(bool Ghost Actor A or B?); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.Notify dancer of partner readiness // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FDateTime date at event spawn(); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.date at event spawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Check whether morning or evening(); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.Check whether morning or evening // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Anim BP(); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.Set Anim BP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Unregister actors from Interact sense(); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.Unregister actors from Interact sense // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DayNightMoonEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, enum class EMoonPhaseName Phase, bool bLate); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.DayNightMoonEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DayNightSunEvent(struct UDayNightMasterComponent* DayNightMaster, struct FName EventName, struct FSolarNormalizedTime NormalizedTime, struct FDateTime GameTime, enum class EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.DayNightSunEvent // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_LetsJustStayHere_scene(int32_t EntryPoint); // Function BP_WE_LetsJustStayHere_scene.BP_WE_LetsJustStayHere_scene_C.ExecuteUbergraph_BP_WE_LetsJustStayHere_scene // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

