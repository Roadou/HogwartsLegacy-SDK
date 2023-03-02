// BlueprintGeneratedClass BP_PlayerWand_SR.BP_PlayerWand_SR_C
// Size: 0x401 (Inherited: 0x3f4)
struct ABP_PlayerWand_SR_C : ABP_CustomizableWand_C {
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	bool IsWandStyleSet; // 0x400(0x01)

	void Get Player Wand Style(struct FName& WandStyle); // Function BP_PlayerWand_SR.BP_PlayerWand_SR_C.Get Player Wand Style // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_PlayerWand_SR.BP_PlayerWand_SR_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PlayerWand_SR.BP_PlayerWand_SR_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void PlayerWandChanged(struct UObject* Caller, struct FName& String); // Function BP_PlayerWand_SR.BP_PlayerWand_SR_C.PlayerWandChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PlayerWand_SR(int32_t EntryPoint); // Function BP_PlayerWand_SR.BP_PlayerWand_SR_C.ExecuteUbergraph_BP_PlayerWand_SR // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

