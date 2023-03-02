// BlueprintGeneratedClass BP_AstroPuzzle.BP_AstroPuzzle_C
// Size: 0x3c8 (Inherited: 0x248)
struct ABP_AstroPuzzle_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays6; // 0x250(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays5; // 0x258(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays4; // 0x260(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays3; // 0x268(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays2; // 0x270(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays1; // 0x278(0x08)
	struct UNiagaraComponent* VFX_NS_Symbol_LightRays; // 0x280(0x08)
	struct UChildActorComponent* Moonstone; // 0x288(0x08)
	struct UChildActorComponent* BP_AstroDoorPillarOuter; // 0x290(0x08)
	struct UChildActorComponent* BP_AstroDoorPillar; // 0x298(0x08)
	struct UStaticMeshComponent* SM_Astronomy_ShadowDial_TwistRock; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_Astronomy_Column_Top_Middle; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_Astronomy_Column_Pillar_Middle; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_Astronomy_Column_Wires_Middle; // 0x2b8(0x08)
	struct UStaticMeshComponent* Symbol_06; // 0x2c0(0x08)
	struct UStaticMeshComponent* Symbol_05; // 0x2c8(0x08)
	struct UStaticMeshComponent* Symbol_04; // 0x2d0(0x08)
	struct UStaticMeshComponent* Symbol_03; // 0x2d8(0x08)
	struct UStaticMeshComponent* Symbol_02; // 0x2e0(0x08)
	struct UStaticMeshComponent* Symbol_01; // 0x2e8(0x08)
	struct UStaticMeshComponent* Symbol_00; // 0x2f0(0x08)
	struct UStaticMeshComponent* SM_Astronomy_ShadowDial_Tracks; // 0x2f8(0x08)
	struct UStaticMeshComponent* SM_Astronomy_ShadowDial_SymbolRing; // 0x300(0x08)
	struct USceneComponent* Scene; // 0x308(0x08)
	struct TArray<struct UStaticMeshComponent*> Symbols; // 0x310(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Mats; // 0x320(0x10)
	struct FName emissivePower; // 0x330(0x08)
	int32_t Solution1; // 0x338(0x04)
	int32_t Solution2; // 0x33c(0x04)
	struct TArray<struct ABP_AstroDoorPillar_C*> Pillars; // 0x340(0x10)
	struct TArray<struct FVector> SolutionLocations; // 0x350(0x10)
	struct TArray<struct AActor*> Target; // 0x360(0x10)
	bool LockOnSolve; // 0x370(0x01)
	bool StartOff; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct ABP_ZZS_TundraGate_C* TuntraGate; // 0x378(0x08)
	struct ABP_SimpleMoonstonePedestal_C* Pedestal; // 0x380(0x08)
	struct TArray<struct FVector> Solution LocationsWorld; // 0x388(0x10)
	struct FMulticastInlineDelegate PuzzleSolved; // 0x398(0x10)
	struct TArray<struct UNiagaraComponent*> SymbolLights; // 0x3a8(0x10)
	struct TArray<int32_t> Solutions; // 0x3b8(0x10)

	void SetTundraGateValues(); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.SetTundraGateValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MatCheck(); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.MatCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SolveCheck(bool& Pass); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.SolveCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Check(); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.Check // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOn(struct AActor* SwitchActor); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.SwitchOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SwitchOff(struct AActor* SwitchActor); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.SwitchOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnablePedestal(); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.EnablePedestal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AstroPuzzle(int32_t EntryPoint); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.ExecuteUbergraph_BP_AstroPuzzle // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
	void PuzzleSolved__DelegateSignature(); // Function BP_AstroPuzzle.BP_AstroPuzzle_C.PuzzleSolved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

