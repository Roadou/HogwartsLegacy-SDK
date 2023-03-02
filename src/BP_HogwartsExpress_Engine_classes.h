// BlueprintGeneratedClass BP_HogwartsExpress_Engine.BP_HogwartsExpress_Engine_C
// Size: 0x3d0 (Inherited: 0x390)
struct ABP_HogwartsExpress_Engine_C : ATrain {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UAkComponent* AkEngineWhistle; // 0x398(0x08)
	struct UAkComponent* AkEngineBack; // 0x3a0(0x08)
	struct UAkComponent* AkEngineFront; // 0x3a8(0x08)
	struct UNiagaraComponent* Niagara; // 0x3b0(0x08)
	bool Choo_Choo; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct TArray<float> Choo_Timing; // 0x3c0(0x10)

	void VFX Update(); // Function BP_HogwartsExpress_Engine.BP_HogwartsExpress_Engine_C.VFX Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HogwartsExpress_Engine.BP_HogwartsExpress_Engine_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveTick(float DeltaSeconds); // Function BP_HogwartsExpress_Engine.BP_HogwartsExpress_Engine_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HogwartsExpress_Engine.BP_HogwartsExpress_Engine_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HogwartsExpress_Engine(int32_t EntryPoint); // Function BP_HogwartsExpress_Engine.BP_HogwartsExpress_Engine_C.ExecuteUbergraph_BP_HogwartsExpress_Engine // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

