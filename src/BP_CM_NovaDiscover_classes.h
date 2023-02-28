// BlueprintGeneratedClass BP_CM_NovaDiscover.BP_CM_NovaDiscover_C
// Size: 0x298 (Inherited: 0x268)
struct ABP_CM_NovaDiscover_C : AAncientMagicNova {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UStaticMeshComponent* Sphere; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	struct UAncientMagicEffect_Nova* Parent; // 0x280(0x08)
	struct FMulticastInlineDelegate OnCollide; // 0x288(0x10)

	void ReceiveTick(float DeltaSeconds); // Function BP_CM_NovaDiscover.BP_CM_NovaDiscover_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_CM_NovaDiscover(int32_t EntryPoint); // Function BP_CM_NovaDiscover.BP_CM_NovaDiscover_C.ExecuteUbergraph_BP_CM_NovaDiscover // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnCollide__DelegateSignature(); // Function BP_CM_NovaDiscover.BP_CM_NovaDiscover_C.OnCollide__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

