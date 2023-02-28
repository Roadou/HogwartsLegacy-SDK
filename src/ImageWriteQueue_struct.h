// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8 {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4
};

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// Size: 0x60 (Inherited: 0x00)
struct FImageWriteOptions {
	enum class EDesiredImageFormat Format; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FDelegate OnComplete; // 0x04(0x10)
	int32_t CompressionQuality; // 0x14(0x04)
	bool bOverwriteFile; // 0x18(0x01)
	bool bAsync; // 0x19(0x01)
	char pad_1A[0x46]; // 0x1a(0x46)
};

