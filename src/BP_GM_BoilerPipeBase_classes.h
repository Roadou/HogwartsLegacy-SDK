// BlueprintGeneratedClass BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C
// Size: 0x2b8 (Inherited: 0x248)
struct ABP_GM_BoilerPipeBase_C : ABoilerPipe {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USphereComponent* EndSphere2; // 0x250(0x08)
	struct USphereComponent* AddOnSphere; // 0x258(0x08)
	struct USphereComponent* EndSphere; // 0x260(0x08)
	struct USphereComponent* StartSphere; // 0x268(0x08)
	struct UObjectStateComponent* ObjectState; // 0x270(0x08)
	struct UStaticMeshComponent* BasePipeMesh; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	int32_t NextConnexionPieceNdx; // 0x288(0x04)
	struct FVector SnapLocation; // 0x28c(0x0c)
	bool bIsBrokenLink; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float PipeSequenceDelay; // 0x29c(0x04)
	struct ABP_GM_BoilerPipeBase_C* EndConnection; // 0x2a0(0x08)
	struct ABP_GM_BoilerPipeBase_C* StartConnection; // 0x2a8(0x08)
	struct ABP_GM_BoilerPipeBase_C* EndConnection2; // 0x2b0(0x08)

	void GetNextBaseSteamPiece(struct USphereComponent* CurrentSteamSphere, struct ABP_GM_BoilerPipeBase_C*& NextSteamObject); // Function BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C.GetNextBaseSteamPiece // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetConnectedMachinery(struct ABP_GM_ConnectedMachineryBase_C*& ConnectedMachine); // Function BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C.GetConnectedMachinery // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void BaseBeHot(); // Function BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C.BaseBeHot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BaseBeCold(); // Function BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C.BaseBeCold // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BaseBeFrozen(); // Function BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C.BaseBeFrozen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BaseSteamUp(); // Function BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C.BaseSteamUp // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BaseSteamDown(); // Function BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C.BaseSteamDown // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_BoilerPipeBase(int32_t EntryPoint); // Function BP_GM_BoilerPipeBase.BP_GM_BoilerPipeBase_C.ExecuteUbergraph_BP_GM_BoilerPipeBase // (Final|UbergraphFunction) // @ game+0x38a7480
};

