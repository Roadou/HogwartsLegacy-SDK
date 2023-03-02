// BlueprintGeneratedClass BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C
// Size: 0x480 (Inherited: 0x280)
struct ABP_WE_WNAT_MazeLayout_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UChildActorComponent* LorebookPlinth; // 0x288(0x08)
	struct USceneComponent* Plinth_Location_Option_3; // 0x290(0x08)
	struct USceneComponent* Plinth_Location_Option_2; // 0x298(0x08)
	struct UArrowComponent* Plinth_Location_Arrow_3; // 0x2a0(0x08)
	struct UArrowComponent* Plinth_Location_Arrow_2; // 0x2a8(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* ExteriorBlock_HISM_Hedge_4m; // 0x2b0(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* ExteriorBlock_HISM_HedgeMaze_Corner; // 0x2b8(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* ExteriorBlock_HISM_Hedge_8m; // 0x2c0(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* ExteriorBlock_HISM_HedgeMaze_EntracePillar; // 0x2c8(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* ExteriorBlock_HISM_Hedge_1m; // 0x2d0(0x08)
	struct USceneComponent* InteriorBlockContainer; // 0x2d8(0x08)
	struct USceneComponent* SceneRoot; // 0x2e0(0x08)
	struct USceneComponent* ExteriorBlockContainer; // 0x2e8(0x08)
	struct UBillboardComponent* Default_Plinth_Location_Billboard_3; // 0x2f0(0x08)
	struct UBillboardComponent* Default_Plinth_Location_Billboard_2; // 0x2f8(0x08)
	struct UChildActorComponent* BP_MazeBlock_Corner3; // 0x300(0x08)
	struct UChildActorComponent* BP_MazeBlock_Corner2; // 0x308(0x08)
	struct UChildActorComponent* BP_MazeBlock_Corner1; // 0x310(0x08)
	struct UChildActorComponent* BP_MazeBlock_Corner; // 0x318(0x08)
	struct UChildActorComponent* BP_MazeBlock_8m2; // 0x320(0x08)
	struct UChildActorComponent* BP_MazeBlock_8m1; // 0x328(0x08)
	struct UChildActorComponent* BP_MazeBlock_8m3; // 0x330(0x08)
	struct UChildActorComponent* CreatureExclusion; // 0x338(0x08)
	struct UAkComponent* Ak_Maze_Ungrow_Finish; // 0x340(0x08)
	struct UAkComponent* Ak_Maze_Ungrow_Chest; // 0x348(0x08)
	struct UAkComponent* Ak_Maze_Grow; // 0x350(0x08)
	struct USceneComponent* PlinthLocations; // 0x358(0x08)
	struct USceneComponent* EntraceMazeBlocks; // 0x360(0x08)
	struct UBoxComponent* CentreVolume; // 0x368(0x08)
	struct UArrowComponent* Arrow; // 0x370(0x08)
	struct UChildActorComponent* Chest; // 0x378(0x08)
	struct UBP_WorldEvent_DropComponentsToGround_C* BP_WorldEvent_DropComponentsToGround; // 0x380(0x08)
	float LerpGrowTimeline_LeavesGrowth_26E37F6B437FF34395C6CEAF6145CDD6; // 0x388(0x04)
	enum class ETimelineDirection LerpGrowTimeline__Direction_26E37F6B437FF34395C6CEAF6145CDD6; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct UTimelineComponent* LerpGrowTimeline; // 0x390(0x08)
	float HideMazeTimeline_LeavesGrowth_EAC4DC2C4A87F70C2D2F7F9710D342D1; // 0x398(0x04)
	enum class ETimelineDirection HideMazeTimeline__Direction_EAC4DC2C4A87F70C2D2F7F9710D342D1; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	struct UTimelineComponent* HideMazeTimeline; // 0x3a0(0x08)
	struct ACameraStackVolume* CameraStackVolume; // 0x3a8(0x08)
	struct AForbiddenAreaVolume* ForbiddenAreaVolume; // 0x3b0(0x08)
	struct ADynamicObjectVolume* DynamicObjectVolume; // 0x3b8(0x08)
	struct TArray<struct ABP_WE_WNAT_MazeBlock_C*> EntranceBlocks; // 0x3c0(0x10)
	struct TArray<struct USceneComponent*> StaticMeshBlocks; // 0x3d0(0x10)
	struct TArray<struct ABP_WE_Challenge_NavBlocker_C*> WallNavBlockers; // 0x3e0(0x10)
	struct TArray<struct FGameplayTag> LorebookTags; // 0x3f0(0x10)
	struct TArray<struct AActor*> ObstacleTypes; // 0x400(0x10)
	struct ABP_WE_Challenge_NavBlocker_C* NavBlocker; // 0x410(0x08)
	struct ABP_WE_Challenge_NavBlocker_C* NavBlockerTunnel; // 0x418(0x08)
	struct FTransform CameraStackTransform; // 0x420(0x30)
	int32_t WorldEventStage; // 0x450(0x04)
	int32_t DeferredCounter; // 0x454(0x04)
	struct TArray<struct AActor*> Obstacles; // 0x458(0x10)
	int32_t ObstacleIndex; // 0x468(0x04)
	int32_t ObstacleSpawnChance; // 0x46c(0x04)
	bool ShouldSpawnObstacle; // 0x470(0x01)
	bool bMazeRaised; // 0x471(0x01)
	char pad_472[0x2]; // 0x472(0x02)
	struct FVector ChestOnGroundLocation; // 0x474(0x0c)

	void SetFirstWallToInside(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.SetFirstWallToInside // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetPlinthTransform(struct FTransform& Transform); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.GetPlinthTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetAllCollision(bool IncludeEdgeBlocks, bool IncludeBPBlocks, bool Enable); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.SetAllCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetStageComplete(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.SetStageComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetCurrentLorebookTag(struct FGameplayTag& Tag); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.GetCurrentLorebookTag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DestroyFinishedActors(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.DestroyFinishedActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TeleportNearbyNPCs(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.TeleportNearbyNPCs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetNavBlockers(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.SetNavBlockers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LerpGrowTimeline__FinishedFunc(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.LerpGrowTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void LerpGrowTimeline__UpdateFunc(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.LerpGrowTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void LerpGrowTimeline__PrepareMaze__EventFunc(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.LerpGrowTimeline__PrepareMaze__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void HideMazeTimeline__FinishedFunc(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.HideMazeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void HideMazeTimeline__UpdateFunc(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.HideMazeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void HideMazeTimeline__Unprepare__EventFunc(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.HideMazeTimeline__Unprepare__EventFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void RaiseMaze(); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.RaiseMaze // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__CentreVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.BndEvt__CentreVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void HideMaze(bool CentreMaze); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.HideMaze // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_WNAT_MazeLayout(int32_t EntryPoint); // Function BP_WE_WNAT_MazeLayout.BP_WE_WNAT_MazeLayout_C.ExecuteUbergraph_BP_WE_WNAT_MazeLayout // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

