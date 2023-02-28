// BlueprintGeneratedClass BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C
// Size: 0x670 (Inherited: 0x5d0)
struct ABP_SkinFX_ApparateParent_C : ABP_SkinFX_Graph_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	float Appear_RotationBlend_C881C9494301D8595640F9BBD86064CA; // 0x5d8(0x04)
	float Appear_Collapse_C881C9494301D8595640F9BBD86064CA; // 0x5dc(0x04)
	float Appear_Rotation_Amount_C881C9494301D8595640F9BBD86064CA; // 0x5e0(0x04)
	enum class ETimelineDirection Appear__Direction_C881C9494301D8595640F9BBD86064CA; // 0x5e4(0x01)
	char pad_5E5[0x3]; // 0x5e5(0x03)
	struct UTimelineComponent* Appear; // 0x5e8(0x08)
	float Dissapear_Rotation_Blend_73E7A023474E36B120363C82FCBB7787; // 0x5f0(0x04)
	float Dissapear_Collapse_73E7A023474E36B120363C82FCBB7787; // 0x5f4(0x04)
	float Dissapear_Rotation_Amount_73E7A023474E36B120363C82FCBB7787; // 0x5f8(0x04)
	enum class ETimelineDirection Dissapear__Direction_73E7A023474E36B120363C82FCBB7787; // 0x5fc(0x01)
	char pad_5FD[0x3]; // 0x5fd(0x03)
	struct UTimelineComponent* Dissapear; // 0x600(0x08)
	struct FLinearColor Color; // 0x608(0x10)
	float FadeOutStart; // 0x618(0x04)
	struct FVector Center; // 0x61c(0x0c)
	struct FVector Scale; // 0x628(0x0c)
	bool Use Specific Rotation Axis; // 0x634(0x01)
	char pad_635[0x3]; // 0x635(0x03)
	float Offset; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct UParticleSystemComponent* Effect; // 0x640(0x08)
	struct FVector CentreOffset; // 0x648(0x0c)
	float ScaleMultiplier; // 0x654(0x04)
	struct FVector Initial Rotation; // 0x658(0x0c)
	struct FVector Final Rotation; // 0x664(0x0c)

	void GetActorBoundsComponent(struct USceneComponent*& ActorComponent); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.GetActorBoundsComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x38a7480
	void Dissapear__FinishedFunc(); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Dissapear__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Dissapear__UpdateFunc(); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Dissapear__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Appear__FinishedFunc(); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Appear__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Appear__UpdateFunc(); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Appear__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyEnd(enum class ESkinFXEffectEndStyle EndStyle, float CurrentTime); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.SkinFXNotifyEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXUpdateTick(float DeltaTime); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.SkinFXUpdateTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void Apparate(); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Apparate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Disapparate(); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Disapparate // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialise(); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnApparateFinished(); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.OnApparateFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnDisapparateFinished(); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.OnDisapparateFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SkinFXInitialUpdate(); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.SkinFXInitialUpdate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SkinFX_ApparateParent(int32_t EntryPoint); // Function BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.ExecuteUbergraph_BP_SkinFX_ApparateParent // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

