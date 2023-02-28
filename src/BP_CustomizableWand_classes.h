// BlueprintGeneratedClass BP_CustomizableWand.BP_CustomizableWand_C
// Size: 0x3f4 (Inherited: 0x248)
struct ABP_CustomizableWand_C : ACustomizableWand {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USkeletalMeshComponent* Wand Mesh Component; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct UMaterialInstanceDynamic* Wand Dynamic Material; // 0x260(0x08)
	struct USkeletalMesh* Current Wand Mesh Asset; // 0x268(0x08)
	struct FName InitialWandStyle; // 0x270(0x08)
	struct UDataTable* WandStyleData; // 0x278(0x08)
	bool MeshLoaded; // 0x280(0x01)
	bool MatLoaded; // 0x281(0x01)
	char pad_282[0x6]; // 0x282(0x06)
	struct USkeletalMesh* LoadedMesh; // 0x288(0x08)
	struct TSoftObjectPtr<USkeletalMesh> MeshToLoad; // 0x290(0x28)
	struct TSoftObjectPtr<UTexture> TipDToLoad; // 0x2b8(0x28)
	struct TSoftObjectPtr<UTexture> TipNToLoad; // 0x2e0(0x28)
	struct TSoftObjectPtr<UTexture> TipMROToLoad; // 0x308(0x28)
	struct TSoftObjectPtr<UTexture> HandleDToLoad; // 0x330(0x28)
	struct TSoftObjectPtr<UTexture> HandleNToLoad; // 0x358(0x28)
	struct TSoftObjectPtr<UTexture> HandleMROToLoad; // 0x380(0x28)
	struct UTexture* Tip_DLoaded; // 0x3a8(0x08)
	struct UTexture* Tip_NLoaded; // 0x3b0(0x08)
	struct UTexture* Tip_MROLoaded; // 0x3b8(0x08)
	struct UTexture* Handle_DLoaded; // 0x3c0(0x08)
	struct UTexture* Handle_NLoaded; // 0x3c8(0x08)
	struct UTexture* Handle_MROLoaded; // 0x3d0(0x08)
	bool TipDLoaded; // 0x3d8(0x01)
	bool TipNLoaded; // 0x3d9(0x01)
	bool TipMROLoaded; // 0x3da(0x01)
	bool HandleDLoaded; // 0x3db(0x01)
	bool HandleNLoaded; // 0x3dc(0x01)
	bool HandleMROLoaded; // 0x3dd(0x01)
	char pad_3DE[0x2]; // 0x3de(0x02)
	struct UMaterialInstanceDynamic* WandDynamicMaterial_Handle; // 0x3e0(0x08)
	bool CurrentWandIsBase; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	struct FName CurrentWandStyle; // 0x3ec(0x08)

