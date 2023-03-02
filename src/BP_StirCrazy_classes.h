// BlueprintGeneratedClass BP_StirCrazy.BP_StirCrazy_C
// Size: 0x410 (Inherited: 0x248)
struct ABP_StirCrazy_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* CauldronOptions; // 0x250(0x08)
	struct USkeletalMeshComponent* lid; // 0x258(0x08)
	struct UChildActorComponent* Contents; // 0x260(0x08)
	struct USkeletalMeshComponent* Utensil; // 0x268(0x08)
	struct USkeletalMeshComponent* Container; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	bool UseDataTable?; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FDataTableRowHandle Data_Table_Row_Handle; // 0x288(0x10)
	bool Stirring?; // 0x298(0x01)
	bool Clockwise?; // 0x299(0x01)
	bool LidOpen?; // 0x29a(0x01)
	bool Simmer?; // 0x29b(0x01)
	float MinCookTime; // 0x29c(0x04)
	float MaxCookTime; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FTimerHandle CookTimerHandle; // 0x2a8(0x08)
	struct FSTR_Stir_Crazy StirCrazySettings; // 0x2b0(0xf0)
	struct UNiagaraSystem* VFX_REF; // 0x3a0(0x08)
	enum class E_StirCrazyVFXTypes E_StirCrazyVFXGroup; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct TArray<struct UNiagaraSystem*> Niagara_Group1; // 0x3b0(0x10)
	struct TArray<struct UNiagaraSystem*> Niagara_Group2; // 0x3c0(0x10)
	struct TArray<struct UNiagaraSystem*> Niagara_Group3; // 0x3d0(0x10)
	struct TArray<struct UNiagaraSystem*> Niagara_Group4; // 0x3e0(0x10)
	struct TArray<struct UNiagaraSystem*> Niagara_Group5; // 0x3f0(0x10)
	bool Pouring?; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FVector PourVFXSpawnLocation; // 0x404(0x0c)

	void RTN_VFXGroup(enum class E_StirCrazyVFXTypes& VFXGroup); // Function BP_StirCrazy.BP_StirCrazy_C.RTN_VFXGroup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void FN_ComposeStirCrazy(); // Function BP_StirCrazy.BP_StirCrazy_C.FN_ComposeStirCrazy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	struct FVector RTN_ContentsPlaneLocation(); // Function BP_StirCrazy.BP_StirCrazy_C.RTN_ContentsPlaneLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void OnLoaded_82D1F56A45E1E631D249809A34554608(struct UObject* Loaded); // Function BP_StirCrazy.BP_StirCrazy_C.OnLoaded_82D1F56A45E1E631D249809A34554608 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_82D1F56A45E1E631D249809A3C71E036(struct UObject* Loaded); // Function BP_StirCrazy.BP_StirCrazy_C.OnLoaded_82D1F56A45E1E631D249809A3C71E036 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_82D1F56A45E1E631D249809AC6B925E8(struct UObject* Loaded); // Function BP_StirCrazy.BP_StirCrazy_C.OnLoaded_82D1F56A45E1E631D249809AC6B925E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_StirCrazy.BP_StirCrazy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StartCookTimer(); // Function BP_StirCrazy.BP_StirCrazy_C.StartCookTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CookingEvent(); // Function BP_StirCrazy.BP_StirCrazy_C.CookingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Stopped Spitting Out(struct UNiagaraComponent* PSystem); // Function BP_StirCrazy.BP_StirCrazy_C.Stopped Spitting Out // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UtensilRest(); // Function BP_StirCrazy.BP_StirCrazy_C.UtensilRest // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UtensilStopResting(); // Function BP_StirCrazy.BP_StirCrazy_C.UtensilStopResting // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PourEvent(); // Function BP_StirCrazy.BP_StirCrazy_C.PourEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PourFinished(struct UNiagaraComponent* PSystem); // Function BP_StirCrazy.BP_StirCrazy_C.PourFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Simmer Event(); // Function BP_StirCrazy.BP_StirCrazy_C.Simmer Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Spit Out Event(); // Function BP_StirCrazy.BP_StirCrazy_C.Spit Out Event // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SimmerEnd(struct UNiagaraComponent* PSystem); // Function BP_StirCrazy.BP_StirCrazy_C.SimmerEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SFX Plug(); // Function BP_StirCrazy.BP_StirCrazy_C.SFX Plug // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_StirCrazy(int32_t EntryPoint); // Function BP_StirCrazy.BP_StirCrazy_C.ExecuteUbergraph_BP_StirCrazy // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

