// BlueprintGeneratedClass BP_Portcullis_Base.BP_Portcullis_Base_C
// Size: 0x38d (Inherited: 0x248)
struct ABP_Portcullis_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPadlockComponent* padlock; // 0x250(0x08)
	struct UAkComponent* Ak_BP_Portcullis_Base; // 0x258(0x08)
	struct USphereComponent* Overlap; // 0x260(0x08)
	struct USceneComponent* CalloutLocation; // 0x268(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSourceA; // 0x270(0x08)
	struct UStaticMeshComponent* PortculisFrame; // 0x278(0x08)
	struct UStaticMeshComponent* Portculis; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	float Open_position_0A841224490FA5B083C154883BCFAB58; // 0x290(0x04)
	enum class ETimelineDirection Open__Direction_0A841224490FA5B083C154883BCFAB58; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Open; // 0x298(0x08)
	bool useSchedule; // 0x2a0(0x01)
	bool wantsToOpen; // 0x2a1(0x01)
	char pad_2A2[0x6]; // 0x2a2(0x06)
	struct FEventDateTime openTime; // 0x2a8(0x40)
	struct FEventDateTime closeTime; // 0x2e8(0x40)
	bool IsOpen; // 0x328(0x01)
	bool IsLocked; // 0x329(0x01)
	bool hasBeenOpened; // 0x32a(0x01)
	char pad_32B[0x1]; // 0x32b(0x01)
	struct FVector openPosition; // 0x32c(0x0c)
	struct FVector closePosition; // 0x338(0x0c)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<int32_t> Handles; // 0x348(0x10)
	bool interactable; // 0x358(0x01)
	bool requiresAlohomora; // 0x359(0x01)
	char pad_35A[0x2]; // 0x35a(0x02)
	int32_t alohomoraLevelRequired; // 0x35c(0x04)
	struct FVector cogLookAtPoint; // 0x360(0x0c)
	struct FVector cogCalloutLocation; // 0x36c(0x0c)
	float PlayRate; // 0x378(0x04)
	struct FVector ActorBounds; // 0x37c(0x0c)
	int32_t numInside; // 0x388(0x04)
	bool StayOpenDayHours; // 0x38c(0x01)

	struct UMeshComponent* GetAttachToMesh(); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.GetAttachToMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector GetSoundPos(); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.GetSoundPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CompareTimeEvent(struct FTimeEvent TimeEvent); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.CompareTimeEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HasRequiredAlohomoraLevel(int32_t RequiredLevel, bool& canCast); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.HasRequiredAlohomoraLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateCallout(); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.UpdateCallout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetInitialPosition(); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.SetInitialPosition // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Open__FinishedFunc(); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.Open__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Open__UpdateFunc(); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.Open__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void OnLocked(); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.OnLocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnUnlocked(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool FromMinigame); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.OnUnlocked // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SetAudioSwitch(struct UAkComponent* AkComponent); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.SetAudioSwitch // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void CloseGate(struct FTimeEvent& InTimeEvent); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.CloseGate // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OpenGate(struct FTimeEvent& InTimeEvent); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.OpenGate // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Portcullis_Base(int32_t EntryPoint); // Function BP_Portcullis_Base.BP_Portcullis_Base_C.ExecuteUbergraph_BP_Portcullis_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

