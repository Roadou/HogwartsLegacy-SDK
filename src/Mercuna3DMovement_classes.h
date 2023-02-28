// Class Mercuna3DMovement.Mercuna3DMovementComponent
// Size: 0x200 (Inherited: 0x150)
struct UMercuna3DMovementComponent : UPawnMovementComponent {
	char pad_150[0x20]; // 0x150(0x20)
	struct FMercuna3DMovementProperties MovementProperties; // 0x170(0x3c)
	char bPositionCorrected : 1; // 0x1ac(0x01)
	char pad_1AC_1 : 7; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	struct FVector PendingImpulseToApply; // 0x1b0(0x0c)
	struct FVector Acceleration; // 0x1bc(0x0c)
	struct FVector AngularVelocity; // 0x1c8(0x0c)
	char pad_1D4[0x1c]; // 0x1d4(0x1c)
	float MaxSimulationTimeStep; // 0x1f0(0x04)
	int32_t MaxSimulationIterations; // 0x1f4(0x04)
	char pad_1F8[0x8]; // 0x1f8(0x08)

	void SetVelocity(struct FVector NewVelocity); // Function Mercuna3DMovement.Mercuna3DMovementComponent.SetVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1b1ef10
	void SetAngularVelocity(struct FVector NewAngVel); // Function Mercuna3DMovement.Mercuna3DMovementComponent.SetAngularVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1b1ee80
	struct FVector GetLocalVelocity(); // Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b1ee40
	struct FRotator GetLocalRotationRate(); // Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalRotationRate // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b1edf0
	void AddImpulse(struct FVector Impulse); // Function Mercuna3DMovement.Mercuna3DMovementComponent.AddImpulse // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1b1ed60
};

// Class Mercuna3DMovement.Mercuna3DMovementInterface
// Size: 0x28 (Inherited: 0x28)
struct UMercuna3DMovementInterface : UInterface {
};

