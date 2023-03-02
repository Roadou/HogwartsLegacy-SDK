// BlueprintGeneratedClass BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C
// Size: 0x560 (Inherited: 0x470)
struct ABP_WE_BurnableSpiderWeb_C : ASpiderWeb_Interactive {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UBillboardComponent* Billboard; // 0x478(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x480(0x08)
	struct FMulticastInlineDelegate WebOnFire; // 0x488(0x10)
	struct FMulticastInlineDelegate WebDestroyed; // 0x498(0x10)
	struct TArray<struct ABP_CaveInEvent_C*> CaveInEvents; // 0x4a8(0x10)
	struct TArray<struct AActor*> TargetSwitches; // 0x4b8(0x10)
	int32_t PropIndex; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x4d0(0x50)
	bool CompiledList; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct FMeshList Props; // 0x528(0x10)
	struct UMaterialInstanceDynamic* Material; // 0x538(0x08)
	float OpacityMultiplier; // 0x540(0x04)
	struct FLinearColor DiffuseColorTint; // 0x544(0x10)
	float TextureTilingMultiplier; // 0x554(0x04)
	struct FRandomStream Random Seed; // 0x558(0x08)

	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecreaseFire(float decreaseAmount); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RemoveAIObstacles(); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.RemoveAIObstacles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupWeb(); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.SetupWeb // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_BurnableSpiderWeb(int32_t EntryPoint); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.ExecuteUbergraph_BP_WE_BurnableSpiderWeb // (Final|UbergraphFunction) // @ game+0x38a7480
	void WebDestroyed__DelegateSignature(); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.WebDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WebOnFire__DelegateSignature(struct FVector Location); // Function BP_WE_BurnableSpiderWeb.BP_WE_BurnableSpiderWeb_C.WebOnFire__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

