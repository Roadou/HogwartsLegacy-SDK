// BlueprintGeneratedClass BP_Shell_Accio.BP_Shell_Accio_C
// Size: 0x28c (Inherited: 0x248)
struct ABP_Shell_Accio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float Timeline_0_HitFreezePercent_Driver_51EE407A483C5FB6E79353A1525C8384; // 0x260(0x04)
	enum class ETimelineDirection Timeline_0__Direction_51EE407A483C5FB6E79353A1525C8384; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* Timeline_1; // 0x268(0x08)
	struct UMaterialInstanceDynamic* ShellMaterial; // 0x270(0x08)
	struct UStaticMesh* MeshToFreeze; // 0x278(0x08)
	struct FVector HitLocation; // 0x280(0x0c)

	void UserConstructionScript(); // Function BP_Shell_Accio.BP_Shell_Accio_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_Shell_Accio.BP_Shell_Accio_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_Shell_Accio.BP_Shell_Accio_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void StartShell(struct UStaticMesh* MeshToFreeze, struct FVector HitLocation); // Function BP_Shell_Accio.BP_Shell_Accio_C.StartShell // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Shell_Accio.BP_Shell_Accio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Shell_Accio(int32_t EntryPoint); // Function BP_Shell_Accio.BP_Shell_Accio_C.ExecuteUbergraph_BP_Shell_Accio // (Final|UbergraphFunction) // @ game+0x38a7480
};

