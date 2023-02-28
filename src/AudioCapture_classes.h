// Class AudioCapture.AudioCapture
// Size: 0xb0 (Inherited: 0xa8)
struct UAudioCapture : UAudioGenerator {
	char pad_A8[0x8]; // 0xa8(0x08)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x25ce4e0
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x25ce4c0
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x25ce490
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo& OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25ce3e0
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25ce3b0
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x7a0 (Inherited: 0x6e0)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x6e0(0x04)
	char pad_6E4[0xbc]; // 0x6e4(0xbc)
};

