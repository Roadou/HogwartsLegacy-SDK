// BlueprintGeneratedClass FL_PhoenixCameraBPLibrary.FL_PhoenixCameraBPLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UFL_PhoenixCameraBPLibrary_C : UBlueprintFunctionLibrary {

	void CameraSmoothOutDetachPop(struct AActor* TargetActor, float Duration, struct UObject* __WorldContext); // Function FL_PhoenixCameraBPLibrary.FL_PhoenixCameraBPLibrary_C.CameraSmoothOutDetachPop // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CameraSmoothOutTeleport(struct AActor* TargetActor, float Duration, struct UObject* __WorldContext); // Function FL_PhoenixCameraBPLibrary.FL_PhoenixCameraBPLibrary_C.CameraSmoothOutTeleport // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CameraRemoveBehavior(struct AActor* TargetActor, struct UCameraStackBehavior* Behavior, float BlendOutDuration, struct UObject* __WorldContext); // Function FL_PhoenixCameraBPLibrary.FL_PhoenixCameraBPLibrary_C.CameraRemoveBehavior // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CameraMoveToFutureTeleportLocation(struct AActor* TargetActor, struct FVector TargetWorldLocation, float TimeUntilTeleport, struct UObject* __WorldContext, struct UCameraStackBehavior*& Behavior); // Function FL_PhoenixCameraBPLibrary.FL_PhoenixCameraBPLibrary_C.CameraMoveToFutureTeleportLocation // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

