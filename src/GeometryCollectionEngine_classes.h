// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x490 (Inherited: 0x220)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x218(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x218(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x218(0x01)
	char bIsRemovalEventListeningEnabled : 1; // 0x218(0x01)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x21c(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x234(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x24c(0x18)
	struct FChaosRemovalEventRequestSettings RemovalEventRequestSettings; // 0x264(0x10)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x278(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x2c8(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x318(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x328(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x338(0x10)
	struct FMulticastInlineDelegate OnRemovalEvents; // 0x348(0x10)
	char pad_358_4 : 4; // 0x358(0x01)
	char pad_359[0x137]; // 0x359(0x137)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d551c0
	void SortRemovalEvents(struct TArray<struct FChaosRemovalEventData>& RemovalEvents, enum class EChaosRemovalSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d550c0
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d54fc0
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d54ec0
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d54e20
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4d54d90
	void SetRemovalEventRequestSettings(struct FChaosRemovalEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d54cf0
	void SetRemovalEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4d54c60
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d54aa0
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4d54a10
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4d54970
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4d548e0
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x4d54850
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1480ed0
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d54560
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x4d54290
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1480ed0
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x258 (Inherited: 0x248)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x248(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x250(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d546d0
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x08)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0x970 (Inherited: 0x4b0)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x4b0(0x08)
	char pad_4B8[0xe8]; // 0x4b8(0xe8)
	struct UGeometryCollection* RestCollection; // 0x5a0(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x5a8(0x10)
	bool Simulating; // 0x5b8(0x01)
	char pad_5B9[0x7]; // 0x5b9(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x5c0(0x01)
	bool bForceMotionBlur; // 0x5c1(0x01)
	bool EnableClustering; // 0x5c2(0x01)
	char pad_5C3[0x1]; // 0x5c3(0x01)
	int32_t ClusterGroupIndex; // 0x5c4(0x04)
	int32_t MaxClusterLevel; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct TArray<float> DamageThreshold; // 0x5d0(0x10)
	bool bUseSizeSpecificDamageThreshold; // 0x5e0(0x01)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x5e1(0x01)
	char pad_5E2[0x2]; // 0x5e2(0x02)
	int32_t CollisionGroup; // 0x5e4(0x04)
	float CollisionSampleFraction; // 0x5e8(0x04)
	float LinearEtherDrag; // 0x5ec(0x04)
	float AngularEtherDrag; // 0x5f0(0x04)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x5f8(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	struct FVector InitialLinearVelocity; // 0x604(0x0c)
	struct FVector InitialAngularVelocity; // 0x610(0x0c)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x620(0x08)
	struct FGeomComponentCacheParameters CacheParameters; // 0x628(0x50)
	struct TArray<struct FTransform> RestTransforms; // 0x678(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x688(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x698(0x10)
	char pad_6A8[0x18]; // 0x6a8(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x6c0(0x10)
	struct FMulticastInlineDelegate OnChaosRemovalEvent; // 0x6d0(0x10)
	struct FMulticastInlineDelegate OnChaosRemovalCompletedEvent; // 0x6e0(0x10)
	float DesiredCacheTime; // 0x6f0(0x04)
	bool CachePlayback; // 0x6f4(0x01)
	char pad_6F5[0x3]; // 0x6f5(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x6f8(0x10)
	bool bNotifyBreaks; // 0x708(0x01)
	bool bNotifyCollisions; // 0x709(0x01)
	bool bNotifyTrailing; // 0x70a(0x01)
	bool bNotifyRemovals; // 0x70b(0x01)
	bool bStoreVelocities; // 0x70c(0x01)
	bool bShowBoneColors; // 0x70d(0x01)
	bool bEnableReplication; // 0x70e(0x01)
	bool bEnableAbandonAfterLevel; // 0x70f(0x01)
	int32_t ReplicationAbandonClusterLevel; // 0x710(0x04)
	char pad_714[0x4]; // 0x714(0x04)
	struct FGeometryCollectionRepData RepData; // 0x718(0x18)
	char pad_730[0x218]; // 0x730(0x218)
	struct UBodySetup* DummyBodySetup; // 0x948(0x08)
	char pad_950[0x8]; // 0x950(0x08)
	struct TArray<struct UInstancedStaticMeshComponent*> EmbeddedGeometryComponents; // 0x958(0x10)
	char pad_968[0x8]; // 0x968(0x08)

	void SetNotifyRemovals(bool bNewNotifyRemovals); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals // (Final|Native|Public|BlueprintCallable) // @ game+0x4d54bd0
	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x4d54b40
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void OnRep_RepData(struct FGeometryCollectionRepData& OldData); // Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData // (Final|Native|Protected|HasOutParms) // @ game+0x4d54620
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	void NetAbandonCluster(int32_t TransformIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x4d54590
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x4d54400
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4d54320
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x330 (Inherited: 0x248)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x250(0x18)
	bool bDebugDrawWholeCollection; // 0x268(0x01)
	bool bDebugDrawHierarchy; // 0x269(0x01)
	bool bDebugDrawClustering; // 0x26a(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x26b(0x01)
	bool bShowRigidBodyId; // 0x26c(0x01)
	bool bShowRigidBodyCollision; // 0x26d(0x01)
	bool bCollisionAtOrigin; // 0x26e(0x01)
	bool bShowRigidBodyTransform; // 0x26f(0x01)
	bool bShowRigidBodyInertia; // 0x270(0x01)
	bool bShowRigidBodyVelocity; // 0x271(0x01)
	bool bShowRigidBodyForce; // 0x272(0x01)
	bool bShowRigidBodyInfos; // 0x273(0x01)
	bool bShowTransformIndex; // 0x274(0x01)
	bool bShowTransform; // 0x275(0x01)
	bool bShowParent; // 0x276(0x01)
	bool bShowLevel; // 0x277(0x01)
	bool bShowConnectivityEdges; // 0x278(0x01)
	bool bShowGeometryIndex; // 0x279(0x01)
	bool bShowGeometryTransform; // 0x27a(0x01)
	bool bShowBoundingBox; // 0x27b(0x01)
	bool bShowFaces; // 0x27c(0x01)
	bool bShowFaceIndices; // 0x27d(0x01)
	bool bShowFaceNormals; // 0x27e(0x01)
	bool bShowSingleFace; // 0x27f(0x01)
	int32_t SingleFaceIndex; // 0x280(0x04)
	bool bShowVertices; // 0x284(0x01)
	bool bShowVertexIndices; // 0x285(0x01)
	bool bShowVertexNormals; // 0x286(0x01)
	bool bUseActiveVisualization; // 0x287(0x01)
	float PointThickness; // 0x288(0x04)
	float LineThickness; // 0x28c(0x04)
	bool bTextShadow; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float TextScale; // 0x294(0x04)
	float NormalScale; // 0x298(0x04)
	float AxisScale; // 0x29c(0x04)
	float ArrowScale; // 0x2a0(0x04)
	struct FColor RigidBodyIdColor; // 0x2a4(0x04)
	float RigidBodyTransformScale; // 0x2a8(0x04)
	struct FColor RigidBodyCollisionColor; // 0x2ac(0x04)
	struct FColor RigidBodyInertiaColor; // 0x2b0(0x04)
	struct FColor RigidBodyVelocityColor; // 0x2b4(0x04)
	struct FColor RigidBodyForceColor; // 0x2b8(0x04)
	struct FColor RigidBodyInfoColor; // 0x2bc(0x04)
	struct FColor TransformIndexColor; // 0x2c0(0x04)
	float TransformScale; // 0x2c4(0x04)
	struct FColor LevelColor; // 0x2c8(0x04)
	struct FColor ParentColor; // 0x2cc(0x04)
	float ConnectivityEdgeThickness; // 0x2d0(0x04)
	struct FColor GeometryIndexColor; // 0x2d4(0x04)
	float GeometryTransformScale; // 0x2d8(0x04)
	struct FColor BoundingBoxColor; // 0x2dc(0x04)
	struct FColor FaceColor; // 0x2e0(0x04)
	struct FColor FaceIndexColor; // 0x2e4(0x04)
	struct FColor FaceNormalColor; // 0x2e8(0x04)
	struct FColor SingleFaceColor; // 0x2ec(0x04)
	struct FColor VertexColor; // 0x2f0(0x04)
	struct FColor VertexIndexColor; // 0x2f4(0x04)
	struct FColor VertexNormalColor; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x300(0x08)
	char pad_308[0x28]; // 0x308(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xc8(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0xf0 (Inherited: 0x28)
struct UGeometryCollection : UObject {
	bool EnableClustering; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t ClusterGroupIndex; // 0x2c(0x04)
	int32_t MaxClusterLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<float> DamageThreshold; // 0x38(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UMaterialInterface*> Materials; // 0x50(0x10)
	struct TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar; // 0x60(0x10)
	bool bUseFullPrecisionUVs; // 0x70(0x01)
	bool bMassAsDensity; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float Mass; // 0x74(0x04)
	float MinimumMassClamp; // 0x78(0x04)
	bool bUpdateMaterialFadeAmount; // 0x7c(0x01)
	bool bRemoveOnMaxSleep; // 0x7d(0x01)
	bool bShrinkOnMaxSleep; // 0x7e(0x01)
	char pad_7F[0x1]; // 0x7f(0x01)
	struct FVector2D MaximumSleepTime; // 0x80(0x08)
	struct FVector2D RemovalDuration; // 0x88(0x08)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x90(0x10)
	bool EnableRemovePiecesOnFracture; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0xa8(0x10)
	struct FGuid PersistentGuid; // 0xb8(0x10)
	struct FGuid StateGuid; // 0xc8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xd8(0x04)
	char pad_DC[0x14]; // 0xdc(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x2e0 (Inherited: 0x248)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x248(0x08)
	struct UMaterial* RayMarchMaterial; // 0x250(0x08)
	float SurfaceTolerance; // 0x258(0x04)
	float Isovalue; // 0x25c(0x04)
	bool Enabled; // 0x260(0x01)
	bool RenderVolumeBoundingBox; // 0x261(0x01)
	char pad_262[0x7e]; // 0x262(0x7e)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x150 (Inherited: 0xc8)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xd0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xd8(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xe0(0x08)
	bool bSimulating; // 0xe8(0x01)
	bool bNotifyCollisions; // 0xe9(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xea(0x01)
	char pad_EB[0x1]; // 0xeb(0x01)
	float Density; // 0xec(0x04)
	float MinMass; // 0xf0(0x04)
	float MaxMass; // 0xf4(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0xfc(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0x100(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0x104(0x04)
	int32_t MinLevelSetResolution; // 0x108(0x04)
	int32_t MaxLevelSetResolution; // 0x10c(0x04)
	int32_t CollisionGroup; // 0x110(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FVector InitialLinearVelocity; // 0x118(0x0c)
	struct FVector InitialAngularVelocity; // 0x124(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x130(0x10)
	char pad_140[0x10]; // 0x140(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x150 (Inherited: 0xc8)
struct UStaticMeshSimulationComponent : UActorComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	bool Simulating; // 0xd0(0x01)
	bool bNotifyCollisions; // 0xd1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	float Mass; // 0xd4(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xd8(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	int32_t MinLevelSetResolution; // 0xdc(0x04)
	int32_t MaxLevelSetResolution; // 0xe0(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FVector InitialLinearVelocity; // 0xe8(0x0c)
	struct FVector InitialAngularVelocity; // 0xf4(0x0c)
	float DamageThreshold; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x108(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x110(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x118(0x10)
	char pad_128[0x10]; // 0x128(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // @ game+0x4d56ae0
};

