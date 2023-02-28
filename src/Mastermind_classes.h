// Class Mastermind.MastermindActorComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UMastermindActorComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)

	struct FMastermindCommandResult TeleportPlayerPawn(float InX, float InY, float InZ); // Function Mastermind.MastermindActorComponent.TeleportPlayerPawn // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x24b3e30
	void ServerTeleport(float InX, float InY, float InZ); // Function Mastermind.MastermindActorComponent.ServerTeleport // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x24b2f20
	void ServerLookInDirection(float InPitch, float InYaw, float InRoll); // Function Mastermind.MastermindActorComponent.ServerLookInDirection // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x24b2dd0
	void SendMastermindMessage(struct FMastermindCommandResult& InMastermindMessage); // Function Mastermind.MastermindActorComponent.SendMastermindMessage // (Final|Native|Static|Protected|HasOutParms|BlueprintCallable) // @ game+0x24b2c50
	void QATeleport(float InX, float InY, float InZ); // Function Mastermind.MastermindActorComponent.QATeleport // (Final|Exec|Native|Public) // @ game+0x24b2b30
	void QALookInDirection(float InPitch, float InYaw, float InRoll); // Function Mastermind.MastermindActorComponent.QALookInDirection // (Exec|Native|Public) // @ game+0x24b2970
	struct FMastermindCommandResult NativeTeleportPlayerPawn(float InX, float InY, float InZ); // Function Mastermind.MastermindActorComponent.NativeTeleportPlayerPawn // (Native|Protected) // @ game+0x24b2020
	struct FMastermindCommandResult NativeLookInDirection(float InPitch, float InYaw, float InRoll); // Function Mastermind.MastermindActorComponent.NativeLookInDirection // (Native|Protected) // @ game+0x24b1e80
	struct FMastermindCommandResult LookInDirection(float InPitch, float InYaw, float InRoll); // Function Mastermind.MastermindActorComponent.LookInDirection // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x24b1410
	struct APlayerController* GetOwniningPlayerController(); // Function Mastermind.MastermindActorComponent.GetOwniningPlayerController // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b0d10
	void ClientSendMastermindMessage(struct FMastermindCommandResult InMastermindMessage); // Function Mastermind.MastermindActorComponent.ClientSendMastermindMessage // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x24afa60
};

