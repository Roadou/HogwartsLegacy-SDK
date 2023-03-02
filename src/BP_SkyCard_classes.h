// BlueprintGeneratedClass BP_SkyCard.BP_SkyCard_C
// Size: 0x280 (Inherited: 0x248)
struct ABP_SkyCard_C : AActor {
	struct UStaticMeshComponent* SkyCard; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float Brightness; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UTexture* Texture; // 0x260(0x08)
	bool Tint; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FLinearColor Tint Color; // 0x26c(0x10)
	float Tiling; // 0x27c(0x04)

	void UserConstructionScript(); // Function BP_SkyCard.BP_SkyCard_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

