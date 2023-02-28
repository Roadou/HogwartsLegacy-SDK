// BlueprintGeneratedClass BP_AmbientGhost.BP_AmbientGhost_C
// Size: 0x568 (Inherited: 0x540)
struct ABP_AmbientGhost_C : AAmbientGhost_Character {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UAkComponent* SoundLocation; // 0x548(0x08)
	struct UFacialComponent* Facial; // 0x550(0x08)
	struct UCustomizableCharacterComponent* CustomizableCharacter; // 0x558(0x08)
	struct UObjectStateComponent* ObjectState; // 0x560(0x08)

	void SetCharacterType(struct FString inString); // Function BP_AmbientGhost.BP_AmbientGhost_C.SetCharacterType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void EnteredOuterRadius(); // Function BP_AmbientGhost.BP_AmbientGhost_C.EnteredOuterRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExitedOuterRadius(); // Function BP_AmbientGhost.BP_AmbientGhost_C.ExitedOuterRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void EnteredInnerRadius(); // Function BP_AmbientGhost.BP_AmbientGhost_C.EnteredInnerRadius // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_AmbientGhost(int32_t EntryPoint); // Function BP_AmbientGhost.BP_AmbientGhost_C.ExecuteUbergraph_BP_AmbientGhost // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

