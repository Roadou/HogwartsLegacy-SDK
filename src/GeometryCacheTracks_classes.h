// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size: 0x128 (Inherited: 0xe8)
struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	struct FMovieSceneGeometryCacheParams Params; // 0xe8(0x40)
};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x98(0x10)
};

