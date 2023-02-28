// BlueprintGeneratedClass BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C
// Size: 0x2a0 (Inherited: 0x248)
struct ABP_HW_GrandfatherClock_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UStaticMeshComponent* Clock; // 0x258(0x08)
	struct UStaticMeshComponent* Pendulum; // 0x260(0x08)
	float PendulumAnim_C_ClocktowerPendulum_661AB98C4790E4EDE7C66C9E5016A889; // 0x268(0x04)
	enum class ETimelineDirection PendulumAnim__Direction_661AB98C4790E4EDE7C66C9E5016A889; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* PendulumAnim; // 0x270(0x08)
	struct FRotator InitialPendulumRot; // 0x278(0x0c)
	struct FRotator EndPendulumRot; // 0x284(0x0c)
	float TimeDilation; // 0x290(0x04)
	float PendulumTime; // 0x294(0x04)
	struct UCurveFloat* PendulumCurve; // 0x298(0x08)

	bool DisallowArrestoMomentum(); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.DisallowArrestoMomentum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PendulumAnim__FinishedFunc(); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.PendulumAnim__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void PendulumAnim__UpdateFunc(); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.PendulumAnim__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumBegin(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.OnArrestoMomentumBegin // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnArrestoMomentumEnd(struct AActor* Instigator, struct UArrestoMomentumComponent* ArrestoMomentumComponent); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.OnArrestoMomentumEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_GrandfatherClock(int32_t EntryPoint); // Function BP_HW_GrandfatherClock.BP_HW_GrandfatherClock_C.ExecuteUbergraph_BP_HW_GrandfatherClock // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

