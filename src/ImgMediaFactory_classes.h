// Class ImgMediaFactory.ImgMediaSettings
// Size: 0x68 (Inherited: 0x28)
struct UImgMediaSettings : UObject {
	struct FFrameRate DefaultFrameRate; // 0x28(0x08)
	float CacheBehindPercentage; // 0x30(0x04)
	float CacheSizeGB; // 0x34(0x04)
	int32_t CacheThreads; // 0x38(0x04)
	int32_t CacheThreadStackSizeKB; // 0x3c(0x04)
	float GlobalCacheSizeGB; // 0x40(0x04)
	bool UseGlobalCache; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	uint32_t ExrDecoderThreads; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString DefaultProxy; // 0x50(0x10)
	bool UseDefaultProxy; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

