// BlueprintGeneratedClass BP_VanishmentStyle_WallObject.BP_VanishmentStyle_WallObject_C
// Size: 0x2d0 (Inherited: 0x250)
struct ABP_VanishmentStyle_WallObject_C : AVanishmentStyleBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct FVector NonUniformScale; // 0x260(0x0c)
	float ScaleFactor; // 0x26c(0x04)
	float Rotation Direction; // 0x270(0x04)
	struct FVector TranslationOffset; // 0x274(0x0c)
	float TranslationAmount; // 0x280(0x04)
	char pad_284[0xc]; // 0x284(0x0c)
	struct FTransform InitialTransform; // 0x290(0x30)
	float SpawnOutRotation; // 0x2c0(0x04)
	struct FVector CenterOffset; // 0x2c4(0x0c)

	void StartVanishment(); // Function BP_VanishmentStyle_WallObject.BP_VanishmentStyle_WallObject_C.StartVanishment // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_VanishmentStyle_WallObject(int32_t EntryPoint); // Function BP_VanishmentStyle_WallObject.BP_VanishmentStyle_WallObject_C.ExecuteUbergraph_BP_VanishmentStyle_WallObject // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

