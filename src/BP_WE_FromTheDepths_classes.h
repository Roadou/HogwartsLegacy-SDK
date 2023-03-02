// BlueprintGeneratedClass BP_WE_FromTheDepths.BP_WE_FromTheDepths_C
// Size: 0x330 (Inherited: 0x280)
struct ABP_WE_FromTheDepths_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* AkSplashIn; // 0x288(0x08)
	struct UAkComponent* AkSplashOut; // 0x290(0x08)
	struct USkeletalMeshComponent* SK_GiantSquid_Long_Tentacle_B; // 0x298(0x08)
	struct USkeletalMeshComponent* SK_GiantSquid_Long_Tentacle_A; // 0x2a0(0x08)
	struct UStaticMeshComponent* VFX_Surface_Loc; // 0x2a8(0x08)
	struct USkeletalMeshComponent* SK_GiantSquid_Short_Tentacle_C; // 0x2b0(0x08)
	struct USkeletalMeshComponent* SK_GiantSquid_Short_Tentacle_B; // 0x2b8(0x08)
	struct USkeletalMeshComponent* SK_GiantSquid_Short_Tentacle_A; // 0x2c0(0x08)
	struct USceneComponent* ShortTentacles; // 0x2c8(0x08)
	struct UBoxComponent* Above_Surface_Area; // 0x2d0(0x08)
	float WaterSurface_ZValue; // 0x2d8(0x04)
	int32_t Ts_AboveWater; // 0x2dc(0x04)
	struct TArray<struct FName> T1_Bones; // 0x2e0(0x10)
	struct TArray<struct FName> T2_Bones; // 0x2f0(0x10)
	struct TArray<struct FName> Tentacle_Bones_Wet; // 0x300(0x10)
	struct UNiagaraComponent* T1_Water_Ribbon_VFX; // 0x310(0x08)
	struct UNiagaraComponent* T2_Water_Ribbon_VFX; // 0x318(0x08)
	struct UNiagaraComponent* T1_Water_Splash_VFX; // 0x320(0x08)
	struct UNiagaraComponent* T2_Water_Splash_VFX; // 0x328(0x08)

	void UserConstructionScript(); // Function BP_WE_FromTheDepths.BP_WE_FromTheDepths_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_WE_FromTheDepths.BP_WE_FromTheDepths_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnStartTriggerOverlapped(struct UWorldEventSocketComponent* Socket); // Function BP_WE_FromTheDepths.BP_WE_FromTheDepths_C.OnStartTriggerOverlapped // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_FromTheDepths.BP_WE_FromTheDepths_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void FTD_Breached_A(struct UObject* Caller); // Function BP_WE_FromTheDepths.BP_WE_FromTheDepths_C.FTD_Breached_A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FTD_Submerged_A(struct UObject* Caller); // Function BP_WE_FromTheDepths.BP_WE_FromTheDepths_C.FTD_Submerged_A // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FTD_Breached_B(struct UObject* Caller); // Function BP_WE_FromTheDepths.BP_WE_FromTheDepths_C.FTD_Breached_B // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FTD_Submerged_B(struct UObject* Caller); // Function BP_WE_FromTheDepths.BP_WE_FromTheDepths_C.FTD_Submerged_B // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WE_FromTheDepths.BP_WE_FromTheDepths_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_FromTheDepths(int32_t EntryPoint); // Function BP_WE_FromTheDepths.BP_WE_FromTheDepths_C.ExecuteUbergraph_BP_WE_FromTheDepths // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

