// Class RemoteControl.RemoteControlBinding
// Size: 0x38 (Inherited: 0x28)
struct URemoteControlBinding : UObject {
	struct FString Name; // 0x28(0x10)
};

// Class RemoteControl.RemoteControlLevelIndependantBinding
// Size: 0x60 (Inherited: 0x38)
struct URemoteControlLevelIndependantBinding : URemoteControlBinding {
	struct TSoftObjectPtr<UObject> BoundObject; // 0x38(0x28)
};

// Class RemoteControl.RemoteControlLevelDependantBinding
// Size: 0xb0 (Inherited: 0x38)
struct URemoteControlLevelDependantBinding : URemoteControlBinding {
	struct TMap<struct TSoftObjectPtr<ULevel>, struct TSoftObjectPtr<UObject>> BoundObjectMap; // 0x38(0x50)
	struct TSoftObjectPtr<ULevel> LevelWithLastSuccessfulResolve; // 0x88(0x28)
};

// Class RemoteControl.RemoteControlExposeRegistry
// Size: 0xc8 (Inherited: 0x28)
struct URemoteControlExposeRegistry : UObject {
	struct TSet<struct FRCEntityWrapper> ExposedEntities; // 0x28(0x50)
	struct TMap<struct FName, struct FGuid> LabelToIdCache; // 0x78(0x50)
};

// Class RemoteControl.RemoteControlFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct URemoteControlFunctionLibrary : UBlueprintFunctionLibrary {

	bool ExposeProperty(struct URemoteControlPreset* Preset, struct UObject* SourceObject, struct FString Property, struct FRemoteControlOptionalExposeArgs Args); // Function RemoteControl.RemoteControlFunctionLibrary.ExposeProperty // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x2023db0
	bool ExposeFunction(struct URemoteControlPreset* Preset, struct UObject* SourceObject, struct FString Function, struct FRemoteControlOptionalExposeArgs Args); // Function RemoteControl.RemoteControlFunctionLibrary.ExposeFunction // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x2023bb0
	bool ExposeActor(struct URemoteControlPreset* Preset, struct AActor* Actor, struct FRemoteControlOptionalExposeArgs Args); // Function RemoteControl.RemoteControlFunctionLibrary.ExposeActor // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x2023a00
};

// Class RemoteControl.RemoteControlInterceptionTestObject
// Size: 0x58 (Inherited: 0x28)
struct URemoteControlInterceptionTestObject : UObject {
	struct FRemoteControlInterceptionTestStruct CustomStruct; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FRemoteControlInterceptionFunctionParamStruct FunctionParamStruct; // 0x30(0x28)

	struct FRemoteControlInterceptionFunctionParamStruct TestFunction(struct FRemoteControlInterceptionFunctionParamStruct& InStruct, int32_t InTestFactor); // Function RemoteControl.RemoteControlInterceptionTestObject.TestFunction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2023fb0
};

// Class RemoteControl.RemoteControlPreset
// Size: 0x4e8 (Inherited: 0x28)
struct URemoteControlPreset : UObject {
	struct FRemoteControlPresetLayout Layout; // 0x28(0xc0)
	struct TMap<struct FString, struct FString> MetaData; // 0xe8(0x50)
	struct TArray<struct URemoteControlBinding*> Bindings; // 0x138(0x10)
	struct FGuid PresetId; // 0x148(0x10)
	struct TMap<struct FName, struct FRemoteControlTarget> RemoteControlTargets; // 0x158(0x50)
	struct TMap<struct FGuid, struct FRCCachedFieldData> FieldCache; // 0x1a8(0x50)
	struct TMap<struct FName, struct FGuid> NameToGuidMap; // 0x1f8(0x50)
	struct URemoteControlExposeRegistry* Registry; // 0x248(0x08)
	char pad_250[0x298]; // 0x250(0x298)
};

// Class RemoteControl.RemoteControlPresetActor
// Size: 0x258 (Inherited: 0x248)
struct ARemoteControlPresetActor : AActor {
	struct URemoteControlPreset* Preset; // 0x248(0x08)
	char pad_250[0x8]; // 0x250(0x08)
};

// Class RemoteControl.RemoteControlAPITestObject
// Size: 0x288 (Inherited: 0x28)
struct URemoteControlAPITestObject : UObject {
	int32_t CStyleIntArray[0x3]; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<int32_t> IntArray; // 0x38(0x10)
	struct TArray<struct FRemoteControlTestStructOuter> StructOuterArray; // 0x48(0x10)
	struct TSet<int32_t> IntSet; // 0x58(0x50)
	struct TMap<int32_t, int32_t> IntMap; // 0xa8(0x50)
	struct TMap<int32_t, struct FRemoteControlTestStructOuter> StructOuterMap; // 0xf8(0x50)
	struct TMap<struct FString, struct FColor> StringColorMap; // 0x148(0x50)
	struct TArray<struct FVector> ArrayOfVectors; // 0x198(0x10)
	int8_t Int8Value; // 0x1a8(0x01)
	char pad_1A9[0x1]; // 0x1a9(0x01)
	int16_t Int16Value; // 0x1aa(0x02)
	int32_t Int32Value; // 0x1ac(0x04)
	float FloatValue; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	double DoubleValue; // 0x1b8(0x08)
	struct FRemoteControlTestStructOuter RemoteControlTestStructOuter; // 0x1c0(0x78)
	struct FString StringValue; // 0x238(0x10)
	struct FName NameValue; // 0x248(0x08)
	struct FText TextValue; // 0x250(0x18)
	bool bValue; // 0x268(0x01)
	char ByteValue; // 0x269(0x01)
	enum class ERemoteControlEnum RemoteControlEnumByteValue; // 0x26a(0x01)
	enum class ERemoteControlEnumClass RemoteControlEnumValue; // 0x26b(0x01)
	struct FVector VectorValue; // 0x26c(0x0c)
	struct FRotator RotatorValue; // 0x278(0x0c)
	char pad_284[0x4]; // 0x284(0x04)
};

// Class RemoteControl.RemoteControlTestObject
// Size: 0x198 (Inherited: 0x28)
struct URemoteControlTestObject : UObject {
	int32_t CStyleIntArray[0x3]; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<int32_t> IntArray; // 0x38(0x10)
	struct TArray<float> FloatArray; // 0x48(0x10)
	struct TSet<int32_t> IntSet; // 0x58(0x50)
	struct TMap<int32_t, int32_t> IntMap; // 0xa8(0x50)
	struct TMap<int32_t, struct FRemoteControlTestInnerStruct> IntInnerStructMap; // 0xf8(0x50)
	struct TMap<struct FString, struct FColor> StringColorMap; // 0x148(0x50)
};

