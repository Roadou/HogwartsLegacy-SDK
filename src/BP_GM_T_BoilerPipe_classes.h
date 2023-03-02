// BlueprintGeneratedClass BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C
// Size: 0x311 (Inherited: 0x2b8)
struct ABP_GM_T_BoilerPipe_C : ABP_GM_BoilerPipeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	float Timeline_1_NewTrack_0_23F526A844BA3640ECE88585205E3971; // 0x2c0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_23F526A844BA3640ECE88585205E3971; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x2c8(0x08)
	float Timeline_0_NewTrack_0_B217291E494722224E3FDF8D0B4B3D5A; // 0x2d0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B217291E494722224E3FDF8D0B4B3D5A; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2d8(0x08)
	struct UMaterialInstanceDynamic* LongDynMatInst; // 0x2e0(0x08)
	struct TArray<struct ABP_GM_BoilerPipeBase_C*> SteamChainObjects1; // 0x2e8(0x10)
	struct ABP_GM_BoilerPipeBase_C* EndPiece1; // 0x2f8(0x08)
	bool BIsEnd1ChainInterupted; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct ABP_GM_BoilerPipeBase_C* CurrentChainPiece; // 0x308(0x08)
	enum class E_GM_TPipeTypes TPipeType; // 0x310(0x01)

	void UserConstructionScript(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__FinishedFunc(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_1__UpdateFunc(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void End1PieceBeHot(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.End1PieceBeHot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void End1PieceBeCold(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.End1PieceBeCold // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BuildOffSSteamChain(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.BuildOffSSteamChain // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void End1PieceBeFrozen(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.End1PieceBeFrozen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BaseBeHot(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.BaseBeHot // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BaseBeCold(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.BaseBeCold // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void BaseBeFrozen(); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.BaseBeFrozen // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_T_BoilerPipe(int32_t EntryPoint); // Function BP_GM_T_BoilerPipe.BP_GM_T_BoilerPipe_C.ExecuteUbergraph_BP_GM_T_BoilerPipe // (Final|UbergraphFunction) // @ game+0x38a7480
};