// Class Mastermind.MastermindBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMastermindBPLibrary : UBlueprintFunctionLibrary {

	void SimulateTappedInput(struct UObject* InWorldContextObject, struct FKey InInputKey); // Function Mastermind.MastermindBPLibrary.SimulateTappedInput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24b3d10
	void SimulateInput(struct UObject* InWorldContextObject, struct FKey InInputKey, enum class EInputEvent InInputEvent); // Function Mastermind.MastermindBPLibrary.SimulateInput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24b3bb0
	void SimulateAxis(struct UObject* InWorldContextObject, struct FKey InInputKey, float InDelta); // Function Mastermind.MastermindBPLibrary.SimulateAxis // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24b3a50
	void MastermindSendTestResults(struct UObject* InWorldContextObject, struct TArray<struct FMastermindTestResult>& InTestResults); // Function Mastermind.MastermindBPLibrary.MastermindSendTestResults // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b1d50
	void MastermindSendTestResultMessage(struct UObject* InWorldContextObject, struct FMastermindTestResultMessage& InResult); // Function Mastermind.MastermindBPLibrary.MastermindSendTestResultMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b1c40
	void MastermindSendTestResult(struct UObject* InWorldContextObject, struct FString InName, bool bInIsSuccess); // Function Mastermind.MastermindBPLibrary.MastermindSendTestResult // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24b1b20
	void MastermindSendStepResult(struct UObject* InWorldContextObject, struct FString InMessage, bool bInIsSuccess, enum class ETestSuccess InTestSuccess, struct TArray<struct FString>& InArtifacts, struct UMastermindJsonObject* InData); // Function Mastermind.MastermindBPLibrary.MastermindSendStepResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b18f0
	void MastermindSendProgressUpdateMessage(struct UObject* InWorldContextObject, struct FMastermindProgressUpdate& InUpdate); // Function Mastermind.MastermindBPLibrary.MastermindSendProgressUpdateMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b17c0
	void MastermindSendProgressUpdate(struct UObject* InWorldContextObject, struct FString InMessage); // Function Mastermind.MastermindBPLibrary.MastermindSendProgressUpdate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24b16f0
	void MastermindSendCommandResultMessage(struct UObject* InWorldContextObject, struct FMastermindCommandResult& InResult); // Function Mastermind.MastermindBPLibrary.MastermindSendCommandResultMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b15b0
	struct FMastermindTestResult CreateMastermindTestResult(struct UObject* InWorldContextObject, struct FString InName, bool bInIsSuccess); // Function Mastermind.MastermindBPLibrary.CreateMastermindTestResult // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24aff10
	struct FMastermindProgressUpdate CreateMastermindProgressUpdate(struct UObject* InWorldContextObject, struct FString InMessage); // Function Mastermind.MastermindBPLibrary.CreateMastermindProgressUpdate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24afe10
	struct FMastermindCommandResult CreateMastermindCommandResult(struct UObject* InWorldContextObject, struct FString InMessage, bool bInIsSuccess, enum class ETestSuccess InTestSuccess, struct TArray<struct FString>& InArtifacts, struct UMastermindJsonObject* InData); // Function Mastermind.MastermindBPLibrary.CreateMastermindCommandResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24afb80
};

// Class Mastermind.MastermindDebugCommandManager
// Size: 0x60 (Inherited: 0x28)
struct UMastermindDebugCommandManager : UObject {
	char pad_28[0x38]; // 0x28(0x38)

	void SetSessionId(struct FString InSessionId); // Function Mastermind.MastermindDebugCommandManager.SetSessionId // (Native|Public|BlueprintCallable) // @ game+0x24b3780
	void SetBuild(struct FString InBuild); // Function Mastermind.MastermindDebugCommandManager.SetBuild // (Native|Public|BlueprintCallable) // @ game+0x24b3260
	void SendMastermindMessage(struct FMastermindMessage& InMastermindMessage); // Function Mastermind.MastermindDebugCommandManager.SendMastermindMessage // (Final|Native|Static|Protected|HasOutParms|BlueprintCallable) // @ game+0x24b2d40
	void QATakeScreenshot(struct FString InFilename); // Function Mastermind.MastermindDebugCommandManager.QATakeScreenshot // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b2a90
	void QAHangGame(); // Function Mastermind.MastermindDebugCommandManager.QAHangGame // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b2950
	void QAGameIsReady(); // Function Mastermind.MastermindDebugCommandManager.QAGameIsReady // (Exec|Native|Public|BlueprintCallable) // @ game+0x235e2c0
	void QADelayedConsoleCommand(struct FString InCommand, int32_t InDelayTime); // Function Mastermind.MastermindDebugCommandManager.QADelayedConsoleCommand // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b2870
	void QACreateLargeLogResponse(); // Function Mastermind.MastermindDebugCommandManager.QACreateLargeLogResponse // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b2850
	void QACreateArtifactFolder(struct FString InData, struct FString InFilename, int32_t InNumArtifacts); // Function Mastermind.MastermindDebugCommandManager.QACreateArtifactFolder // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b2710
	void QACreateArtifact(struct FString InData, struct FString InFilename); // Function Mastermind.MastermindDebugCommandManager.QACreateArtifact // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b2610
	void QACrashGame(); // Function Mastermind.MastermindDebugCommandManager.QACrashGame // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b25f0
	void QAConsoleCommand(struct FString InCommand); // Function Mastermind.MastermindDebugCommandManager.QAConsoleCommand // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b2550
	void QAAssertVerify(bool bInIsSuccess); // Function Mastermind.MastermindDebugCommandManager.QAAssertVerify // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b24c0
	void QAAssertEnsure(bool bInIsSuccess); // Function Mastermind.MastermindDebugCommandManager.QAAssertEnsure // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b2430
	void QAAssertCheck(bool bInIsSuccess); // Function Mastermind.MastermindDebugCommandManager.QAAssertCheck // (Exec|Native|Public|BlueprintCallable) // @ game+0x24b23a0
	void QAAppendToFile(struct FString inString, struct FString InFilename); // Function Mastermind.MastermindDebugCommandManager.QAAppendToFile // (Native|Public|BlueprintCallable) // @ game+0x24b22a0
	void PMMC(int32_t InPlayerIndex, struct FString InCommand); // Function Mastermind.MastermindDebugCommandManager.PMMC // (Exec|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x24b21c0
	bool NativeIsGameReady(); // Function Mastermind.MastermindDebugCommandManager.NativeIsGameReady // (Native|Public|Const) // @ game+0x24b1e50
	void MMC(struct FString InCommand); // Function Mastermind.MastermindDebugCommandManager.MMC // (Exec|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2366fd0
	bool IsGameReady(); // Function Mastermind.MastermindDebugCommandManager.IsGameReady // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12bfb10
	void DoMMC(struct FString InCommand, int32_t InPlayerIndex); // Function Mastermind.MastermindDebugCommandManager.DoMMC // (Final|Native|Public) // @ game+0x24b0070
};

