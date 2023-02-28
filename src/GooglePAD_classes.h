// Class GooglePAD.GooglePADFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGooglePADFunctionLibrary : UBlueprintFunctionLibrary {

	enum class EGooglePADErrorCode ShowCellularDataConfirmation(); // Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dca40
	enum class EGooglePADErrorCode RequestRemoval(struct FString Name); // Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc9a0
	enum class EGooglePADErrorCode RequestInfo(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.RequestInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc3b0
	enum class EGooglePADErrorCode RequestDownload(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.RequestDownload // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc3b0
	void ReleaseDownloadState(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc920
	void ReleaseAssetPackLocation(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc920
	int32_t GetTotalBytesToDownload(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc6e0
	enum class EGooglePADStorageMethod GetStorageMethod(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc890
	enum class EGooglePADErrorCode GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus& Status); // Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x25dc800
	enum class EGooglePADDownloadStatus GetDownloadStatus(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc770
	enum class EGooglePADErrorCode GetDownloadState(struct FString Name, int32_t& State); // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x25dc520
	int32_t GetBytesDownloaded(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc6e0
	struct FString GetAssetsPath(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc610
	enum class EGooglePADErrorCode GetAssetPackLocation(struct FString Name, int32_t& Location); // Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x25dc520
	enum class EGooglePADErrorCode CancelDownload(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.CancelDownload // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x25dc3b0
};

