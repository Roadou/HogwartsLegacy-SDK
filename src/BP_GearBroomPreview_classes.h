// BlueprintGeneratedClass BP_GearBroomPreview.BP_GearBroomPreview_C
// Size: 0x280 (Inherited: 0x260)
struct ABP_GearBroomPreview_C : ABP_BroomPreviewLocator_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UChildActorComponent* BroomChildActor; // 0x268(0x08)
	struct FMulticastInlineDelegate OnBroomSpawned; // 0x270(0x10)

	void BroomClassLoaded(struct FName BroomID, struct AActor* ActorClass); // Function BP_GearBroomPreview.BP_GearBroomPreview_C.BroomClassLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SpawnBroomModel(struct FName BroomID); // Function BP_GearBroomPreview.BP_GearBroomPreview_C.SpawnBroomModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GearBroomPreview.BP_GearBroomPreview_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GearBroomPreview(int32_t EntryPoint); // Function BP_GearBroomPreview.BP_GearBroomPreview_C.ExecuteUbergraph_BP_GearBroomPreview // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnBroomSpawned__DelegateSignature(); // Function BP_GearBroomPreview.BP_GearBroomPreview_C.OnBroomSpawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

