// BlueprintGeneratedClass BP_WE_ManicSign_02.BP_WE_ManicSign_02_C
// Size: 0x304 (Inherited: 0x268)
struct ABP_WE_ManicSign_02_C : APhoenixBudgetedActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float SignFade_FireParticles_665BC08B4573097FBAFE88B7FFA7D7F9; // 0x280(0x04)
	float SignFade_FadeOut_665BC08B4573097FBAFE88B7FFA7D7F9; // 0x284(0x04)
	enum class ETimelineDirection SignFade__Direction_665BC08B4573097FBAFE88B7FFA7D7F9; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UTimelineComponent* SignFade; // 0x290(0x08)
	struct FVector signLocation; // 0x298(0x0c)
	char pad_2A4[0xc]; // 0x2a4(0x0c)
	struct FTransform signTransform; // 0x2b0(0x30)
	struct UMaterialInstanceDynamic* boardText; // 0x2e0(0x08)
	float UVposition; // 0x2e8(0x04)
	int32_t SignTextRow; // 0x2ec(0x04)
	bool isSwapping; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct UMaterialInterface* TextMaterialVariation; // 0x2f8(0x08)
	int32_t TextCounter; // 0x300(0x04)

	void RandomiseSignMaterial(); // Function BP_WE_ManicSign_02.BP_WE_ManicSign_02_C.RandomiseSignMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Select new Alt text(); // Function BP_WE_ManicSign_02.BP_WE_ManicSign_02_C.Select new Alt text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Select new sign text row(); // Function BP_WE_ManicSign_02.BP_WE_ManicSign_02_C.Select new sign text row // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SignFade__FinishedFunc(); // Function BP_WE_ManicSign_02.BP_WE_ManicSign_02_C.SignFade__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void SignFade__UpdateFunc(); // Function BP_WE_ManicSign_02.BP_WE_ManicSign_02_C.SignFade__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_ManicSign_02.BP_WE_ManicSign_02_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SwapSigns(); // Function BP_WE_ManicSign_02.BP_WE_ManicSign_02_C.SwapSigns // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DropSign(); // Function BP_WE_ManicSign_02.BP_WE_ManicSign_02_C.DropSign // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_ManicSign_02(int32_t EntryPoint); // Function BP_WE_ManicSign_02.BP_WE_ManicSign_02_C.ExecuteUbergraph_BP_WE_ManicSign_02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

