// BlueprintGeneratedClass BP_SanctumDoor.BP_SanctumDoor_C
// Size: 0x3d0 (Inherited: 0x248)
struct ABP_SanctumDoor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)
	struct UStaticMeshComponent* SM_SanctumDun_AncientMagic_BarrierPart_4; // 0x258(0x08)
	struct UStaticMeshComponent* SM_SanctumDun_AncientMagic_BarrierPart_3; // 0x260(0x08)
	struct UStaticMeshComponent* SM_SanctumDun_AncientMagic_BarrierPart_2; // 0x268(0x08)
	struct USceneComponent* AncientBlocker; // 0x270(0x08)
	struct UStaticMeshComponent* SM_SanctumDun_Door_AncientMagic_Left; // 0x278(0x08)
	struct UStaticMeshComponent* SM_SanctumDun_Door_AncientMagic_Right; // 0x280(0x08)
	struct UStaticMeshComponent* SM_SanctumDun_Door_AncientMagic_Stone1; // 0x288(0x08)
	struct UStaticMeshComponent* SM_SanctumDun_Door_AncientMagic_Stone; // 0x290(0x08)
	struct UStaticMeshComponent* Frame1; // 0x298(0x08)
	struct UAkComponent* Ak_BP_SanctumDoor; // 0x2a0(0x08)
	struct USceneComponent* Root; // 0x2a8(0x08)
	struct USceneComponent* LeftHinge; // 0x2b0(0x08)
	struct USceneComponent* RightHinge; // 0x2b8(0x08)
	struct UStaticMeshComponent* Frame; // 0x2c0(0x08)
	float Timeline_2_Radius_29F8098F46763A23C074DD85B71F5998; // 0x2c8(0x04)
	enum class ETimelineDirection Timeline_2__Direction_29F8098F46763A23C074DD85B71F5998; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct UTimelineComponent* Timeline_3; // 0x2d0(0x08)
	float Timeline_1_Radius_B9FE411D4CE677B79E081187FA45659C; // 0x2d8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_B9FE411D4CE677B79E081187FA45659C; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2e0(0x08)
	float Barrier01_Radius_CA3921D04EE50575C78DE7AE150C7DB5; // 0x2e8(0x04)
	enum class ETimelineDirection Barrier01__Direction_CA3921D04EE50575C78DE7AE150C7DB5; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* Barrier01; // 0x2f0(0x08)
	float Timeline_0_Scale_FA9356B24971ABE784533DAB78F6AC5E; // 0x2f8(0x04)
	float Timeline_0_Bend_FA9356B24971ABE784533DAB78F6AC5E; // 0x2fc(0x04)
	float Timeline_0_DisolveLock_FA9356B24971ABE784533DAB78F6AC5E; // 0x300(0x04)
	float Timeline_0_Open_FA9356B24971ABE784533DAB78F6AC5E; // 0x304(0x04)
	enum class ETimelineDirection Timeline_0__Direction_FA9356B24971ABE784533DAB78F6AC5E; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UTimelineComponent* Timeline_1; // 0x310(0x08)
	int32_t #ofSwitches; // 0x318(0x04)
	int32_t Counter; // 0x31c(0x04)
	float Delay; // 0x320(0x04)
	float Dir; // 0x324(0x04)
	bool WriteStat; // 0x328(0x01)
	bool Save; // 0x329(0x01)
	char pad_32A[0x2]; // 0x32a(0x02)
	struct FName SaveStat; // 0x32c(0x08)
	int32_t StatValue; // 0x334(0x04)
	float Delay VO; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct FDialogueConversationReference Dialogue Event Name; // 0x340(0x10)
	struct FMulticastInlineDelegate Door Activated; // 0x350(0x10)
	bool UseRunes; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FMulticastInlineDelegate DoorOpened; // 0x368(0x10)
	struct TArray<struct AActor*> SwitchTargets; // 0x378(0x10)
	struct FMulticastInlineDelegate PuzzleSolved; // 0x388(0x10)
	float SwitchDelay; // 0x398(0x04)
	bool IsOpen; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	float BarrierRadius; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct UMaterialInstanceDynamic* GateSectionA; // 0x3a8(0x08)
	struct UMaterialInstanceDynamic* GateSectionB; // 0x3b0(0x08)
	struct UMaterialInstanceDynamic* GateSectionC; // 0x3b8(0x08)
	bool GateAOpen; // 0x3c0(0x01)
	bool GateBOpen; // 0x3c1(0x01)
	bool GateCOpen; // 0x3c2(0x01)
	char pad_3C3[0x1]; // 0x3c3(0x01)
	float doorCloseRate; // 0x3c4(0x04)
	struct AAkAcousticPortal* Acoustic Portal; // 0x3c8(0x08)

	void AncientBarrierToggle(bool IsIncrement); // Function BP_SanctumDoor.BP_SanctumDoor_C.AncientBarrierToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_SanctumDoor.BP_SanctumDoor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_SanctumDoor.BP_SanctumDoor_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_SanctumDoor.BP_SanctumDoor_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Barrier01__FinishedFunc(); // Function BP_SanctumDoor.BP_SanctumDoor_C.Barrier01__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Barrier01__UpdateFunc(); // Function BP_SanctumDoor.BP_SanctumDoor_C.Barrier01__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_SanctumDoor.BP_SanctumDoor_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_SanctumDoor.BP_SanctumDoor_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function BP_SanctumDoor.BP_SanctumDoor_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function BP_SanctumDoor.BP_SanctumDoor_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_SanctumDoor.BP_SanctumDoor_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_SanctumDoor.BP_SanctumDoor_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_SanctumDoor.BP_SanctumDoor_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Open(); // Function BP_SanctumDoor.BP_SanctumDoor_C.Open // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SanctumDoor.BP_SanctumDoor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StartOpen(); // Function BP_SanctumDoor.BP_SanctumDoor_C.StartOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BarrierUnlock(bool Activate); // Function BP_SanctumDoor.BP_SanctumDoor_C.BarrierUnlock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BarrierBOpen(bool Activate); // Function BP_SanctumDoor.BP_SanctumDoor_C.BarrierBOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BarrierCOpen(bool Activate); // Function BP_SanctumDoor.BP_SanctumDoor_C.BarrierCOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerAllOff(); // Function BP_SanctumDoor.BP_SanctumDoor_C.TriggerAllOff // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ABP_AutosaveTrigger_C* AutosaveActor); // Function BP_SanctumDoor.BP_SanctumDoor_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DisableAudioLine(); // Function BP_SanctumDoor.BP_SanctumDoor_C.DisableAudioLine // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SanctumDoor(int32_t EntryPoint); // Function BP_SanctumDoor.BP_SanctumDoor_C.ExecuteUbergraph_BP_SanctumDoor // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PuzzleSolved__DelegateSignature(); // Function BP_SanctumDoor.BP_SanctumDoor_C.PuzzleSolved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoorOpened__DelegateSignature(); // Function BP_SanctumDoor.BP_SanctumDoor_C.DoorOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Door Activated__DelegateSignature(); // Function BP_SanctumDoor.BP_SanctumDoor_C.Door Activated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

