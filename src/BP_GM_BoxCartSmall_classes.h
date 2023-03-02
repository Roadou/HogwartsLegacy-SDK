// BlueprintGeneratedClass BP_GM_BoxCartSmall.BP_GM_BoxCartSmall_C
// Size: 0x384 (Inherited: 0x360)
struct ABP_GM_BoxCartSmall_C : ABP_GM_CartCauldronSmall_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UAkComponent* Ak_BP_GM_BoxCartSmall; // 0x368(0x08)
	struct ABP_GM_TrackCompositeSpline_C* TrackSpline_1; // 0x370(0x08)
	float Speed_1; // 0x378(0x04)
	enum class E_GM_CartTypes CartType; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	float CurrentDistanceOnSpline_0_1; // 0x380(0x04)

	void ReceiveBeginPlay(); // Function BP_GM_BoxCartSmall.BP_GM_BoxCartSmall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_GM_BoxCartSmall(int32_t EntryPoint); // Function BP_GM_BoxCartSmall.BP_GM_BoxCartSmall_C.ExecuteUbergraph_BP_GM_BoxCartSmall // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