// Class Mastermind.MastermindFileHelper
// Size: 0x28 (Inherited: 0x28)
struct UMastermindFileHelper : UBlueprintFunctionLibrary {

	bool GetVideoCaptureArtifactPath(struct FString InPath, struct FString& OutPath); // Function Mastermind.MastermindFileHelper.GetVideoCaptureArtifactPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b1310
	bool GetScreenshotArtifactPath(struct FString InPath, struct FString& OutPath); // Function Mastermind.MastermindFileHelper.GetScreenshotArtifactPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0f40
	bool GetProjectLogArtifactPath(struct FString InPath, struct FString& OutPath); // Function Mastermind.MastermindFileHelper.GetProjectLogArtifactPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0e40
	bool GetProfilingArtifactPath(struct FString InPath, struct FString& OutPath); // Function Mastermind.MastermindFileHelper.GetProfilingArtifactPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0d40
	bool GetBugItArtifactPath(struct FString InPath, struct FString& OutPath); // Function Mastermind.MastermindFileHelper.GetBugItArtifactPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0790
	bool GetAutomationTransientArtifactPath(struct FString InPath, struct FString& OutPath); // Function Mastermind.MastermindFileHelper.GetAutomationTransientArtifactPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0450
	bool GetAutomationLogArtifactPath(struct FString InPath, struct FString& OutPath); // Function Mastermind.MastermindFileHelper.GetAutomationLogArtifactPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0350
	bool GetAutomationArtifactPath(struct FString InPath, struct FString& OutPath); // Function Mastermind.MastermindFileHelper.GetAutomationArtifactPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0250
	bool GetArtifactAbsolutePath(struct FString InPath, struct FString& OutPath); // Function Mastermind.MastermindFileHelper.GetArtifactAbsolutePath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0150
};

// Class Mastermind.MastermindJsonObject
// Size: 0x78 (Inherited: 0x28)
struct UMastermindJsonObject : UObject {
	char pad_28[0x50]; // 0x28(0x50)

