// BlueprintGeneratedClass BP_VFX_Container.BP_VFX_Container_C
// Size: 0x340 (Inherited: 0x248)
struct ABP_VFX_Container_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* Sphere; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct TArray<struct UParticleSystemComponent*> effectList; // 0x260(0x10)
	float OffsetAmount; // 0x270(0x04)
	bool ACTIVE; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct TArray<struct UParticleSystem*> Effects; // 0x278(0x10)
	int32_t Count; // 0x288(0x04)
	int32_t Total; // 0x28c(0x04)
	struct TArray<struct UNiagaraComponent*> Niagara Effect List; // 0x290(0x10)
	bool Debug Location; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TArray<struct FSTR_TriggerVolumes_Particles> Particle Systems; // 0x2a8(0x10)
	struct TArray<struct FSTR_TriggerVolumes_Niagara> Niagara Systems; // 0x2b8(0x10)
	int32_t NiagaraTotal; // 0x2c8(0x04)
	int32_t NiagaraCount; // 0x2cc(0x04)
	struct TArray<struct UAkAudioEvent*> AudioEvents; // 0x2d0(0x10)
	struct TArray<struct UAkComponent*> AKComponentList; // 0x2e0(0x10)
	struct TMap<struct UAkAudioEvent*, struct UAkAudioEvent*> StartToStopMap; // 0x2f0(0x50)

	void ReceiveBeginPlay(); // Function BP_VFX_Container.BP_VFX_Container_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void On(); // Function BP_VFX_Container.BP_VFX_Container_C.On // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Off(); // Function BP_VFX_Container.BP_VFX_Container_C.Off // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Offset Postiion(); // Function BP_VFX_Container.BP_VFX_Container_C.Offset Postiion // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Remove Particles(struct UParticleSystemComponent* PSystem); // Function BP_VFX_Container.BP_VFX_Container_C.Remove Particles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Remove Niagara particles(struct UNiagaraComponent* PSystem); // Function BP_VFX_Container.BP_VFX_Container_C.Remove Niagara particles // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_VFX_Container(int32_t EntryPoint); // Function BP_VFX_Container.BP_VFX_Container_C.ExecuteUbergraph_BP_VFX_Container // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

