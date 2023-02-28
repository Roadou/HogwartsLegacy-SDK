// ScriptStruct RecordMovieInterface.RenderedCinematicJsonOutput
// Size: 0x10 (Inherited: 0x00)
struct FRenderedCinematicJsonOutput {
	struct TArray<struct FRenderedCinematicInfo> CinematicInfos; // 0x00(0x10)
};

// ScriptStruct RecordMovieInterface.RenderedCinematicInfo
// Size: 0x70 (Inherited: 0x00)
struct FRenderedCinematicInfo {
	struct FString OutVideoPath; // 0x00(0x10)
	struct FString CinematicName; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FString SceneRigPath; // 0x30(0x10)
	struct FString ShotgunStatus; // 0x40(0x10)
	struct FString Tier; // 0x50(0x10)
	bool bUploadToShotgun; // 0x60(0x01)
	bool bWasRenderSuccessful; // 0x61(0x01)
	bool bAudioOnly; // 0x62(0x01)
	bool bHasOverlay; // 0x63(0x01)
	bool bUsingUnlit; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t DesiredRecordTime; // 0x68(0x04)
	int32_t ActualRecordTime; // 0x6c(0x04)
};