	struct FString ToJsonString(); // Function Mastermind.MastermindJsonObject.ToJsonString // (Native|Public|BlueprintCallable) // @ game+0x24b3fd0
	void SetStringListField(struct FString InKey, struct TArray<struct FString>& InValues); // Function Mastermind.MastermindJsonObject.SetStringListField // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b3920
	void SetStringField(struct FString InKey, struct FString InValue); // Function Mastermind.MastermindJsonObject.SetStringField // (Native|Public|BlueprintCallable) // @ game+0x24b3820
	void SetObjectListField(struct FString InKey, struct TArray<struct UMastermindJsonObject*>& InValues); // Function Mastermind.MastermindJsonObject.SetObjectListField // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b3680
	void SetObjectField(struct FString InKey, struct UMastermindJsonObject* InValue); // Function Mastermind.MastermindJsonObject.SetObjectField // (Native|Public|BlueprintCallable) // @ game+0x24b3590
	void SetNumberListField(struct FString InKey, struct TArray<float>& InValues); // Function Mastermind.MastermindJsonObject.SetNumberListField // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b3490
	void SetNumberField(struct FString InKey, float InValue); // Function Mastermind.MastermindJsonObject.SetNumberField // (Native|Public|BlueprintCallable) // @ game+0x24b33a0
	void SetNullField(struct FString InKey); // Function Mastermind.MastermindJsonObject.SetNullField // (Native|Public|BlueprintCallable) // @ game+0x24b3300
	void SetBooleanListField(struct FString InKey, struct TArray<bool>& InValues); // Function Mastermind.MastermindJsonObject.SetBooleanListField // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b3160
	void SetBooleanField(struct FString InKey, bool InValue); // Function Mastermind.MastermindJsonObject.SetBooleanField // (Native|Public|BlueprintCallable) // @ game+0x24b3070
	bool HasAnyFields(); // Function Mastermind.MastermindJsonObject.HasAnyFields // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x170d8d0
	struct TArray<struct FString> GetStringListFieldOrDefault(struct FString InKey, bool& bOutHasField); // Function Mastermind.MastermindJsonObject.GetStringListFieldOrDefault // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b1180
	struct FString GetStringFieldOrDefault(struct FString InKey, bool& bOutHasField); // Function Mastermind.MastermindJsonObject.GetStringFieldOrDefault // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b1040
	struct TArray<struct UMastermindJsonObject*> GetObjectListFieldOrDefault(struct FString InKey, bool& bOutHasField); // Function Mastermind.MastermindJsonObject.GetObjectListFieldOrDefault // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0bd0
	struct UMastermindJsonObject* GetObjectFieldOrDefault(struct FString InKey, bool& bOutHasField); // Function Mastermind.MastermindJsonObject.GetObjectFieldOrDefault // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0ad0
	struct TArray<float> GetNumberListFieldOrDefault(struct FString InKey, bool& bOutHasField); // Function Mastermind.MastermindJsonObject.GetNumberListFieldOrDefault // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0990
	float GetNumberFieldOrDefault(struct FString InKey, bool& bOutHasField); // Function Mastermind.MastermindJsonObject.GetNumberFieldOrDefault // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0890
	struct TArray<bool> GetBooleanListFieldOrDefault(struct FString InKey, bool& bOutHasField); // Function Mastermind.MastermindJsonObject.GetBooleanListFieldOrDefault // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0650
	bool GetBooleanFieldOrDefault(struct FString InKey, bool& bOutHasField); // Function Mastermind.MastermindJsonObject.GetBooleanFieldOrDefault // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x24b0550
};

// Class Mastermind.MastermindSettings
// Size: 0xa8 (Inherited: 0x38)
struct UMastermindSettings : UDeveloperSettings {
	struct TSoftClassPtr<UObject> MastermindDebugCommandManagerClass; // 0x38(0x28)
	float MastermindTickInterval; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TSoftClassPtr<UObject> MastermindActorComponentClass; // 0x68(0x28)
	bool bIsActivatedByDefault; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t MastermindTCPPort; // 0x94(0x04)
	int32_t MaxClientConnections; // 0x98(0x04)
	char pad_9C[0xc]; // 0x9c(0x0c)
};

