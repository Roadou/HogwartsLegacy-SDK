// BlueprintGeneratedClass BP_SelfWritingChalk.BP_SelfWritingChalk_C
// Size: 0x3c0 (Inherited: 0x280)
struct ABP_SelfWritingChalk_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAkComponent* Ak; // 0x288(0x08)
	struct UArrowComponent* Arrow; // 0x290(0x08)
	struct USceneComponent* SurfaceDetector; // 0x298(0x08)
	struct UStaticMeshComponent* Chalkboard_BoardDetails1; // 0x2a0(0x08)
	struct UStaticMeshComponent* Blackboard_BoardDetails1; // 0x2a8(0x08)
	struct USceneComponent* DefaultSceneRoot1; // 0x2b0(0x08)
	struct UStaticMeshComponent* BoardDetails; // 0x2b8(0x08)
	struct USphereComponent* PlayerDetectionSphere; // 0x2c0(0x08)
	float AppearanceTimeline_Alpha_7DA874FD4F7D3F0AD64291A53A15207F; // 0x2c8(0x04)
	enum class ETimelineDirection AppearanceTimeline__Direction_7DA874FD4F7D3F0AD64291A53A15207F; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct UTimelineComponent* AppearanceTimeline; // 0x2d0(0x08)
	struct UMaterialInstanceDynamic* Chalk_Mat_REF; // 0x2d8(0x08)
	struct TArray<struct UStaticMesh*> Astronomy_Boards; // 0x2e0(0x10)
	struct TArray<struct UStaticMesh*> Charms_Boards; // 0x2f0(0x10)
	struct TArray<struct UStaticMesh*> DefenceDarkArts_Boards; // 0x300(0x10)
	struct TArray<struct UStaticMesh*> Herbology_Boards; // 0x310(0x10)
	struct TArray<struct UStaticMesh*> Potion_Boards; // 0x320(0x10)
	struct TArray<struct UStaticMesh*> Transfiguration_Boards; // 0x330(0x10)
	struct TArray<struct UStaticMesh*> Boards_To_Use; // 0x340(0x10)
	bool PlayerInside; // 0x350(0x01)
	char pad_351[0xf]; // 0x351(0x0f)
	struct FTransform Chalkboard_Transform; // 0x360(0x30)
	struct FTransform Blackboard_Transform; // 0x390(0x30)

	void AppearanceTimeline__FinishedFunc(); // Function BP_SelfWritingChalk.BP_SelfWritingChalk_C.AppearanceTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void AppearanceTimeline__UpdateFunc(); // Function BP_SelfWritingChalk.BP_SelfWritingChalk_C.AppearanceTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SelfWritingChalk.BP_SelfWritingChalk_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Draw on chalk(); // Function BP_SelfWritingChalk.BP_SelfWritingChalk_C.Draw on chalk // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Erase_Chalk(); // Function BP_SelfWritingChalk.BP_SelfWritingChalk_C.Erase_Chalk // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__PlayerDetectionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_SelfWritingChalk.BP_SelfWritingChalk_C.BndEvt__PlayerDetectionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void BndEvt__PlayerDetectionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_SelfWritingChalk.BP_SelfWritingChalk_C.BndEvt__PlayerDetectionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SelfWritingChalk(int32_t EntryPoint); // Function BP_SelfWritingChalk.BP_SelfWritingChalk_C.ExecuteUbergraph_BP_SelfWritingChalk // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

