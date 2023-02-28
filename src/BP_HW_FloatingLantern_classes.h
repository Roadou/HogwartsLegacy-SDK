// BlueprintGeneratedClass BP_HW_FloatingLantern.BP_HW_FloatingLantern_C
// Size: 0x29c (Inherited: 0x248)
struct ABP_HW_FloatingLantern_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x250(0x08)
	struct USceneComponent* Scene; // 0x258(0x08)
	float Timeline_Floating_Height_93CE4EA34409C98A27DCB0BB5D07AFAC; // 0x260(0x04)
	enum class ETimelineDirection Timeline_Floating__Direction_93CE4EA34409C98A27DCB0BB5D07AFAC; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* Timeline_Floating; // 0x268(0x08)
	struct UStaticMesh* Lantern Mesh; // 0x270(0x08)
	float Active Range in Meters; // 0x278(0x04)
	float Playrate Min; // 0x27c(0x04)
	float Playrate Max; // 0x280(0x04)
	float Min Oscillation Amplitude; // 0x284(0x04)
	float Max Oscillation Amplitude; // 0x288(0x04)
	float Oscillation Amplitude; // 0x28c(0x04)
	bool Use Vertex Animation; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	struct FRandomStream Random Seed; // 0x294(0x08)

	void UserConstructionScript(); // Function BP_HW_FloatingLantern.BP_HW_FloatingLantern_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_Floating__FinishedFunc(); // Function BP_HW_FloatingLantern.BP_HW_FloatingLantern_C.Timeline_Floating__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_Floating__UpdateFunc(); // Function BP_HW_FloatingLantern.BP_HW_FloatingLantern_C.Timeline_Floating__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function BP_HW_FloatingLantern.BP_HW_FloatingLantern_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function BP_HW_FloatingLantern.BP_HW_FloatingLantern_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function BP_HW_FloatingLantern.BP_HW_FloatingLantern_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void InitializePosition(); // Function BP_HW_FloatingLantern.BP_HW_FloatingLantern_C.InitializePosition // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_FloatingLantern.BP_HW_FloatingLantern_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_FloatingLantern(int32_t EntryPoint); // Function BP_HW_FloatingLantern.BP_HW_FloatingLantern_C.ExecuteUbergraph_BP_HW_FloatingLantern // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

