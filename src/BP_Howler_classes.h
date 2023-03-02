// BlueprintGeneratedClass BP_Howler.BP_Howler_C
// Size: 0x2a8 (Inherited: 0x280)
struct ABP_Howler_C : AWorldEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UBoxComponent* Box; // 0x288(0x08)
	struct USkeletalMeshComponent* OpenHowler; // 0x290(0x08)
	struct USkeletalMeshComponent* ClosedHowler; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)

	void OnNotifyEnd_43986539484D3BA9E9780CB4356F6BF8(struct FName NotifyName); // Function BP_Howler.BP_Howler_C.OnNotifyEnd_43986539484D3BA9E9780CB4356F6BF8 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyBegin_43986539484D3BA9E9780CB4356F6BF8(struct FName NotifyName); // Function BP_Howler.BP_Howler_C.OnNotifyBegin_43986539484D3BA9E9780CB4356F6BF8 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInterrupted_43986539484D3BA9E9780CB4356F6BF8(struct FName NotifyName); // Function BP_Howler.BP_Howler_C.OnInterrupted_43986539484D3BA9E9780CB4356F6BF8 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBlendOut_43986539484D3BA9E9780CB4356F6BF8(struct FName NotifyName); // Function BP_Howler.BP_Howler_C.OnBlendOut_43986539484D3BA9E9780CB4356F6BF8 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCompleted_43986539484D3BA9E9780CB4356F6BF8(struct FName NotifyName); // Function BP_Howler.BP_Howler_C.OnCompleted_43986539484D3BA9E9780CB4356F6BF8 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyEnd_30D68AA64C2E332B42D7CCB097A6D168(struct FName NotifyName); // Function BP_Howler.BP_Howler_C.OnNotifyEnd_30D68AA64C2E332B42D7CCB097A6D168 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnNotifyBegin_30D68AA64C2E332B42D7CCB097A6D168(struct FName NotifyName); // Function BP_Howler.BP_Howler_C.OnNotifyBegin_30D68AA64C2E332B42D7CCB097A6D168 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnInterrupted_30D68AA64C2E332B42D7CCB097A6D168(struct FName NotifyName); // Function BP_Howler.BP_Howler_C.OnInterrupted_30D68AA64C2E332B42D7CCB097A6D168 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnBlendOut_30D68AA64C2E332B42D7CCB097A6D168(struct FName NotifyName); // Function BP_Howler.BP_Howler_C.OnBlendOut_30D68AA64C2E332B42D7CCB097A6D168 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnCompleted_30D68AA64C2E332B42D7CCB097A6D168(struct FName NotifyName); // Function BP_Howler.BP_Howler_C.OnCompleted_30D68AA64C2E332B42D7CCB097A6D168 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Howler.BP_Howler_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Howler(int32_t EntryPoint); // Function BP_Howler.BP_Howler_C.ExecuteUbergraph_BP_Howler // (Final|UbergraphFunction) // @ game+0x38a7480
};

