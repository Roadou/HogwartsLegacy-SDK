// Class DynamicSplinesRuntime.DynamicSplineNDI
// Size: 0x68 (Inherited: 0x38)
struct UDynamicSplineNDI : UNiagaraDataInterface {
	struct AActor* HostActor; // 0x38(0x08)
	struct UDynamicSplineSet* SplineSet; // 0x40(0x08)
	struct FDynamicSplineUsage SplineUsage; // 0x48(0x08)
	struct USkeletalMeshComponent* ComputedSkeletalMesh; // 0x50(0x08)
	struct UStaticMeshComponent* ComputedStaticMesh; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class DynamicSplinesRuntime.DynamicSplineSet
// Size: 0x48 (Inherited: 0x30)
struct UDynamicSplineSet : UDataAsset {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FDynamicSpline> DynamicSplines; // 0x38(0x10)
};

// Class DynamicSplinesRuntime.DynamicStaticMeshSplineSet
// Size: 0x50 (Inherited: 0x48)
struct UDynamicStaticMeshSplineSet : UDynamicSplineSet {
	struct UStaticMesh* ReferenceMesh; // 0x48(0x08)
};

// Class DynamicSplinesRuntime.DynamicSkeletalSplineSet
// Size: 0x50 (Inherited: 0x48)
struct UDynamicSkeletalSplineSet : UDynamicSplineSet {
	struct USkeletalMesh* ReferenceMesh; // 0x48(0x08)
};

// Class DynamicSplinesRuntime.DynamicSplinesSubsystem
// Size: 0x1c8 (Inherited: 0x30)
struct UDynamicSplinesSubsystem : UWorldSubsystem {
	char pad_30[0x198]; // 0x30(0x198)
};

