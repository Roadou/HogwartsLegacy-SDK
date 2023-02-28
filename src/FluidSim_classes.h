// Class FluidSim.FluidSimComponent
// Size: 0x2c0 (Inherited: 0x220)
struct UFluidSimComponent : USceneComponent {
	struct FFluidSimParams FluidSimParams; // 0x218(0x88)
	struct UTexture2D* ColorMap; // 0x2a0(0x08)
	char pad_2B0[0x10]; // 0x2b0(0x10)

	void SetVorticityTrails(float VorticityTrailsIn); // Function FluidSim.FluidSimComponent.SetVorticityTrails // (Final|Native|Public|BlueprintCallable) // @ game+0x1374af0
	void SetVorticity(float VorticityIn); // Function FluidSim.FluidSimComponent.SetVorticity // (Final|Native|Public|BlueprintCallable) // @ game+0x1374a70
	void SetVolumeScale(struct FVector VolumeScaleIn); // Function FluidSim.FluidSimComponent.SetVolumeScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x13749e0
	void SetVolumeMotion(bool VolumeMotionIn); // Function FluidSim.FluidSimComponent.SetVolumeMotion // (Final|Native|Public|BlueprintCallable) // @ game+0x1374950
	void SetVelocityDissipation(float VelocityDissipationIn); // Function FluidSim.FluidSimComponent.SetVelocityDissipation // (Final|Native|Public|BlueprintCallable) // @ game+0x13748d0
	void SetTimeStep(float TimeStepIn); // Function FluidSim.FluidSimComponent.SetTimeStep // (Final|Native|Public|BlueprintCallable) // @ game+0x1374850
	void SetSourceDissipation(float SourceDissipationIn); // Function FluidSim.FluidSimComponent.SetSourceDissipation // (Final|Native|Public|BlueprintCallable) // @ game+0x13747d0
	void SetMotionVectorStrength(float MotionVectorStrengthIn); // Function FluidSim.FluidSimComponent.SetMotionVectorStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x1374650
	void SetFadeEdges(bool FadeEdgesIn); // Function FluidSim.FluidSimComponent.SetFadeEdges // (Final|Native|Public|BlueprintCallable) // @ game+0x13745c0
	void SetEnabled(bool EnabledIn); // Function FluidSim.FluidSimComponent.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1374530
	void SetDrawDebugBounds(bool DrawDebugBoundsIn); // Function FluidSim.FluidSimComponent.SetDrawDebugBounds // (Final|Native|Public|BlueprintCallable) // @ game+0x1374260
	void SetDensity(float DensityIn); // Function FluidSim.FluidSimComponent.SetDensity // (Final|Native|Public|BlueprintCallable) // @ game+0x13741e0
	void SetComputeDimensions(struct FVector ComputeDimensionsIn); // Function FluidSim.FluidSimComponent.SetComputeDimensions // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1374150
	void SetColorIntensity(float ColorIntensityIn); // Function FluidSim.FluidSimComponent.SetColorIntensity // (Final|Native|Public|BlueprintCallable) // @ game+0x13740d0
	void SetColorCurveScale(float ColorCurveScaleIn); // Function FluidSim.FluidSimComponent.SetColorCurveScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1374050
	void SetColorCurve(struct UCurveLinearColor* ColorCurveIn); // Function FluidSim.FluidSimComponent.SetColorCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x1373fc0
	void SetBuoyancyGravity(struct FVector BuoyancyGravityIn); // Function FluidSim.FluidSimComponent.SetBuoyancyGravity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1373f30
	float GetVorticityTrails(); // Function FluidSim.FluidSimComponent.GetVorticityTrails // (Final|Native|Public|BlueprintCallable) // @ game+0x1373f10
	float GetVorticity(); // Function FluidSim.FluidSimComponent.GetVorticity // (Final|Native|Public|BlueprintCallable) // @ game+0x1373ef0
	struct FVector GetVolumeScale(); // Function FluidSim.FluidSimComponent.GetVolumeScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1373ec0
	bool GetVolumeMotion(); // Function FluidSim.FluidSimComponent.GetVolumeMotion // (Final|Native|Public|BlueprintCallable) // @ game+0x1373ea0
	float GetVelocityDissipation(); // Function FluidSim.FluidSimComponent.GetVelocityDissipation // (Final|Native|Public|BlueprintCallable) // @ game+0x1373e80
	float GetTimeStep(); // Function FluidSim.FluidSimComponent.GetTimeStep // (Final|Native|Public|BlueprintCallable) // @ game+0x1373e60
	float GetMotionVectorStrength(); // Function FluidSim.FluidSimComponent.GetMotionVectorStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x1373e00
	bool GetFadeEdges(); // Function FluidSim.FluidSimComponent.GetFadeEdges // (Final|Native|Public|BlueprintCallable) // @ game+0x1373de0
	bool GetEnabled(); // Function FluidSim.FluidSimComponent.GetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1373dc0
	bool GetDrawDebugBounds(); // Function FluidSim.FluidSimComponent.GetDrawDebugBounds // (Final|Native|Public|BlueprintCallable) // @ game+0x1373d30
	float GetDensity(); // Function FluidSim.FluidSimComponent.GetDensity // (Final|Native|Public|BlueprintCallable) // @ game+0x1373d10
	struct FVector GetComputeDimensions(); // Function FluidSim.FluidSimComponent.GetComputeDimensions // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1373ce0
	float GetColorIntensity(); // Function FluidSim.FluidSimComponent.GetColorIntensity // (Final|Native|Public|BlueprintCallable) // @ game+0x1373cc0
	float GetColorCurveScale(); // Function FluidSim.FluidSimComponent.GetColorCurveScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1373ca0
	struct UCurveLinearColor* GetColorCurve(); // Function FluidSim.FluidSimComponent.GetColorCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x1373c80
	struct FVector GetBuoyancyGravity(); // Function FluidSim.FluidSimComponent.GetBuoyancyGravity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1373c50
};

