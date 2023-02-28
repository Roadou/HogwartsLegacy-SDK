// Class TcpMessaging.TcpMessagingSettings
// Size: 0x58 (Inherited: 0x28)
struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString ListenEndpoint; // 0x30(0x10)
	struct TArray<struct FString> ConnectToEndpoints; // 0x40(0x10)
	int32_t ConnectionRetryDelay; // 0x50(0x04)
	bool bStopServiceWhenAppDeactivates; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

