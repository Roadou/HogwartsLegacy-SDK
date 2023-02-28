// BlueprintGeneratedClass BP_PropOwl_Owlery.BP_PropOwl_Owlery_C
// Size: 0x488 (Inherited: 0x461)
struct ABP_PropOwl_Owlery_C : ABP_PropOwl_Base_C {
	char pad_461[0x7]; // 0x461(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct FHermesBPDelegateHandle PropOwlFlapWingsHandle; // 0x470(0x10)
	float Interpolation Time Sec Min; // 0x480(0x04)
	float Interpolation Time Sec Max; // 0x484(0x04)

	void PropOwlFlapWings(struct UObject* Caller); // Function BP_PropOwl_Owlery.BP_PropOwl_Owlery_C.PropOwlFlapWings // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PropOwl_Owlery.BP_PropOwl_Owlery_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Owl_Audio_Timer(); // Function BP_PropOwl_Owlery.BP_PropOwl_Owlery_C.Owl_Audio_Timer // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_PropOwl_Owlery.BP_PropOwl_Owlery_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_PropOwl_Owlery(int32_t EntryPoint); // Function BP_PropOwl_Owlery.BP_PropOwl_Owlery_C.ExecuteUbergraph_BP_PropOwl_Owlery // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

