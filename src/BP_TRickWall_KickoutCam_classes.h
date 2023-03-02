// BlueprintGeneratedClass BP_TRickWall_KickoutCam.BP_TrickWall_KickoutCam_C
// Size: 0x291 (Inherited: 0x248)
struct ABP_TrickWall_KickoutCam_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UChildActorComponent* ChildActor; // 0x250(0x08)
	struct USceneComponent* Scene; // 0x258(0x08)
	struct UArrowComponent* Arrow; // 0x260(0x08)
	float Timeline_0_NewTrack_0_4A24A7414ED99B488E6AB7B36AB2A78C; // 0x268(0x04)
	enum class ETimelineDirection Timeline_0__Direction_4A24A7414ED99B488E6AB7B36AB2A78C; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x270(0x08)
	struct FVector Start; // 0x278(0x0c)
	struct FVector Target; // 0x284(0x0c)
	bool ForceCAMROTAtEnd; // 0x290(0x01)

	void Timeline_0__FinishedFunc(); // Function BP_TRickWall_KickoutCam.BP_TrickWall_KickoutCam_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_TRickWall_KickoutCam.BP_TrickWall_KickoutCam_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_TRickWall_KickoutCam.BP_TrickWall_KickoutCam_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_TRickWall_KickoutCam.BP_TrickWall_KickoutCam_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_TRickWall_KickoutCam.BP_TrickWall_KickoutCam_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_TrickWall_KickoutCam(int32_t EntryPoint); // Function BP_TRickWall_KickoutCam.BP_TrickWall_KickoutCam_C.ExecuteUbergraph_BP_TrickWall_KickoutCam // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

