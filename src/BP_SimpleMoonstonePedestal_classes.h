// BlueprintGeneratedClass BP_SimpleMoonstonePedestal.BP_SimpleMoonstonePedestal_C
// Size: 0x2b8 (Inherited: 0x248)
struct ABP_SimpleMoonstonePedestal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UDecalComponent* Decal; // 0x250(0x08)
	struct UNiagaraComponent* VFX_NS_MoonStone_Loop; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Mooncalf_MoonlightDiffuser; // 0x260(0x08)
	struct UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268(0x08)
	struct UStaticMeshComponent* SM_MoonstonePedestal; // 0x270(0x08)
	float MoonstoneDynaMat_Fresnel_Emissive_75401EC84C75DC1E1416A89A70210BD0; // 0x278(0x04)
	float MoonstoneDynaMat_Metallic_Adjuster_75401EC84C75DC1E1416A89A70210BD0; // 0x27c(0x04)
	float MoonstoneDynaMat_Emissive_75401EC84C75DC1E1416A89A70210BD0; // 0x280(0x04)
	enum class ETimelineDirection MoonstoneDynaMat__Direction_75401EC84C75DC1E1416A89A70210BD0; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* MoonstoneDynaMat; // 0x288(0x08)
	bool Locked; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FText InteractName; // 0x298(0x18)
	struct AActor* Target; // 0x2b0(0x08)

	void MoonstoneDynaMat__FinishedFunc(); // Function BP_SimpleMoonstonePedestal.BP_SimpleMoonstonePedestal_C.MoonstoneDynaMat__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void MoonstoneDynaMat__UpdateFunc(); // Function BP_SimpleMoonstonePedestal.BP_SimpleMoonstonePedestal_C.MoonstoneDynaMat__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void OnCheckpointReset(struct ANone* AutosaveActor); // Function BP_SimpleMoonstonePedestal.BP_SimpleMoonstonePedestal_C.OnCheckpointReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Interact(struct UBTService_AvaAITree* AvaService); // Function BP_SimpleMoonstonePedestal.BP_SimpleMoonstonePedestal_C.Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SimpleMoonstonePedestal.BP_SimpleMoonstonePedestal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnRestoreFromSave(struct ANone* AutosaveActor); // Function BP_SimpleMoonstonePedestal.BP_SimpleMoonstonePedestal_C.OnRestoreFromSave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnableInteract(); // Function BP_SimpleMoonstonePedestal.BP_SimpleMoonstonePedestal_C.EnableInteract // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SimpleMoonstonePedestal(int32_t EntryPoint); // Function BP_SimpleMoonstonePedestal.BP_SimpleMoonstonePedestal_C.ExecuteUbergraph_BP_SimpleMoonstonePedestal // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

