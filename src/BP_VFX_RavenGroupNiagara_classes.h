// BlueprintGeneratedClass BP_VFX_RavenGroupNiagara.BP_VFX_RavenGroupNiagara_C
// Size: 0x27c (Inherited: 0x248)
struct ABP_VFX_RavenGroupNiagara_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* Niagara; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float RespawnDistance; // 0x260(0x04)
	float ResetTimer; // 0x264(0x04)
	float Accumulated Time; // 0x268(0x04)
	bool InitialSystemDestroyed; // 0x26c(0x01)
	bool HasSpawned; // 0x26d(0x01)
	char pad_26E[0x2]; // 0x26e(0x02)
	float Niagara System Radius; // 0x270(0x04)
	float Niagara System Trigger Distance; // 0x274(0x04)
	int32_t Niagara System Spawn Amount; // 0x278(0x04)

	void PlayFlappingSound(); // Function BP_VFX_RavenGroupNiagara.BP_VFX_RavenGroupNiagara_C.PlayFlappingSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_VFX_RavenGroupNiagara.BP_VFX_RavenGroupNiagara_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_VFX_RavenGroupNiagara.BP_VFX_RavenGroupNiagara_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Reset VFX(); // Function BP_VFX_RavenGroupNiagara.BP_VFX_RavenGroupNiagara_C.Reset VFX // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_VFX_RavenGroupNiagara(int32_t EntryPoint); // Function BP_VFX_RavenGroupNiagara.BP_VFX_RavenGroupNiagara_C.ExecuteUbergraph_BP_VFX_RavenGroupNiagara // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

