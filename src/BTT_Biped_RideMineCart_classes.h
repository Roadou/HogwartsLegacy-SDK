// BlueprintGeneratedClass BTT_Biped_RideMineCart.BTT_Biped_RideMineCart_C
// Size: 0x1c8 (Inherited: 0x150)
struct UBTT_Biped_RideMineCart_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AActor* MineCart; // 0x158(0x08)
	struct FRotator ChairRotation; // 0x160(0x0c)
	struct FVector ChairLocation; // 0x16c(0x0c)
	struct FVector VectorToChair; // 0x178(0x0c)
	float interpAlpha; // 0x184(0x04)
	float FadeTime; // 0x188(0x04)
	float HoldTime; // 0x18c(0x04)
	struct FTransform ChairTransform; // 0x190(0x30)
	struct ABiped_Player* Player; // 0x1c0(0x08)

	void CustActionEvt_DismountMineCart_K2Node_BTCustomActionEvent_1(struct FVariantMapHandle VariantMapHandle); // Function BTT_Biped_RideMineCart.BTT_Biped_RideMineCart_C.CustActionEvt_DismountMineCart_K2Node_BTCustomActionEvent_1 // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_RideMineCart.BTT_Biped_RideMineCart_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_RideMineCart.BTT_Biped_RideMineCart_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_RideMineCart(int32_t EntryPoint); // Function BTT_Biped_RideMineCart.BTT_Biped_RideMineCart_C.ExecuteUbergraph_BTT_Biped_RideMineCart // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

