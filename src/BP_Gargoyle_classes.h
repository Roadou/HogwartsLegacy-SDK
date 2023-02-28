// BlueprintGeneratedClass BP_Gargoyle.BP_Gargoyle_C
// Size: 0x3b8 (Inherited: 0x248)
struct ABP_Gargoyle_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UAkComponent* Ak_Gargoyle_Dialogue; // 0x250(0x08)
	struct UDialogueComponent* Dialogue; // 0x258(0x08)
	struct UObjectStateComponent* ObjectState; // 0x260(0x08)
	struct USkeletalMeshComponent* SK_Gargoyle_A; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	struct TMap<enum class E_GargoyleTypeEnum, struct USkeletalMesh*> GargoyleData; // 0x278(0x50)
	enum class E_GargoyleTypeEnum GargoyleType; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct TMap<enum class E_GargoyleTypeEnum, struct FSTR_GargoyleAnimation> GargoyleAnimData; // 0x2d0(0x50)
	bool IsAwake; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float WaitMin; // 0x324(0x04)
	float WaitMax; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct TArray<struct AActor*> Actors; // 0x330(0x10)
	struct UAnimSequence* CurrentAnim; // 0x340(0x08)
	struct TArray<struct FString> In Additional Character IDs; // 0x348(0x10)
	struct TArray<struct FAvaAudioPrepareDialogueSequenceResult> DialogueSequenceResults; // 0x358(0x10)
	struct TMap<struct FString, struct FString> DialogueParams; // 0x368(0x50)

	void UserConstructionScript(); // Function BP_Gargoyle.BP_Gargoyle_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_Gargoyle.BP_Gargoyle_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Gargoyle.BP_Gargoyle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_Gargoyle.BP_Gargoyle_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_Gargoyle.BP_Gargoyle_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Gargoyle(int32_t EntryPoint); // Function BP_Gargoyle.BP_Gargoyle_C.ExecuteUbergraph_BP_Gargoyle // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

