// Enum GameplayCameras.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8 {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2
};

// Enum GameplayCameras.EOscillatorWaveform
enum class EOscillatorWaveform : uint8 {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2
};

// Enum GameplayCameras.EInitialWaveOscillatorOffsetType
enum class EInitialWaveOscillatorOffsetType : uint8 {
	Random = 0,
	Zero = 1,
	EInitialWaveOscillatorOffsetType_MAX = 2
};

// ScriptStruct GameplayCameras.VOscillator
// Size: 0x24 (Inherited: 0x00)
struct FVOscillator {
	struct FFOscillator X; // 0x00(0x0c)
	struct FFOscillator Y; // 0x0c(0x0c)
	struct FFOscillator Z; // 0x18(0x0c)
};

// ScriptStruct GameplayCameras.FOscillator
// Size: 0x0c (Inherited: 0x00)
struct FFOscillator {
	float Amplitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	enum class EInitialOscillatorOffset InitialOffset; // 0x08(0x01)
	enum class EOscillatorWaveform Waveform; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct GameplayCameras.ROscillator
// Size: 0x24 (Inherited: 0x00)
struct FROscillator {
	struct FFOscillator Pitch; // 0x00(0x0c)
	struct FFOscillator Yaw; // 0x0c(0x0c)
	struct FFOscillator Roll; // 0x18(0x0c)
};

// ScriptStruct GameplayCameras.PerlinNoiseShaker
// Size: 0x08 (Inherited: 0x00)
struct FPerlinNoiseShaker {
	float Amplitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
};

// ScriptStruct GameplayCameras.WaveOscillator
// Size: 0x0c (Inherited: 0x00)
struct FWaveOscillator {
	float Amplitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	enum class EInitialWaveOscillatorOffsetType InitialOffsetType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

