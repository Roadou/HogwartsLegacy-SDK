// BlueprintGeneratedClass VFX_BP_ENV_Burst.VFX_BP_ENV_Burst_C
// Size: 0x2e0 (Inherited: 0x248)
struct AVFX_BP_ENV_Burst_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBillboardComponent* Billboard; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct UParticleSystem* Cascade System; // 0x260(0x08)
	struct UNiagaraSystem* Niagara System; // 0x268(0x08)
	bool Broken; // 0x270(0x01)
	bool On; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct FTimerHandle NewVar_1; // 0x278(0x08)
	float Minimum Burst Time; // 0x280(0x04)
	float Maximum Burst Time; // 0x284(0x04)
	float SystemScale; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TMap<struct UParticleSystem*, struct UAkAudioEvent*> AkEvent; // 0x290(0x50)

	void UserConstructionScript(); // Function VFX_BP_ENV_Burst.VFX_BP_ENV_Burst_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function VFX_BP_ENV_Burst.VFX_BP_ENV_Burst_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Trigger Effects(); // Function VFX_BP_ENV_Burst.VFX_BP_ENV_Burst_C.Trigger Effects // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_VFX_BP_ENV_Burst(int32_t EntryPoint); // Function VFX_BP_ENV_Burst.VFX_BP_ENV_Burst_C.ExecuteUbergraph_VFX_BP_ENV_Burst // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

