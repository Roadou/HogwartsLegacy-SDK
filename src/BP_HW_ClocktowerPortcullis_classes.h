// BlueprintGeneratedClass BP_HW_ClocktowerPortcullis.BP_HW_ClocktowerPortcullis_C
// Size: 0x3a0 (Inherited: 0x38d)
struct ABP_HW_ClocktowerPortcullis_C : ABP_Portcullis_Base_C {
	char pad_38D[0x3]; // 0x38d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UStaticMeshComponent* PortculisFrameRight; // 0x398(0x08)

	void LockChanged(struct UObject* Caller, struct FLockManagerLock& Lock); // Function BP_HW_ClocktowerPortcullis.BP_HW_ClocktowerPortcullis_C.LockChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_HW_ClocktowerPortcullis.BP_HW_ClocktowerPortcullis_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_HW_ClocktowerPortcullis(int32_t EntryPoint); // Function BP_HW_ClocktowerPortcullis.BP_HW_ClocktowerPortcullis_C.ExecuteUbergraph_BP_HW_ClocktowerPortcullis // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

