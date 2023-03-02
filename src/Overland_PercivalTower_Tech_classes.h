// BlueprintGeneratedClass Overland_PercivalTower_Tech.Overland_PercivalTower_Tech_C
// Size: 0x298 (Inherited: 0x250)
struct AOverland_PercivalTower_Tech_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FString Setup; // 0x258(0x10)
	struct FString AMBurst_Door; // 0x268(0x10)
	struct ABP_AncientMagicHotSpot_C* BP_AncientMagicHotSpot_2_ExecuteUbergraph_Overland_PercivalTower_Tech_RefProperty; // 0x278(0x08)
	struct AStaticMeshActor* Cube_RoofHoleCollider_ExecuteUbergraph_Overland_PercivalTower_Tech_RefProperty; // 0x280(0x08)
	struct AActor* SM_CampB_2_5x_PlankHISMA_ExecuteUbergraph_Overland_PercivalTower_Tech_RefProperty; // 0x288(0x08)
	struct AActor* SM_CampB_2m_PlankAHISMA_ExecuteUbergraph_Overland_PercivalTower_Tech_RefProperty; // 0x290(0x08)

	void ReceiveBeginPlay(); // Function Overland_PercivalTower_Tech.Overland_PercivalTower_Tech_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void FGT_Activate_AMHS(struct UObject* Caller); // Function Overland_PercivalTower_Tech.Overland_PercivalTower_Tech_C.FGT_Activate_AMHS // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FGT_RemoveRoofBlocker(struct UObject* Caller); // Function Overland_PercivalTower_Tech.Overland_PercivalTower_Tech_C.FGT_RemoveRoofBlocker // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__Overland_PercivalTower_Tech_KillHotspot_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Overland_PercivalTower_Tech.Overland_PercivalTower_Tech_C.BndEvt__Overland_PercivalTower_Tech_KillHotspot_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_Overland_PercivalTower_Tech(int32_t EntryPoint); // Function Overland_PercivalTower_Tech.Overland_PercivalTower_Tech_C.ExecuteUbergraph_Overland_PercivalTower_Tech // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

