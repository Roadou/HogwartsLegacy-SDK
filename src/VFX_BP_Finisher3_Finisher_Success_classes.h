// BlueprintGeneratedClass VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C
// Size: 0x2b0 (Inherited: 0x248)
struct AVFX_BP_Finisher3_Finisher_Success_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* Smoke; // 0x250(0x08)
	struct UDecalComponent* Decal; // 0x258(0x08)
	struct UNiagaraComponent* Explode; // 0x260(0x08)
	struct UNiagaraComponent* LightningStrike; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float Timeline_2_NewTrack_2_9F76AB2A4CBCD987B2A2089B47893628; // 0x278(0x04)
	enum class ETimelineDirection Timeline_2__Direction_9F76AB2A4CBCD987B2A2089B47893628; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Timeline_3; // 0x280(0x08)
	float Timeline_1_NewTrack_0_D9E90DE24FD5225626FC1FAD0F04D89B; // 0x288(0x04)
	enum class ETimelineDirection Timeline_1__Direction_D9E90DE24FD5225626FC1FAD0F04D89B; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x290(0x08)
	float Timeline_0_NewTrack_0_7C8BE7014617D48FED32278D5BB5CD93; // 0x298(0x04)
	enum class ETimelineDirection Timeline_0__Direction_7C8BE7014617D48FED32278D5BB5CD93; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* Decal_Mat; // 0x2a8(0x08)

	void UserConstructionScript(); // Function VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__FinishedFunc(); // Function VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_2__UpdateFunc(); // Function VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Finisher3_Finisher_Success(int32_t EntryPoint); // Function VFX_BP_Finisher3_Finisher_Success.VFX_BP_Finisher3_Finisher_Success_C.ExecuteUbergraph_VFX_BP_Finisher3_Finisher_Success // (Final|UbergraphFunction) // @ game+0x38a7480
};

