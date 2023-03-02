// BlueprintGeneratedClass HS_CarriageWE_D.HS_CarriageWE_D_C
// Size: 0x268 (Inherited: 0x250)
struct AHS_CarriageWE_D_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct TArray<struct ANone*> WE_Carts; // 0x258(0x10)

	void ReceiveBeginPlay(); // Function HS_CarriageWE_D.HS_CarriageWE_D_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SplineMoverCart(struct UObject* Caller, struct AActor* Actor); // Function HS_CarriageWE_D.HS_CarriageWE_D_C.SplineMoverCart // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HPStreamingCOmplete(); // Function HS_CarriageWE_D.HS_CarriageWE_D_C.HPStreamingCOmplete // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_HS_CarriageWE_D(int32_t EntryPoint); // Function HS_CarriageWE_D.HS_CarriageWE_D_C.ExecuteUbergraph_HS_CarriageWE_D // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

