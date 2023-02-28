// Class ChaosCloth.ChaosClothConfig
// Size: 0xc8 (Inherited: 0x28)
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float UniformMass; // 0x2c(0x04)
	float TotalMass; // 0x30(0x04)
	float Density; // 0x34(0x04)
	float MinPerParticleMass; // 0x38(0x04)
	float EdgeStiffness; // 0x3c(0x04)
	float BendingStiffness; // 0x40(0x04)
	bool bUseBendingElements; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float AreaStiffness; // 0x48(0x04)
	float VolumeStiffness; // 0x4c(0x04)
	struct FChaosClothWeightedValue TetherStiffness; // 0x50(0x08)
	float LimitScale; // 0x58(0x04)
	bool bUseGeodesicDistance; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float ShapeTargetStiffness; // 0x60(0x04)
	float CollisionThickness; // 0x64(0x04)
	float FrictionCoefficient; // 0x68(0x04)
	bool bUseCCD; // 0x6c(0x01)
	bool bUseSelfCollisions; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	float SelfCollisionThickness; // 0x70(0x04)
	bool bUseLegacyBackstop; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float DampingCoefficient; // 0x78(0x04)
	bool bUsePointBasedWindModel; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float DragCoefficient; // 0x80(0x04)
	float LiftCoefficient; // 0x84(0x04)
	bool bUseGravityOverride; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float GravityScale; // 0x8c(0x04)
	struct FVector Gravity; // 0x90(0x0c)
	float MaxWindSpeed; // 0x9c(0x04)
	struct FChaosClothWeightedValue AnimDriveStiffness; // 0xa0(0x08)
	struct FChaosClothWeightedValue AnimDriveDamping; // 0xa8(0x08)
	struct FVector LinearVelocityScale; // 0xb0(0x0c)
	float AngularVelocityScale; // 0xbc(0x04)
	float FictitiousAngularScale; // 0xc0(0x04)
	bool bUseTetrahedralConstraints; // 0xc4(0x01)
	bool bUseThinShellVolumeConstraints; // 0xc5(0x01)
	bool bUseContinuousCollisionDetection; // 0xc6(0x01)
	char pad_C7[0x1]; // 0xc7(0x01)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x38 (Inherited: 0x28)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x28(0x04)
	int32_t MaxIterationCount; // 0x2c(0x04)
	int32_t SubdivisionCount; // 0x30(0x04)
	bool bUseLocalSpaceSimulation; // 0x34(0x01)
	bool bUseXPBDConstraints; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingInteractor
// Size: 0x40 (Inherited: 0x30)
struct UChaosClothingInteractor : UClothingInteractor {
	char pad_30[0x10]; // 0x30(0x10)

	void SetWindVelocityScale(float WindVelocityScale); // Function ChaosCloth.ChaosClothingInteractor.SetWindVelocityScale // (Final|Native|Public|BlueprintCallable) // @ game+0x17637f0
	void SetVelocityScale(struct FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale); // Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x17636d0
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x17635b0
	void SetLongRangeAttachmentLinear(float TetherStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x1763530
	void SetLongRangeAttachment(struct FVector2D TetherStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x17634b0
	void SetGravity(float GravityScale, bool bIsGravityOverridden, struct FVector GravityOverride); // Function ChaosCloth.ChaosClothingInteractor.SetGravity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1763380
	void SetDamping(float DampingCoefficient); // Function ChaosCloth.ChaosClothingInteractor.SetDamping // (Final|Native|Public|BlueprintCallable) // @ game+0x1763300
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness); // Function ChaosCloth.ChaosClothingInteractor.SetCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x1763190
	void SetAnimDriveLinear(float AnimDriveStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x1763110
	void SetAnimDrive(struct FVector2D AnimDriveStiffness, struct FVector2D AnimDriveDamping); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1763050
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1762f30
	void ResetAndTeleport(bool bReset, bool bTeleport); // Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport // (Final|Native|Public|BlueprintCallable) // @ game+0x1762e60
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0xa0 (Inherited: 0x90)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
	char pad_90[0x10]; // 0x90(0x10)
};

