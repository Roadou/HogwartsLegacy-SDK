// Class FieldSystemEngine.FieldSystemActor
// Size: 0x250 (Inherited: 0x248)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x248(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x550 (Inherited: 0x480)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x480(0x08)
	bool bIsWorldField; // 0x488(0x01)
	bool bIsChaosField; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x490(0x10)
	struct FFieldObjectCommands ConstructionCommands; // 0x4a0(0x30)
	struct FFieldObjectCommands BufferCommands; // 0x4d0(0x30)
	char pad_500[0x50]; // 0x500(0x50)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x4d2c670
	void RemovePersistentFields(); // Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields // (Final|Native|Public|BlueprintCallable) // @ game+0x4d2c650
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4d2c490
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4d2c2c0
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4d2c190
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4d2c000
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4d2bed0
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x4d2bd70
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4d2bc40
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField // (Final|Native|Public|BlueprintCallable) // @ game+0x4d2bae0
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x4d2b980
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xc8 (Inherited: 0xc8)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xd0 (Inherited: 0xc8)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t iterations; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2ca80
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xd0 (Inherited: 0xc8)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2c9f0
};

// Class FieldSystemEngine.FieldSystemMetaDataFilter
// Size: 0xd0 (Inherited: 0xc8)
struct UFieldSystemMetaDataFilter : UFieldSystemMetaData {
	enum class EFieldFilterType FilterType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType); // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2c9f0
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xc8 (Inherited: 0xc8)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xc8 (Inherited: 0xc8)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xc8 (Inherited: 0xc8)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xc8 (Inherited: 0xc8)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xd0 (Inherited: 0xc8)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2ca80
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xe8 (Inherited: 0xc8)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xc8(0x04)
	struct FVector Position; // 0xcc(0x0c)
	int32_t InteriorValue; // 0xd8(0x04)
	int32_t ExteriorValue; // 0xdc(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4d2d300
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xd0 (Inherited: 0xc8)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2d5d0
};

// Class FieldSystemEngine.WaveScalar
// Size: 0xe8 (Inherited: 0xc8)
struct UWaveScalar : UFieldNodeFloat {
	float Magnitude; // 0xc8(0x04)
	struct FVector Position; // 0xcc(0x0c)
	float Wavelength; // 0xd8(0x04)
	float Period; // 0xdc(0x04)
	enum class EWaveFunctionType Function; // 0xe0(0x01)
	enum class EFieldFalloffType Falloff; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)

	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector Position, float Wavelength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.WaveScalar.SetWaveScalar // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4d2d730
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0xf0 (Inherited: 0xc8)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xc8(0x04)
	float MinRange; // 0xcc(0x04)
	float MaxRange; // 0xd0(0x04)
	float Default; // 0xd4(0x04)
	float Radius; // 0xd8(0x04)
	struct FVector Position; // 0xdc(0x0c)
	enum class EFieldFalloffType Falloff; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4d2d0b0
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0xf8 (Inherited: 0xc8)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xc8(0x04)
	float MinRange; // 0xcc(0x04)
	float MaxRange; // 0xd0(0x04)
	float Default; // 0xd4(0x04)
	float Distance; // 0xd8(0x04)
	struct FVector Position; // 0xdc(0x0c)
	struct FVector Normal; // 0xe8(0x0c)
	enum class EFieldFalloffType Falloff; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4d2ce10
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x120 (Inherited: 0xc8)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xc8(0x04)
	float MinRange; // 0xcc(0x04)
	float MaxRange; // 0xd0(0x04)
	float Default; // 0xd4(0x04)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FTransform Transform; // 0xe0(0x30)
	enum class EFieldFalloffType Falloff; // 0x110(0x01)
	char pad_111[0xf]; // 0x111(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4d2c690
};

// Class FieldSystemEngine.NoiseField
// Size: 0x100 (Inherited: 0xc8)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xc8(0x04)
	float MaxRange; // 0xcc(0x04)
	struct FTransform Transform; // 0xd0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4d2cb20
};

// Class FieldSystemEngine.UniformVector
// Size: 0xd8 (Inherited: 0xc8)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xc8(0x04)
	struct FVector Direction; // 0xcc(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4d2d4e0
};

// Class FieldSystemEngine.RadialVector
// Size: 0xd8 (Inherited: 0xc8)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xc8(0x04)
	struct FVector Position; // 0xcc(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4d2d4e0
};

// Class FieldSystemEngine.RandomVector
// Size: 0xd0 (Inherited: 0xc8)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2d5d0
};

// Class FieldSystemEngine.OperatorField
// Size: 0xe8 (Inherited: 0xc8)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct UFieldNodeBase* RightField; // 0xd0(0x08)
	struct UFieldNodeBase* LeftField; // 0xd8(0x08)
	enum class EFieldOperationType Operation; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2ccb0
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xd0 (Inherited: 0xc8)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xc8(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2d690
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xd0 (Inherited: 0xc8)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xc8(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2d690
};

// Class FieldSystemEngine.CullingField
// Size: 0xe0 (Inherited: 0xc8)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xc8(0x08)
	struct UFieldNodeBase* Field; // 0xd0(0x08)
	enum class EFieldCullingOperationType Operation; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2c8e0
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xc8 (Inherited: 0xc8)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4d2d660
};

