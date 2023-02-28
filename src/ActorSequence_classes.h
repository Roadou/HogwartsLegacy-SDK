// Class ActorSequence.ActorSequence
// Size: 0x88 (Inherited: 0x60)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x60(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x68(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xc8(0x14)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct UActorSequence* Sequence; // 0xe0(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0xe8(0x08)
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x4e8 (Inherited: 0x4e8)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

