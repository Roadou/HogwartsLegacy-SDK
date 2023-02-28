// BlueprintGeneratedClass BP_FS_SpellImpact.BP_FS_SpellImpact_C
// Size: 0x2de (Inherited: 0x250)
struct ABP_FS_SpellImpact_C : AFieldSystemActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UCullingField* CullingField - Strain ; // 0x258(0x08)
	struct URadialFalloff* RadialFalloff - Strain Culling; // 0x260(0x08)
	struct UStaticMeshComponent* Strain Volume; // 0x268(0x08)
	struct URadialFalloff* RadialFalloff - Strain Magnitude; // 0x270(0x08)
	struct URadialFalloff* RadialFalloff - Culling Force; // 0x278(0x08)
	struct UCullingField* CullingField - Force; // 0x280(0x08)
	struct UOperatorField* OperatorField - Force; // 0x288(0x08)
	struct URadialVector* RadialVector - Force; // 0x290(0x08)
	struct UOperatorField* OperatorField - Force Noise; // 0x298(0x08)
	struct UNoiseField* NoiseField - Force; // 0x2a0(0x08)
	struct URadialFalloff* RadialFalloff - Force Magnitude; // 0x2a8(0x08)
	bool DemolitionActive?; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float Delay; // 0x2b4(0x04)
	float Strain Radius; // 0x2b8(0x04)
	float Strain Magnitude; // 0x2bc(0x04)
	float Push Magnitude; // 0x2c0(0x04)
	struct FLinearColor Deactivated; // 0x2c4(0x10)
	float Push Noise Min; // 0x2d4(0x04)
	float Push Noise Max; // 0x2d8(0x04)
	bool Is Debug?; // 0x2dc(0x01)
	bool Destroy Node After Strike?; // 0x2dd(0x01)

	void UserConstructionScript(); // Function BP_FS_SpellImpact.BP_FS_SpellImpact_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FS_SpellImpact.BP_FS_SpellImpact_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FS_SpellImpact(int32_t EntryPoint); // Function BP_FS_SpellImpact.BP_FS_SpellImpact_C.ExecuteUbergraph_BP_FS_SpellImpact // (Final|UbergraphFunction) // @ game+0x38a7480
};

