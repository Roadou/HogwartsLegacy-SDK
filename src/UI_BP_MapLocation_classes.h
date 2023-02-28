// BlueprintGeneratedClass UI_BP_MapLocation.UI_BP_MapLocation_C
// Size: 0x428 (Inherited: 0x358)
struct AUI_BP_MapLocation_C : AMapLocationActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UTargetComponent* PathToPoint; // 0x360(0x08)
	struct UTargetComponent* BeaconLocation; // 0x368(0x08)
	struct UChildActorComponent* Beacon; // 0x370(0x08)
	struct UArrowComponent* TargetFocusPointComponent; // 0x378(0x08)
	float PushBackTimeline_Blend_0776AEB847CE656585B9AABC59148ADB; // 0x380(0x04)
	enum class ETimelineDirection PushBackTimeline__Direction_0776AEB847CE656585B9AABC59148ADB; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	struct UTimelineComponent* PushBackTimeline; // 0x388(0x08)
	float PushForwardTimeline_Blend_0FD00A734526D106AA9C1FACFB5BC4B9; // 0x390(0x04)
	enum class ETimelineDirection PushForwardTimeline__Direction_0FD00A734526D106AA9C1FACFB5BC4B9; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct UTimelineComponent* PushForwardTimeline; // 0x398(0x08)
	struct TArray<struct UMaterialInstance*> DynamicMaterials; // 0x3a0(0x10)
	struct ACameraActor* Camera; // 0x3b0(0x08)
	struct TArray<struct AUI_BP_MapLocation_C*> InteriorLocations; // 0x3b8(0x10)
	struct TArray<struct AActor*> ActorsToHide; // 0x3c8(0x10)
	struct TMap<struct FString, struct ACameraActor*> Cameras; // 0x3d8(0x50)

	void GetPathToPoint(struct FVector& PathToLocation); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.GetPathToPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ActivateOutline(float Thickness, int32_t Color, bool ACTIVE); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.ActivateOutline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetLocationCamera(struct FString Group, struct ACameraActor*& Camera); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.GetLocationCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBeaconHilight(bool Hilight); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.SetBeaconHilight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ShowBeacon(bool Visible); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.ShowBeacon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetActorsVisibility(struct TArray<struct AActor*>& Actors, bool Visible); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.SetActorsVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetXRay(bool On); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.SetXRay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetBlend(float Blend); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.SetBlend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RestoreMaterials(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.RestoreMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetSaturation(bool Saturate); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.SetSaturation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PushForwardTimeline__FinishedFunc(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.PushForwardTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void PushForwardTimeline__UpdateFunc(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.PushForwardTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void PushBackTimeline__FinishedFunc(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.PushBackTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void PushBackTimeline__UpdateFunc(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.PushBackTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void PushForward(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.PushForward // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PushBack(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.PushBack // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBringForward_Event(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.OnBringForward_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnPushBackward_Event(); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.OnPushBackward_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnActivateHighlight_Event(bool Activate); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.OnActivateHighlight_Event // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_UI_BP_MapLocation(int32_t EntryPoint); // Function UI_BP_MapLocation.UI_BP_MapLocation_C.ExecuteUbergraph_UI_BP_MapLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

