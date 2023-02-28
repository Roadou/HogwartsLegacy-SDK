// BlueprintGeneratedClass BP_MapPath_ArrayActor.BP_MapPath_ArrayActor_C
// Size: 0x2b8 (Inherited: 0x248)
struct ABP_MapPath_ArrayActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	float Width of Path; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct FString StepNickname; // 0x260(0x10)
	struct TArray<struct ATargetPoint*> PathSec1; // 0x270(0x10)
	struct TArray<struct ATargetPoint*> PathSec2; // 0x280(0x10)
	struct TArray<struct ATargetPoint*> PathSec3; // 0x290(0x10)
	struct TArray<struct ATargetPoint*> PathSec4; // 0x2a0(0x10)
	struct ATriggerBox* Trigger; // 0x2b0(0x08)

	void ReceiveBeginPlay(); // Function BP_MapPath_ArrayActor.BP_MapPath_ArrayActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void EnteredTrig(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_MapPath_ArrayActor.BP_MapPath_ArrayActor_C.EnteredTrig // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DM01_01_Updated(struct UObject* Caller, struct FName& String); // Function BP_MapPath_ArrayActor.BP_MapPath_ArrayActor_C.DM01_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_MapPath_ArrayActor(int32_t EntryPoint); // Function BP_MapPath_ArrayActor.BP_MapPath_ArrayActor_C.ExecuteUbergraph_BP_MapPath_ArrayActor // (Final|UbergraphFunction) // @ game+0x38a7480
};

