// BlueprintGeneratedClass BP_SpiderWeb.BP_spiderweb_C
// Size: 0x5b8 (Inherited: 0x470)
struct ABP_spiderweb_C : ASpiderWeb_Interactive {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UInteractiveObjectComponent* InteractiveObject; // 0x478(0x08)
	struct UOdcObstacleComponent* OdcObstacle; // 0x480(0x08)
	struct UStaticMeshComponent* NavObstacle; // 0x488(0x08)
	struct UAkComponent* Ak_BP_SpiderWeb_Burning_Loop; // 0x490(0x08)
	struct UBillboardComponent* Billboard; // 0x498(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x4a0(0x08)
	struct FMulticastInlineDelegate WebOnFire; // 0x4a8(0x10)
	struct FMulticastInlineDelegate WebFrozen; // 0x4b8(0x10)
	struct FMulticastInlineDelegate WebDestroyed; // 0x4c8(0x10)
	struct TArray<struct ABP_CaveInEvent_C*> CaveInEvents; // 0x4d8(0x10)
	struct TArray<struct AActor*> TargetSwitches; // 0x4e8(0x10)
	int32_t PropIndex; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct TMap<struct TSoftObjectPtr<UStaticMesh>, bool> MeshSelect; // 0x500(0x50)
	bool CompiledList; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct FMeshList Props; // 0x558(0x10)
	struct UMaterialInstanceDynamic* Material; // 0x568(0x08)
	bool OverrideOpacity; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	float OpacityMultiplier; // 0x574(0x04)
	struct FLinearColor DiffuseColorTint; // 0x578(0x10)
	float TextureTilingMultiplier; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x590(0x10)
	bool IsNavObstacle; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	struct FRandomStream Random Seed; // 0x5a4(0x08)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct UOdcAuthoredObstacleSetupComponent* Odc Obstacle; // 0x5b0(0x08)

	struct FName GetMainBone(); // Function BP_SpiderWeb.BP_spiderweb_C.GetMainBone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct UPrimitiveComponent* GetMainPrimitive(); // Function BP_SpiderWeb.BP_spiderweb_C.GetMainPrimitive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFreeze(struct AActor* Instigator, float Amount); // Function BP_SpiderWeb.BP_spiderweb_C.StartFreeze // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool DecreaseFire(float decreaseAmount); // Function BP_SpiderWeb.BP_spiderweb_C.DecreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IncreaseFire(float increaseAmount, struct FVector Location); // Function BP_SpiderWeb.BP_spiderweb_C.IncreaseFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool IsPointOnFire(struct FVector Point, bool& OnFire); // Function BP_SpiderWeb.BP_spiderweb_C.IsPointOnFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	bool StartFire(float Amount, struct FVector Location); // Function BP_SpiderWeb.BP_spiderweb_C.StartFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupWeb(); // Function BP_SpiderWeb.BP_spiderweb_C.SetupWeb // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_SpiderWeb.BP_spiderweb_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnReset(); // Function BP_SpiderWeb.BP_spiderweb_C.OnReset // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetupSfx(struct UAkComponent* AkComponent); // Function BP_SpiderWeb.BP_spiderweb_C.SetupSfx // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToFreeze(); // Function BP_SpiderWeb.BP_spiderweb_C.OnAttemptToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToFreeze(); // Function BP_SpiderWeb.BP_spiderweb_C.OnFailedToFreeze // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnAttemptToSetOnFire(struct FVector Location); // Function BP_SpiderWeb.BP_spiderweb_C.OnAttemptToSetOnFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFailedToLight(); // Function BP_SpiderWeb.BP_spiderweb_C.OnFailedToLight // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SpiderWeb.BP_spiderweb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void WebFreezing(); // Function BP_SpiderWeb.BP_spiderweb_C.WebFreezing // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnThaw(struct AActor* Instigator); // Function BP_SpiderWeb.BP_spiderweb_C.OnThaw // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_SpiderWeb.BP_spiderweb_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_SpiderWeb.BP_spiderweb_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnCompletelyCharred(); // Function BP_SpiderWeb.BP_spiderweb_C.OnCompletelyCharred // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnCaughtFire(struct UIncendioComponent* IncendioComponent); // Function BP_SpiderWeb.BP_spiderweb_C.OnCaughtFire // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnFireExtinguished(); // Function BP_SpiderWeb.BP_spiderweb_C.OnFireExtinguished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SpiderWeb(int32_t EntryPoint); // Function BP_SpiderWeb.BP_spiderweb_C.ExecuteUbergraph_BP_SpiderWeb // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void WebDestroyed__DelegateSignature(); // Function BP_SpiderWeb.BP_spiderweb_C.WebDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WebFrozen__DelegateSignature(); // Function BP_SpiderWeb.BP_spiderweb_C.WebFrozen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void WebOnFire__DelegateSignature(struct FVector Location); // Function BP_SpiderWeb.BP_spiderweb_C.WebOnFire__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