	void ResetLoadFlags(bool WandIsBase); // Function BP_CustomizableWand.BP_CustomizableWand_C.ResetLoadFlags // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AreAllAssetsLoaded(bool& AllLoaded); // Function BP_CustomizableWand.BP_CustomizableWand_C.AreAllAssetsLoaded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void SetWandStyle(struct FName NewWandName); // Function BP_CustomizableWand.BP_CustomizableWand_C.SetWandStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetWandInfo(struct FName StyleName, struct TSoftObjectPtr<USkeletalMesh>& Mesh, bool& InfoFound, bool& IsBase, struct TSoftObjectPtr<UTexture>& Tip_D, struct TSoftObjectPtr<UTexture>& Tip_N, struct TSoftObjectPtr<UTexture>& Tip_MRO, struct TSoftObjectPtr<UTexture>& Handle_D, struct TSoftObjectPtr<UTexture>& Handle_N, struct TSoftObjectPtr<UTexture>& Handle_MRO); // Function BP_CustomizableWand.BP_CustomizableWand_C.GetWandInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void SetMatTextureParams(struct UMaterialInstanceDynamic* Mid, struct UTexture* LoadedD, struct UTexture* LoadedN, struct UTexture* LoadedMRO); // Function BP_CustomizableWand.BP_CustomizableWand_C.SetMatTextureParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Assign Skeletal Mesh Asset(struct USkinnedMeshComponent*& Mesh Component, struct USkeletalMesh*& Mesh Asset); // Function BP_CustomizableWand.BP_CustomizableWand_C.Assign Skeletal Mesh Asset // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void Create MID(struct USkeletalMeshComponent*& Mesh Component, struct USkeletalMesh* MeshAsset, int32_t SlotIndex, struct FName MIDName, struct UMaterialInstanceDynamic*& Mid); // Function BP_CustomizableWand.BP_CustomizableWand_C.Create MID // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x38a7480
	void Create Wand(struct USkeletalMesh*& New Wand Mesh Asset, bool IsBase); // Function BP_CustomizableWand.BP_CustomizableWand_C.Create Wand // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_1B31E9E8488AF16D5868EDA9801D2E84(struct UObject* Loaded); // Function BP_CustomizableWand.BP_CustomizableWand_C.OnLoaded_1B31E9E8488AF16D5868EDA9801D2E84 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_83FD9ADF442CD5D5A6883F9946C887E3(struct UObject* Loaded); // Function BP_CustomizableWand.BP_CustomizableWand_C.OnLoaded_83FD9ADF442CD5D5A6883F9946C887E3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_B3D2A1334D56E8BEC2578D994597C16C(struct UObject* Loaded); // Function BP_CustomizableWand.BP_CustomizableWand_C.OnLoaded_B3D2A1334D56E8BEC2578D994597C16C // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_35B89F7744616640548B3B8266288E52(struct UObject* Loaded); // Function BP_CustomizableWand.BP_CustomizableWand_C.OnLoaded_35B89F7744616640548B3B8266288E52 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_30918B5F454999BE6F385D8F6E9CB00E(struct UObject* Loaded); // Function BP_CustomizableWand.BP_CustomizableWand_C.OnLoaded_30918B5F454999BE6F385D8F6E9CB00E // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_BB0E28F44466D7E3DFC1DEAF4E95C8E3(struct UObject* Loaded); // Function BP_CustomizableWand.BP_CustomizableWand_C.OnLoaded_BB0E28F44466D7E3DFC1DEAF4E95C8E3 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnLoaded_911AAED94599A1BA7267189FC92848AF(struct UObject* Loaded); // Function BP_CustomizableWand.BP_CustomizableWand_C.OnLoaded_911AAED94599A1BA7267189FC92848AF // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadMesh(struct TSoftObjectPtr<USkeletalMesh> MeshRef); // Function BP_CustomizableWand.BP_CustomizableWand_C.LoadMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadTipD(struct TSoftObjectPtr<UTexture> TexRef); // Function BP_CustomizableWand.BP_CustomizableWand_C.LoadTipD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadTipN(struct TSoftObjectPtr<UTexture> TexRef); // Function BP_CustomizableWand.BP_CustomizableWand_C.LoadTipN // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadTipMRO(struct TSoftObjectPtr<UTexture> TexRef); // Function BP_CustomizableWand.BP_CustomizableWand_C.LoadTipMRO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadHandleD(struct TSoftObjectPtr<UTexture> TexRef); // Function BP_CustomizableWand.BP_CustomizableWand_C.LoadHandleD // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadHandleN(struct TSoftObjectPtr<UTexture> TexRef); // Function BP_CustomizableWand.BP_CustomizableWand_C.LoadHandleN // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoadHandleMRO(struct TSoftObjectPtr<UTexture> TexRef); // Function BP_CustomizableWand.BP_CustomizableWand_C.LoadHandleMRO // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AsyncLoadWandAssets(struct TSoftObjectPtr<USkeletalMesh> MeshRef, bool IsBase, struct TSoftObjectPtr<UTexture> TipDRef, struct TSoftObjectPtr<UTexture> TipNRef, struct TSoftObjectPtr<UTexture> TipMRORef, struct TSoftObjectPtr<UTexture> HandleDRef, struct TSoftObjectPtr<UTexture> HandleNRef, struct TSoftObjectPtr<UTexture> HandleMRORef); // Function BP_CustomizableWand.BP_CustomizableWand_C.AsyncLoadWandAssets // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_CustomizableWand.BP_CustomizableWand_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CustomizableWand(int32_t EntryPoint); // Function BP_CustomizableWand.BP_CustomizableWand_C.ExecuteUbergraph_BP_CustomizableWand // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

