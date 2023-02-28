// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// Size: 0x28 (Inherited: 0x28)
struct UAudioSynesthesiaNRTSettings : UAudioAnalyzerNRTSettings {
};

// Class AudioSynesthesia.AudioSynesthesiaNRT
// Size: 0x78 (Inherited: 0x78)
struct UAudioSynesthesiaNRT : UAudioAnalyzerNRT {
};

// Class AudioSynesthesia.ConstantQNRTSettings
// Size: 0x48 (Inherited: 0x28)
struct UConstantQNRTSettings : UAudioSynesthesiaNRTSettings {
	float StartingFrequency; // 0x28(0x04)
	int32_t NumBands; // 0x2c(0x04)
	float NumBandsPerOctave; // 0x30(0x04)
	float AnalysisPeriod; // 0x34(0x04)
	bool bDownmixToMono; // 0x38(0x01)
	enum class EConstantQFFTSizeEnum FFTSize; // 0x39(0x01)
	enum class EFFTWindowType WindowType; // 0x3a(0x01)
	enum class EAudioSpectrumType SpectrumType; // 0x3b(0x01)
	float BandWidthStretch; // 0x3c(0x04)
	enum class EConstantQNormalizationEnum CQTNormalization; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float NoiseFloorDb; // 0x44(0x04)
};

// Class AudioSynesthesia.ConstantQNRT
// Size: 0x80 (Inherited: 0x78)
struct UConstantQNRT : UAudioSynesthesiaNRT {
	struct UConstantQNRTSettings* Settings; // 0x78(0x08)

	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262aa10
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262a500
};

// Class AudioSynesthesia.LoudnessNRTSettings
// Size: 0x40 (Inherited: 0x28)
struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; // 0x28(0x04)
	float MinimumFrequency; // 0x2c(0x04)
	float MaximumFrequency; // 0x30(0x04)
	enum class ELoudnessNRTCurveTypeEnum CurveType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float NoiseFloorDb; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AudioSynesthesia.LoudnessNRT
// Size: 0x80 (Inherited: 0x78)
struct ULoudnessNRT : UAudioSynesthesiaNRT {
	struct ULoudnessNRTSettings* Settings; // 0x78(0x08)

	void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262ae40
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262ab40
	void GetLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262a930
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262a630
};

// Class AudioSynesthesia.OnsetNRTSettings
// Size: 0x40 (Inherited: 0x28)
struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float GranularityInSeconds; // 0x2c(0x04)
	float Sensitivity; // 0x30(0x04)
	float MinimumFrequency; // 0x34(0x04)
	float MaximumFrequency; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AudioSynesthesia.OnsetNRT
// Size: 0x80 (Inherited: 0x78)
struct UOnsetNRT : UAudioSynesthesiaNRT {
	struct UOnsetNRTSettings* Settings; // 0x78(0x08)

	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262ac60
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262a750
};

