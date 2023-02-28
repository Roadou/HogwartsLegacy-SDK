// BlueprintGeneratedClass BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C
// Size: 0x378 (Inherited: 0x310)
struct ABP_Sanc_FreeStandingClock_Parent_C : AFreeStandingClock {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UAkComponent* AkChime; // 0x318(0x08)
	struct UAkComponent* AkTick; // 0x320(0x08)
	struct TMap<int32_t, struct UAkAudioEvent*> ChimeAudio; // 0x328(0x50)

	void ReceiveBeginPlay(); // Function BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ObjectConjured(); // Function BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ObjectConjured // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationCancelled(); // Function BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ObjectTransformationCancelled // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectTransformationConfirmed(); // Function BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ObjectTransformationConfirmed // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ObjectVanished(); // Function BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ObjectVanished // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void SecondTick(); // Function BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.SecondTick // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnClockChime(); // Function BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.OnClockChime // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Sanc_FreeStandingClock_Parent(int32_t EntryPoint); // Function BP_Sanc_FreeStandingClock_Parent.BP_Sanc_FreeStandingClock_Parent_C.ExecuteUbergraph_BP_Sanc_FreeStandingClock_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

