// Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
// Size: 0xa0 (Inherited: 0x48)
struct UMoviePipelineBurnInSetting : UMoviePipelineRenderPass {
	struct FSoftClassPath BurnInClass; // 0x48(0x18)
	bool bCompositeOntoFinalImage; // 0x60(0x01)
	char pad_61[0x2f]; // 0x61(0x2f)
	struct UTextureRenderTarget2D* RenderTarget; // 0x90(0x08)
	struct UMoviePipelineBurnInWidget* BurnInWidgetInstance; // 0x98(0x08)
};

// Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
// Size: 0x268 (Inherited: 0x268)
struct UMoviePipelineBurnInWidget : UUserWidget {

	void OnOutputFrameStarted(struct UMoviePipeline* ForPipeline); // Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted // (Event|Public|BlueprintEvent) // @ game+0x38a7480
};

// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
// Size: 0xc8 (Inherited: 0x48)
struct UMoviePipelineConsoleVariableSetting : UMoviePipelineSetting {
	struct TMap<struct FString, float> ConsoleVariables; // 0x48(0x50)
	struct TArray<struct FString> StartConsoleCommands; // 0x98(0x10)
	struct TArray<struct FString> EndConsoleCommands; // 0xa8(0x10)
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
// Size: 0x68 (Inherited: 0x48)
struct UMoviePipelineWidgetRenderer : UMoviePipelineRenderPass {
	bool bCompositeOntoFinalImage; // 0x48(0x01)
	char pad_49[0x17]; // 0x49(0x17)
	struct UTextureRenderTarget2D* RenderTarget; // 0x60(0x08)
};

