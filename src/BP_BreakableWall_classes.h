// BlueprintGeneratedClass BP_BreakableWall.BP_BreakableWall_C
// Size: 0x3a8 (Inherited: 0x371)
struct ABP_BreakableWall_C : ABP_LargeBreakableWallBase_C {
	char pad_371[0x7]; // 0x371(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	float BreakDirection; // 0x380(0x04)
	float ForceOffset; // 0x384(0x04)
	struct FMulticastInlineDelegate HitWithDepulso; // 0x388(0x10)
	struct FMulticastInlineDelegate CustomPlayDepulssoVO; // 0x398(0x10)

	void ForceBreakActor(struct AActor* ActorToBreak); // Function BP_BreakableWall.BP_BreakableWall_C.ForceBreakActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BreakableWall.BP_BreakableWall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BreakableWall(int32_t EntryPoint); // Function BP_BreakableWall.BP_BreakableWall_C.ExecuteUbergraph_BP_BreakableWall // (Final|UbergraphFunction) // @ game+0x38a7480
	void CustomPlayDepulssoVO__DelegateSignature(); // Function BP_BreakableWall.BP_BreakableWall_C.CustomPlayDepulssoVO__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HitWithDepulso__DelegateSignature(); // Function BP_BreakableWall.BP_BreakableWall_C.HitWithDepulso__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

