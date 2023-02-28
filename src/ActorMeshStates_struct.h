// ScriptStruct ActorMeshStates.ActorMeshSetupDefinition
// Size: 0x18 (Inherited: 0x00)
struct FActorMeshSetupDefinition {
	struct UActorMeshSetupMatch* Condition; // 0x00(0x08)
	struct TArray<struct UActorMeshSetupProcess*> MeshSetups; // 0x08(0x10)
};

// ScriptStruct ActorMeshStates.ActorMeshSetupAutoDefinition
// Size: 0x28 (Inherited: 0x18)
struct FActorMeshSetupAutoDefinition : FActorMeshSetupDefinition {
	bool bKeepProcessing; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName Tag; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ActorMeshStates.ActorMeshSetupNamedDefinition
// Size: 0x20 (Inherited: 0x18)
struct FActorMeshSetupNamedDefinition : FActorMeshSetupDefinition {
	struct FName Name; // 0x18(0x08)
};

// ScriptStruct ActorMeshStates.ActorMeshSetupName
// Size: 0x08 (Inherited: 0x00)
struct FActorMeshSetupName {
	struct FName Name; // 0x00(0x08)
};

