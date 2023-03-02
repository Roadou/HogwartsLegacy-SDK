// BlueprintGeneratedClass BP_Terrarium_BOG_Light.BP_Terrarium_BOG_Light_C
// Size: 0x288 (Inherited: 0x25c)
struct ABP_Terrarium_BOG_Light_C : ABP_Terrarium_Lightrig_Parent_C {
	char pad_25C[0x4]; // 0x25c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBP_TerrariumLight_Master_C* BP_TerrariumLight_Master1; // 0x268(0x08)
	struct USpotLightComponent* SpotLight; // 0x270(0x08)
	struct UBP_TerrariumLight_Master_C* BP_TerrariumLight_Master; // 0x278(0x08)
	struct UPointLightComponent* PointLight; // 0x280(0x08)

	void ReceiveTick(float DeltaSeconds); // Function BP_Terrarium_BOG_Light.BP_Terrarium_BOG_Light_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void OnIdentityChanged(enum class ESanctuaryIdentity OldIdentity, enum class ESanctuaryIdentity NewIdentity); // Function BP_Terrarium_BOG_Light.BP_Terrarium_BOG_Light_C.OnIdentityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Terrarium_BOG_Light.BP_Terrarium_BOG_Light_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Terrarium_BOG_Light(int32_t EntryPoint); // Function BP_Terrarium_BOG_Light.BP_Terrarium_BOG_Light_C.ExecuteUbergraph_BP_Terrarium_BOG_Light // (Final|UbergraphFunction) // @ game+0x38a7480
};