// Class FluidSim.FluidSimEmitterComponent
// Size: 0x550 (Inherited: 0x510)
struct UFluidSimEmitterComponent : UStaticMeshComponent {
	struct FFluidSimEmitterParams EmitterParams; // 0x510(0x40)

	void SetMotionVectorStrength(float MotionVectorStrengthIn); // Function FluidSim.FluidSimEmitterComponent.SetMotionVectorStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x13746d0
	void SetEmitterPos(struct FVector4& EmitterPosIn); // Function FluidSim.FluidSimEmitterComponent.SetEmitterPos // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1374490
	void SetEmitterMultiplier(float EmitterMultiplierIn); // Function FluidSim.FluidSimEmitterComponent.SetEmitterMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x1374410
	void SetEmitterDir(struct FVector4& EmitterDirIn); // Function FluidSim.FluidSimEmitterComponent.SetEmitterDir // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1374370
	void SetEmitterBias(float EmitterBiasIn); // Function FluidSim.FluidSimEmitterComponent.SetEmitterBias // (Final|Native|Public|BlueprintCallable) // @ game+0x13742f0
	float GetMotionVectorStrength(); // Function FluidSim.FluidSimEmitterComponent.GetMotionVectorStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x1373e20
	float GetEmitterMultiplier(); // Function FluidSim.FluidSimEmitterComponent.GetEmitterMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x1373da0
	struct FVector4 GetEmitterDir(); // Function FluidSim.FluidSimEmitterComponent.GetEmitterDir // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1373d70
	float GetEmitterBias(); // Function FluidSim.FluidSimEmitterComponent.GetEmitterBias // (Final|Native|Public|BlueprintCallable) // @ game+0x1373d50
};

// Class FluidSim.FluidSimRadialForceComponent
// Size: 0x4b0 (Inherited: 0x4a0)
struct UFluidSimRadialForceComponent : USphereComponent {
	float Force; // 0x4a0(0x04)
	char pad_4A4[0xc]; // 0x4a4(0x0c)

	void SetRadialForce(float ForceIn); // Function FluidSim.FluidSimRadialForceComponent.SetRadialForce // (Final|Native|Public|BlueprintCallable) // @ game+0x1374750
	float GetRadialForce(); // Function FluidSim.FluidSimRadialForceComponent.GetRadialForce // (Final|Native|Public|BlueprintCallable) // @ game+0x1373e40
};

// Class FluidSim.FluidSimActor
// Size: 0x258 (Inherited: 0x248)
struct AFluidSimActor : AActor {
	struct UFluidSimComponent* FluidSimComponent; // 0x248(0x08)
	struct UFluidSimEmitterComponent* FluidSimEmitter; // 0x250(0x08)
};

// Class FluidSim.VectorFieldFluidSim
// Size: 0x60 (Inherited: 0x48)
struct UVectorFieldFluidSim : UVectorField {
	int32_t SizeX; // 0x48(0x04)
	int32_t SizeY; // 0x4c(0x04)
	int32_t SizeZ; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
};

// Class FluidSim.VectorFieldFluidSimComponent
// Size: 0x500 (Inherited: 0x4b0)
struct UVectorFieldFluidSimComponent : UVectorFieldComponent {
	char pad_4B0[0x40]; // 0x4b0(0x40)
	struct UVectorFieldFluidSim* FluidSimVectorField; // 0x4f0(0x08)
	char pad_4F8[0x8]; // 0x4f8(0x08)
};

// Class FluidSim.FluidSimBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFluidSimBlueprintLibrary : UBlueprintFunctionLibrary {
};

