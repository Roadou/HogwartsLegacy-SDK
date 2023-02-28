// BlueprintGeneratedClass BP_Window_Parent.BP_Window_Parent_C
// Size: 0x3f4 (Inherited: 0x268)
struct ABP_Window_Parent_C : ALightGroupActorBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UStaticMeshComponent* SM_Pane; // 0x270(0x08)
	struct UStaticMesh* WindowPane; // 0x278(0x08)
	bool Interior Window; // 0x280(0x01)
	bool Cast Shadow?; // 0x281(0x01)
	char pad_282[0x6]; // 0x282(0x06)
	struct UStaticMeshComponent* Pane; // 0x288(0x08)
	struct UMaterialInstanceDynamic* Emissive Material; // 0x290(0x08)
	struct TArray<struct FName> Parameters; // 0x298(0x10)
	float Light on Intensity; // 0x2a8(0x04)
	float Light off Intensity; // 0x2ac(0x04)
	float Day Value; // 0x2b0(0x04)
	struct FLinearColor Night Light Color; // 0x2b4(0x10)
	struct FLinearColor Color Tint; // 0x2c4(0x10)
	bool Lock Values; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct FLinearColor Color Tint Locked; // 0x2d8(0x10)
	struct UMaterialInterface* Base Window Material; // 0x2e8(0x08)
	bool Use scheduler?; // 0x2f0(0x01)
	bool Set Cast Shadow; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct UStaticMeshComponent* Shadow Caster; // 0x2f8(0x08)
	struct UMaterialInterface* Shadow Material; // 0x300(0x08)
	struct UTexture* Shadow Texture; // 0x308(0x08)
	bool Shadow Caster Mesh; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UTexture* Diffuse Texture; // 0x318(0x08)
	struct UObject* Parent; // 0x320(0x08)
	bool Force LOD; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	float Emissive Intensity Locked; // 0x32c(0x04)
	float Scattered Light Transmission; // 0x330(0x04)
	float Scattered Light Desaturation; // 0x334(0x04)
	float Directional Light Transmission; // 0x338(0x04)
	float Directional Light Desaturation; // 0x33c(0x04)
	bool EXT CAST SHADOW; // 0x340(0x01)
	bool Use Custom Shadow Texture; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct UTexture* Custom Shadow Texture; // 0x348(0x08)
	bool Use NonPhysical TOD; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	float Day MIN; // 0x354(0x04)
	float Day MAX; // 0x358(0x04)
	float Night; // 0x35c(0x04)
	float Desaturation; // 0x360(0x04)
	struct FLinearColor NonPhysical Color Tint; // 0x364(0x10)
	char pad_374[0x4]; // 0x374(0x04)
	struct UTexture* Fake Ext Diffuse; // 0x378(0x08)
	bool Use Fake Ext Texture; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	float Parallax Depth; // 0x384(0x04)
	float Height Ratio; // 0x388(0x04)
	struct FLinearColor Fake Ext Color Tint; // 0x38c(0x10)
	float Opacity; // 0x39c(0x04)
	int32_t Blur; // 0x3a0(0x04)
	bool Decoupled Night; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct FLinearColor Night Color Tint; // 0x3a8(0x10)
	float Night_ScatteredLight Transmission; // 0x3b8(0x04)
	bool Use Fake Int; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	struct UTexture* FakeIntMask; // 0x3c0(0x08)
	float FakeIntStrength; // 0x3c8(0x04)
	float FakeExt_SLT; // 0x3cc(0x04)
	float Scattered Light Transmission_FakeExt; // 0x3d0(0x04)
	float Scattered Light Desaturation_FakeExt; // 0x3d4(0x04)
	float Direcational Light Transmission_FakeExt; // 0x3d8(0x04)
	float Direction Light Desaturation_FakeExt; // 0x3dc(0x04)
	float Night_ScatteredLightTransmission_FakeExt; // 0x3e0(0x04)
	struct FLinearColor ShadowTextureWeight; // 0x3e4(0x10)

	void MakeShadowCaster_MAT(); // Function BP_Window_Parent.BP_Window_Parent_C.MakeShadowCaster_MAT // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExteriorMID(); // Function BP_Window_Parent.BP_Window_Parent_C.ExteriorMID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetParent(struct UMaterialInterface* Material IN, struct UMaterial*& Parent); // Function BP_Window_Parent.BP_Window_Parent_C.GetParent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void MakeMID(struct UStaticMeshComponent* Mesh, struct UMaterialInstanceDynamic*& Mid); // Function BP_Window_Parent.BP_Window_Parent_C.MakeMID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void InteriorMID(); // Function BP_Window_Parent.BP_Window_Parent_C.InteriorMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Exterior Emissives(struct UMaterialInstanceDynamic* Mid, float Day Emissive, float Light on Intensity, float Light off Intensity, struct FLinearColor Night Light Color); // Function BP_Window_Parent.BP_Window_Parent_C.Exterior Emissives // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Base Emissives(struct UMaterialInstanceDynamic* Mid, float ScatteredLight_Tran, float ScatteredLight_Desat, float DirectionalLight_Tran, float DirectionLight_Desat, struct FLinearColor Color Tint); // Function BP_Window_Parent.BP_Window_Parent_C.Base Emissives // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set Static Meshes(); // Function BP_Window_Parent.BP_Window_Parent_C.Set Static Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Window_Parent.BP_Window_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Inside Override Emissive(float ScatteredLight_Tran, float ScatteredLight_Desat, float DirectionalLight_Tran, float DirectionalLight_Desat, struct FLinearColor Color Tint, bool Set Lock Value, struct FLinearColor Locked Color, float Locked Emissive); // Function BP_Window_Parent.BP_Window_Parent_C.Inside Override Emissive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Reset(); // Function BP_Window_Parent.BP_Window_Parent_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Set to Defaults(); // Function BP_Window_Parent.BP_Window_Parent_C.Set to Defaults // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Outside Override Emissive(float Day Value, float Light on Intensity, float Light off Intensity, struct FLinearColor Night Color, bool Set Lock Value); // Function BP_Window_Parent.BP_Window_Parent_C.Outside Override Emissive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Window_Parent.BP_Window_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Window_Parent(int32_t EntryPoint); // Function BP_Window_Parent.BP_Window_Parent_C.ExecuteUbergraph_BP_Window_Parent // (Final|UbergraphFunction) // @ game+0x38a7480
};

