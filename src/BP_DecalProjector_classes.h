// BlueprintGeneratedClass BP_DecalProjector.BP_DecalProjector_C
// Size: 0x2c0 (Inherited: 0x248)
struct ABP_DecalProjector_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBillboardComponent* Billboard; // 0x250(0x08)
	struct UArrowComponent* Arrow; // 0x258(0x08)
	struct FVector SurfaceLocation; // 0x260(0x0c)
	struct FVector SurfaceNormal; // 0x26c(0x0c)
	float Raycast Interval; // 0x278(0x04)
	float Raycast Cone Angle; // 0x27c(0x04)
	float Ray Distance; // 0x280(0x04)
	bool Turn On; // 0x284(0x01)
	bool AutoPlay; // 0x285(0x01)
	bool Decals Attached; // 0x286(0x01)
	char pad_287[0x1]; // 0x287(0x01)
	struct UMaterialInterface* Decal Material; // 0x288(0x08)
	struct FVector2D Decal Size Range; // 0x290(0x08)
	int32_t Decal Frame Amount; // 0x298(0x04)
	float DecalFadeIn; // 0x29c(0x04)
	float Decal Duration; // 0x2a0(0x04)
	float DecalFadeOut; // 0x2a4(0x04)
	struct UDecalComponent* Decal reference; // 0x2a8(0x08)
	struct TArray<enum class EObjectTypeQuery> ProjectionSurfaces; // 0x2b0(0x10)

	void Cast Decal(); // Function BP_DecalProjector.BP_DecalProjector_C.Cast Decal // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_DecalProjector.BP_DecalProjector_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void On(); // Function BP_DecalProjector.BP_DecalProjector_C.On // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Off(); // Function BP_DecalProjector.BP_DecalProjector_C.Off // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_DecalProjector(int32_t EntryPoint); // Function BP_DecalProjector.BP_DecalProjector_C.ExecuteUbergraph_BP_DecalProjector // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

