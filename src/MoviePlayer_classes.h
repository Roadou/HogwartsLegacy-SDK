// Class MoviePlayer.MoviePlayerSettings
// Size: 0x40 (Inherited: 0x28)
struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x28(0x01)
	bool bMoviesAreSkippable; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct TArray<struct FString> StartupMovies; // 0x30(0x10)
};

