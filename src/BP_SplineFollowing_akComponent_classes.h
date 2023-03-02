// BlueprintGeneratedClass BP_SplineFollowing_akComponent.BP_SplineFollowing_akComponent_C
// Size: 0x2a0 (Inherited: 0x248)
struct ABP_SplineFollowing_akComponent_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* AkComponent; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct ASlaveToSplineActor* Slave to Spline Actor; // 0x260(0x08)
	struct FVector TargetLocation; // 0x268(0x0c)
	float UpdateTarget_Interval; // 0x274(0x04)
	float SetRTPC_Interval; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FString RTPC_Name; // 0x280(0x10)
	struct FVector2D RTPC_MapRange; // 0x290(0x08)
	struct UAkAudioEvent* AkEvent; // 0x298(0x08)

	void UpdateTarget(); // Function BP_SplineFollowing_akComponent.BP_SplineFollowing_akComponent_C.UpdateTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SplineFollowing_akComponent.BP_SplineFollowing_akComponent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SetRTPC_OnTargetVelocity(); // Function BP_SplineFollowing_akComponent.BP_SplineFollowing_akComponent_C.SetRTPC_OnTargetVelocity // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SplineFollowing_akComponent.BP_SplineFollowing_akComponent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SplineFollowing_akComponent(int32_t EntryPoint); // Function BP_SplineFollowing_akComponent.BP_SplineFollowing_akComponent_C.ExecuteUbergraph_BP_SplineFollowing_akComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

