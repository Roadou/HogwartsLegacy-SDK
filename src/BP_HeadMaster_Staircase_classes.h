// BlueprintGeneratedClass BP_HeadMaster_Staircase.BP_HeadMaster_Staircase_C
// Size: 0x318 (Inherited: 0x248)
struct ABP_HeadMaster_Staircase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* VFX_NS_HeadmasterStairsLoop; // 0x250(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258(0x08)
	struct USceneComponent* audio_location; // 0x260(0x08)
	struct UStaticMeshComponent* Sphere; // 0x268(0x08)
	struct USceneComponent* CalloutAttachComponent; // 0x270(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x278(0x08)
	struct UStaticMeshComponent* SM_HeadmasterStairs_COL; // 0x280(0x08)
	struct USkeletalMeshComponent* SK_HeadmasterStairsA; // 0x288(0x08)
	struct UStaticMeshComponent* Gargoyle; // 0x290(0x08)
	struct UStaticMeshComponent* SM_HW_SB_Stair_Spiral_3mx3m_rise1M_Quart_RailTop; // 0x298(0x08)
	struct UStaticMeshComponent* SM_HW_GST_Entryway_Rail_2m; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_HW_GST_Entryway_Rail_2m1; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_HW_SB_Stair_Spiral_Flat_Quart; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_HW_HeadmasterStairsCenter; // 0x2b8(0x08)
	struct UStaticMeshComponent* BottomLanding; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	float Timeline_0_NewTrack_0_E89D0FD34F9D77F1845C469CD6B4A40A; // 0x2d0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_E89D0FD34F9D77F1845C469CD6B4A40A; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2d8(0x08)
	struct FVector StartingLocation; // 0x2e0(0x0c)
	struct FRotator StartingRotation; // 0x2ec(0x0c)
	struct TArray<struct UStaticMeshComponent*> Meshes; // 0x2f8(0x10)
	bool GoingUp; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	struct FVector BoxLoc; // 0x30c(0x0c)

	void Timeline_0__FinishedFunc(); // Function BP_HeadMaster_Staircase.BP_HeadMaster_Staircase_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_HeadMaster_Staircase.BP_HeadMaster_Staircase_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HeadMaster_Staircase.BP_HeadMaster_Staircase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Raise(); // Function BP_HeadMaster_Staircase.BP_HeadMaster_Staircase_C.Raise // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Lower(); // Function BP_HeadMaster_Staircase.BP_HeadMaster_Staircase_C.Lower // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_HeadMaster_Staircase.BP_HeadMaster_Staircase_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CustomEvent_2(); // Function BP_HeadMaster_Staircase.BP_HeadMaster_Staircase_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function BP_HeadMaster_Staircase.BP_HeadMaster_Staircase_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HeadMaster_Staircase(int32_t EntryPoint); // Function BP_HeadMaster_Staircase.BP_HeadMaster_Staircase_C.ExecuteUbergraph_BP_HeadMaster_Staircase // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

