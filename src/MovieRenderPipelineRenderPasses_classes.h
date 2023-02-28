// Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
// Size: 0xc8 (Inherited: 0x48)
struct UMoviePipelineImagePassBase : UMoviePipelineRenderPass {
	char pad_48[0x80]; // 0x48(0x80)
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
// Size: 0x170 (Inherited: 0xc8)
struct UMoviePipelineDeferredPassBase : UMoviePipelineImagePassBase {
	bool bAccumulatorIncludesAlpha; // 0xc8(0x01)
	bool bDisableMultisampleEffects; // 0xc9(0x01)
	bool bUse32BitPostProcessMaterials; // 0xca(0x01)
	char pad_CB[0x5]; // 0xcb(0x05)
	struct TArray<struct FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials; // 0xd0(0x10)
	bool bAddDefaultLayer; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TArray<struct FActorLayer> StencilLayers; // 0xe8(0x10)
	struct TArray<struct UMaterialInterface*> ActivePostProcessMaterials; // 0xf8(0x10)
	struct UMaterialInterface* StencilLayerMaterial; // 0x108(0x08)
	struct TArray<struct UTextureRenderTarget2D*> TileRenderTargets; // 0x110(0x10)
	char pad_120[0x50]; // 0x120(0x50)
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
// Size: 0x170 (Inherited: 0x170)
struct UMoviePipelineDeferredPass_Unlit : UMoviePipelineDeferredPassBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
// Size: 0x170 (Inherited: 0x170)
struct UMoviePipelineDeferredPass_DetailLighting : UMoviePipelineDeferredPassBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
// Size: 0x170 (Inherited: 0x170)
struct UMoviePipelineDeferredPass_LightingOnly : UMoviePipelineDeferredPassBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
// Size: 0x170 (Inherited: 0x170)
struct UMoviePipelineDeferredPass_ReflectionsOnly : UMoviePipelineDeferredPassBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
// Size: 0x170 (Inherited: 0x170)
struct UMoviePipelineDeferredPass_PathTracer : UMoviePipelineDeferredPassBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
// Size: 0x68 (Inherited: 0x48)
struct UMoviePipelineImageSequenceOutputBase : UMoviePipelineOutputBase {
	char pad_48[0x20]; // 0x48(0x20)
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
// Size: 0x70 (Inherited: 0x68)
struct UMoviePipelineImageSequenceOutput_EXR : UMoviePipelineImageSequenceOutputBase {
	enum class EEXRCompressionFormat Compression; // 0x68(0x01)
	bool bMultilayer; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
// Size: 0x68 (Inherited: 0x68)
struct UMoviePipelineImageSequenceOutput_BMP : UMoviePipelineImageSequenceOutputBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
// Size: 0x68 (Inherited: 0x68)
struct UMoviePipelineImageSequenceOutput_PNG : UMoviePipelineImageSequenceOutputBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
// Size: 0x68 (Inherited: 0x68)
struct UMoviePipelineImageSequenceOutput_JPG : UMoviePipelineImageSequenceOutputBase {
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
// Size: 0xb8 (Inherited: 0x48)
struct UMoviePipelineWaveOutput : UMoviePipelineOutputBase {
	struct FString FileNameFormatOverride; // 0x48(0x10)
	char pad_58[0x60]; // 0x58(0x60)
};

