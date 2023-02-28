// BlueprintGeneratedClass BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C
// Size: 0x5fc (Inherited: 0x5d0)
struct ABP_SkinFX_GlowGraph_C : ABP_SkinFX_Graph_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	float EmissiveAmount_EmissiveAmount_FBC318D54D7DAED5FB1ABCB52741A5DC; // 0x5d8(0x04)
	enum class ETimelineDirection EmissiveAmount__Direction_FBC318D54D7DAED5FB1ABCB52741A5DC; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	struct UTimelineComponent* EmissiveAmount; // 0x5e0(0x08)
	struct FLinearColor Color; // 0x5e8(0x10)
	float FadeOutStart; // 0x5f8(0x04)

	void EmissiveAmount__FinishedFunc(); // Function BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.EmissiveAmount__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void EmissiveAmount__UpdateFunc(); // Function BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.EmissiveAmount__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyEnd(enum class ESkinFXEffectEndStyle EndStyle, float CurrentTime); // Function BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.SkinFXNotifyEnd // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXInitialUpdate(); // Function BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.SkinFXInitialUpdate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyStart(); // Function BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.SkinFXNotifyStart // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyRetrigger(float CurrentTime); // Function BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.SkinFXNotifyRetrigger // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SkinFXNotifyKill(); // Function BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.SkinFXNotifyKill // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SkinFX_GlowGraph(int32_t EntryPoint); // Function BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.ExecuteUbergraph_BP_SkinFX_GlowGraph // (Final|UbergraphFunction) // @ game+0x38a7480
};

