// Class RemoteControlCommon.RCPropertyContainerBase
// Size: 0x50 (Inherited: 0x28)
struct URCPropertyContainerBase : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class RemoteControlCommon.RCPropertyContainerRegistry
// Size: 0x80 (Inherited: 0x30)
struct URCPropertyContainerRegistry : UEngineSubsystem {
	struct TMap<struct FRCPropertyContainerKey, struct URCPropertyContainerBase*> CachedContainerClasses; // 0x30(0x50)
};

// Class RemoteControlCommon.PropertyContainerTestObject
// Size: 0xa0 (Inherited: 0x28)
struct UPropertyContainerTestObject : UObject {
	bool bSomeBool; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32_t SomeUInt32; // 0x2c(0x04)
	float SomeFloat; // 0x30(0x04)
	struct FVector SomeVector; // 0x34(0x0c)
	struct FRotator SomeRotator; // 0x40(0x0c)
	int32_t SomeClampedInt; // 0x4c(0x04)
	int32_t SomeClampedInt2; // 0x50(0x04)
	int32_t SomeUIClampedInt; // 0x54(0x04)
	float SomeClampedFloat; // 0x58(0x04)
	float SomeUIClampedFloat; // 0x5c(0x04)
	float SomeClampedFloat2; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString SomeString; // 0x68(0x10)
	struct FText SomeText; // 0x78(0x18)
	struct TArray<float> SomeFloatArray; // 0x90(0x10)
};

// Class RemoteControlCommon.RemoteControlSettings
// Size: 0x58 (Inherited: 0x38)
struct URemoteControlSettings : UDeveloperSettings {
	bool bProtocolsGenerateTransactions; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	uint32_t RemoteControlWebInterfacePort; // 0x3c(0x04)
	bool bForceWebAppBuildAtStartup; // 0x40(0x01)
	bool bAutoStartWebServer; // 0x41(0x01)
	bool bAutoStartWebSocketServer; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	uint32_t RemoteControlHttpServerPort; // 0x44(0x04)
	uint32_t RemoteControlWebSocketServerPort; // 0x48(0x04)
	bool bDisplayInEditorOnlyWarnings; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float TreeBindingSplitRatio; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

