// BlueprintGeneratedClass VFX_BP_Teaset_Table.VFX_BP_Teaset_Table_C
// Size: 0x278 (Inherited: 0x248)
struct AVFX_BP_Teaset_Table_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UParticleSystemComponent* TeaPour; // 0x250(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct UAnimNotify* Notify; // 0x268(0x08)
	bool PlayAvailable; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float ResetDistance; // 0x274(0x04)

	void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera); // Function VFX_BP_Teaset_Table.VFX_BP_Teaset_Table_C.TickThrottler_KeepAlive // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_Teaset_Table.VFX_BP_Teaset_Table_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_WakeUp(float DistanceSquaredToCamera); // Function VFX_BP_Teaset_Table.VFX_BP_Teaset_Table_C.TickThrottler_WakeUp // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void TickThrottler_GoToSleep(float DistanceSquaredToCamera); // Function VFX_BP_Teaset_Table.VFX_BP_Teaset_Table_C.TickThrottler_GoToSleep // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_Teaset_Table(int32_t EntryPoint); // Function VFX_BP_Teaset_Table.VFX_BP_Teaset_Table_C.ExecuteUbergraph_VFX_BP_Teaset_Table // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

