// ScriptStruct Mercuna3DMovement.Mercuna3DMovementProperties
// Size: 0x3c (Inherited: 0x00)
struct FMercuna3DMovementProperties {
	float MaxSpeed; // 0x00(0x04)
	struct FVector MaxAccel; // 0x04(0x0c)
	struct FMercuna3DMovementAccelerations MaxAccelerations; // 0x10(0x0c)
	float MaxAngSpeed; // 0x1c(0x04)
	float MaxPitchRate; // 0x20(0x04)
	float MaxYawRate; // 0x24(0x04)
	float MaxRollRate; // 0x28(0x04)
	float MaxAngAccel; // 0x2c(0x04)
	bool bEnableWorldAccelerationLimits; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FMercuna3DMovementWorldAccelerations WorldAccelerationLimits; // 0x34(0x08)
};

// ScriptStruct Mercuna3DMovement.Mercuna3DMovementWorldAccelerations
// Size: 0x08 (Inherited: 0x00)
struct FMercuna3DMovementWorldAccelerations {
	float Upward; // 0x00(0x04)
	float Downward; // 0x04(0x04)
};

// ScriptStruct Mercuna3DMovement.Mercuna3DMovementAccelerations
// Size: 0x0c (Inherited: 0x00)
struct FMercuna3DMovementAccelerations {
	float Forward; // 0x00(0x04)
	float Backward; // 0x04(0x04)
	float Sideways; // 0x08(0x04)
};

