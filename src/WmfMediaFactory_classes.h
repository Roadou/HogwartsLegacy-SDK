// Class WmfMediaFactory.WmfMediaSettings
// Size: 0x30 (Inherited: 0x28)
struct UWmfMediaSettings : UObject {
	bool AllowNonStandardCodecs; // 0x28(0x01)
	bool LowLatency; // 0x29(0x01)
	bool NativeAudioOut; // 0x2a(0x01)
	bool HardwareAcceleratedVideoDecoding; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
};

