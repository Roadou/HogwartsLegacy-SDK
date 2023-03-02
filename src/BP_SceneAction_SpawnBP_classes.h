// BlueprintGeneratedClass BP_SceneAction_SpawnBP.BP_SceneAction_SpawnBP_C
// Size: 0xc0 (Inherited: 0xa8)
struct UBP_SceneAction_SpawnBP_C : USceneAction_Blueprint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float ForwardOffset; // 0xb0(0x04)
	float verticalOffset; // 0xb4(0x04)
	struct AActor* ActorToSpawn; // 0xb8(0x08)

	void OnEnterInterval(float Time, bool IsScrubbing); // Function BP_SceneAction_SpawnBP.BP_SceneAction_SpawnBP_C.OnEnterInterval // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SceneAction_SpawnBP(int32_t EntryPoint); // Function BP_SceneAction_SpawnBP.BP_SceneAction_SpawnBP_C.ExecuteUbergraph_BP_SceneAction_SpawnBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

