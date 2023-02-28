// BlueprintGeneratedClass BP_SubSonic_StupefyPopup_Upgrade.BP_SubSonic_StupefyPopup_Upgrade_C
// Size: 0x544 (Inherited: 0x528)
struct ABP_SubSonic_StupefyPopup_Upgrade_C : AMunitionType_SubsonicSpell {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x530(0x08)
	struct UNiagaraComponent* NiagaraPopup; // 0x538(0x08)
	float ScaleValue; // 0x540(0x04)

	void ReceiveBeginPlay(); // Function BP_SubSonic_StupefyPopup_Upgrade.BP_SubSonic_StupefyPopup_Upgrade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SubSonic_StupefyPopup_Upgrade(int32_t EntryPoint); // Function BP_SubSonic_StupefyPopup_Upgrade.BP_SubSonic_StupefyPopup_Upgrade_C.ExecuteUbergraph_BP_SubSonic_StupefyPopup_Upgrade // (Final|UbergraphFunction) // @ game+0x38a7480
};

