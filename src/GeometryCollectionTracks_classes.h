// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Size: 0x118 (Inherited: 0xe8)
struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	struct FMovieSceneGeometryCollectionParams Params; // 0xe8(0x30)
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x98(0x10)
};

