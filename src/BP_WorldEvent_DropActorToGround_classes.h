// BlueprintGeneratedClass BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C
// Size: 0x150 (Inherited: 0xc8)
struct UBP_WorldEvent_DropActorToGround_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	bool DropToGround; // 0xd0(0x01)
	bool DropActorsFromList; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct TArray<struct AActor*> ActorsToDropToGround; // 0xd8(0x10)
	struct TArray<struct AActor*> ValidActorsToDropToGround; // 0xe8(0x10)
	struct FVector DropLocOffset; // 0xf8(0x0c)
	bool RotateToGround; // 0x104(0x01)
	bool AddRandomZRot; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	int32_t RandomZRotMin; // 0x108(0x04)
	int32_t RandomZRotMax; // 0x10c(0x04)
	bool DoBoxTraceIfValid; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float MinBoundsForBoxTrace; // 0x114(0x04)
	float TraceLength; // 0x118(0x04)
	struct FVector TraceStartOffset; // 0x11c(0x0c)
	struct FMulticastInlineDelegate OnDroppedToGround; // 0x128(0x10)
	bool ManuallyCall; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x140(0x10)

	void SetMobility(struct AActor*& Actor, enum class EComponentMobility New Mobility, enum class EComponentMobility& Previous Mobility); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.SetMobility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void DoBoxTraceAndRotate(struct FVector TraceBounds, struct FVector Normal, struct AActor* Actor, struct TArray<struct AActor*>& IgnoreList); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.DoBoxTraceAndRotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void MoveToGround(struct AActor* ActorToDrop, struct TArray<struct AActor*>& IgnoreList); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.MoveToGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetTraceStartEnd(float EndOffset, struct FVector StartOffset, struct AActor* Actor, struct FVector& Start, struct FVector& End); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.GetTraceStartEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetToGroundRotation(struct AActor* Actor, struct FVector Trace Normal, struct FRotator& New Rotation); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.SetToGroundRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void QueryBounds(struct FVector BoxExtent, bool& DoBoxTrace, struct FVector& TraceBounds); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.QueryBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GetTraceBounds(struct AActor* Actor, bool& DoBoxTrace, struct FVector& TraceBounds); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.GetTraceBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddRandomZRotation(struct AActor* Actor); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.AddRandomZRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void DropActor(); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.DropActor // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WorldEvent_DropActorToGround(int32_t EntryPoint); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.ExecuteUbergraph_BP_WorldEvent_DropActorToGround // (Final|UbergraphFunction) // @ game+0x38a7480
	void OnDroppedToGround__DelegateSignature(); // Function BP_WorldEvent_DropActorToGround.BP_WorldEvent_DropActorToGround_C.OnDroppedToGround__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

