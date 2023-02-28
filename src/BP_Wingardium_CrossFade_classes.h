// BlueprintGeneratedClass BP_Wingardium_CrossFade.BP_Wingardium_CrossFade_C
// Size: 0x891 (Inherited: 0x248)
struct ABP_Wingardium_CrossFade_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UPostProcessComponent* PostProcess_Wingardium; // 0x250(0x08)
	struct UPostProcessComponent* PostProcess_Default; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	float Timeline_0_FXMaterials_84B0597E4A6F4AF4AC9F8A9A1B2E249F; // 0x268(0x04)
	float Timeline_0_Strength_84B0597E4A6F4AF4AC9F8A9A1B2E249F; // 0x26c(0x04)
	enum class ETimelineDirection Timeline_0__Direction_84B0597E4A6F4AF4AC9F8A9A1B2E249F; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct UTimelineComponent* Timeline_1; // 0x278(0x08)
	float FadeIn_FXMaterials_30DE694043B5B4F2F195EBA81820B589; // 0x280(0x04)
	float FadeIn_Strength_30DE694043B5B4F2F195EBA81820B589; // 0x284(0x04)
	enum class ETimelineDirection FadeIn__Direction_30DE694043B5B4F2F195EBA81820B589; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UTimelineComponent* FadeIn; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
	struct FPostProcessSettings PP_Setup; // 0x2a0(0x5f0)
	bool NewVar_1; // 0x890(0x01)

	void UserConstructionScript(); // Function BP_Wingardium_CrossFade.BP_Wingardium_CrossFade_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FadeIn__FinishedFunc(); // Function BP_Wingardium_CrossFade.BP_Wingardium_CrossFade_C.FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void FadeIn__UpdateFunc(); // Function BP_Wingardium_CrossFade.BP_Wingardium_CrossFade_C.FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__FinishedFunc(); // Function BP_Wingardium_CrossFade.BP_Wingardium_CrossFade_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void Timeline_0__UpdateFunc(); // Function BP_Wingardium_CrossFade.BP_Wingardium_CrossFade_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Wingardium_CrossFade.BP_Wingardium_CrossFade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void FadeOut(); // Function BP_Wingardium_CrossFade.BP_Wingardium_CrossFade_C.FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Wingardium_CrossFade(int32_t EntryPoint); // Function BP_Wingardium_CrossFade.BP_Wingardium_CrossFade_C.ExecuteUbergraph_BP_Wingardium_CrossFade // (Final|UbergraphFunction) // @ game+0x38a7480
};

