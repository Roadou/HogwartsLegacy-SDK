// BlueprintGeneratedClass BP_Stove_A_Preset2.BP_Stove_A_Preset2_C
// Size: 0x2f0 (Inherited: 0x288)
struct ABP_Stove_A_Preset2_C : ABP_StirCrazy_Master_Preset_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* SM_Stove_A_Preset2_Food; // 0x290(0x08)
	struct UStaticMeshComponent* SM_Stove_A_Preset2_BottlesAndTeapot; // 0x298(0x08)
	struct UStaticMeshComponent* SM_BCProps_Wood_Chopped_Small_002; // 0x2a0(0x08)
	struct UDecalComponent* Decal1; // 0x2a8(0x08)
	struct UDecalComponent* Decal; // 0x2b0(0x08)
	struct UPointLightComponent* PointLight; // 0x2b8(0x08)
	struct UParticleSystemComponent* P_Candleflame2; // 0x2c0(0x08)
	struct UParticleSystemComponent* P_Candleflame1; // 0x2c8(0x08)
	struct UParticleSystemComponent* P_Candleflame; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_CandleGroup_Fat_A; // 0x2d8(0x08)
	struct UChildActorComponent* ChildActor1; // 0x2e0(0x08)
	struct UChildActorComponent* ChildActor; // 0x2e8(0x08)

	void ReceiveBeginPlay(); // Function BP_Stove_A_Preset2.BP_Stove_A_Preset2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Stove_A_Preset2(int32_t EntryPoint); // Function BP_Stove_A_Preset2.BP_Stove_A_Preset2_C.ExecuteUbergraph_BP_Stove_A_Preset2 // (Final|UbergraphFunction) // @ game+0x38a7480
};

