// BlueprintGeneratedClass BP_Ivy.BP_Ivy_C
// Size: 0x2d4 (Inherited: 0x248)
struct ABP_Ivy_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UObjectStateComponent* ObjectState; // 0x250(0x08)
	struct UStaticMeshComponent* roots; // 0x258(0x08)
	enum class EEnvironment Environment; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	int32_t PropIndex; // 0x264(0x04)
	struct FMulticastInlineDelegate OnFire; // 0x268(0x10)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x278(0x50)
	int32_t EnvInt; // 0x2c8(0x04)
	struct FRandomStream Random Seed; // 0x2cc(0x08)

	bool DecreaseFire(float decreaseAmount); // Function BP_Ivy.BP_Ivy_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_Ivy.BP_Ivy_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_Ivy.BP_Ivy_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_Ivy.BP_Ivy_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Ivy.BP_Ivy_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_Ivy.BP_Ivy_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_Ivy.BP_Ivy_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_Ivy.BP_Ivy_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_Ivy.BP_Ivy_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_Ivy.BP_Ivy_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Ivy(int32_t EntryPoint); // Function BP_Ivy.BP_Ivy_C.ExecuteUbergraph_BP_Ivy // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnFire__DelegateSignature(); // Function BP_Ivy.BP_Ivy_C.OnFire__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

