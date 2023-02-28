// BlueprintGeneratedClass BP_FlyingStairsChain.BP_FlyingStairsChain_C
// Size: 0x419 (Inherited: 0x2b0)
struct ABP_FlyingStairsChain_C : AFlyingStairsChain {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	bool useConstructionScript; // 0x2b8(0x01)
	bool isInnerStair; // 0x2b9(0x01)
	bool buildClockwise; // 0x2ba(0x01)
	char pad_2BB[0x1]; // 0x2bb(0x01)
	int32_t numSections; // 0x2bc(0x04)
	struct FVector offsetFromMiddleInner; // 0x2c0(0x0c)
	float zOffsetForInner; // 0x2cc(0x04)
	float colliderScaleModifier; // 0x2d0(0x04)
	float RotationMultiplier; // 0x2d4(0x04)
	float rotationOffsetForInner; // 0x2d8(0x04)
	struct FVector offsetFromMiddleOuter; // 0x2dc(0x0c)
	float zOffsetForOuter; // 0x2e8(0x04)
	float rotationOffsetForOuter; // 0x2ec(0x04)
	struct UStaticMesh* firstInnerStaticMeshToUse; // 0x2f0(0x08)
	struct USkeletalMesh* firstInnerStart; // 0x2f8(0x08)
	struct UAnimSequence* firstInnerStartAnim; // 0x300(0x08)
	struct USkeletalMesh* firstInnerFinish; // 0x308(0x08)
	struct UStaticMesh* outerStaticMeshToUse; // 0x310(0x08)
	struct TArray<struct UFlyingStairComponent*> flyingStairComps; // 0x318(0x10)
	struct UAnimSequence* firstInnerFinishAnim; // 0x328(0x08)
	struct UStaticMesh* innerStaticMeshToUse; // 0x330(0x08)
	struct USkeletalMesh* innerStart; // 0x338(0x08)
	struct UAnimSequence* innerStartAnim; // 0x340(0x08)
	struct USkeletalMesh* innerFinish; // 0x348(0x08)
	struct USkeletalMesh* outerStart; // 0x350(0x08)
	struct UAnimSequence* outerStartAnim; // 0x358(0x08)
	struct USkeletalMesh* outerFinish; // 0x360(0x08)
	float rotationModifier; // 0x368(0x04)
	float OffsetMultiplier; // 0x36c(0x04)
	struct FTransform bottomLandingPadCollider; // 0x370(0x30)
	struct FTransform topLandingPadCollider; // 0x3a0(0x30)
	struct FVector landingSizeBottom; // 0x3d0(0x0c)
	struct FVector landingSizeTop; // 0x3dc(0x0c)
	bool collidersVisible; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UAnimSequence* innerFinishAnim; // 0x3f0(0x08)
	struct UAnimSequence* outerFinishAnim; // 0x3f8(0x08)
	int32_t Length; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
	struct TArray<float> zs; // 0x408(0x10)
	bool playPartOfAnim; // 0x418(0x01)

	void GenerateStairs_1(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.GenerateStairs_1 // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CopyStairsAsStaticMesh(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.CopyStairsAsStaticMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PopulateComponents(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.PopulateComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UpdateSkeletalMesh(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.UpdateSkeletalMesh // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ToggleColliders(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.ToggleColliders // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void AddCollider(struct UFlyingStairComponent* Parent, struct UFlyingStairComponent* locationToSpawn, struct FVector InitialOffset, float additionalMod, int32_t Index); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.AddCollider // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GenerateStairs(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.GenerateStairs // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GenerateBoundingBoxes(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.GenerateBoundingBoxes // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void LoopSound(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.LoopSound // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStairDemolishing_Event_1(struct UFlyingStairComponent* FlyingStairComponent, float animationLength, float animationStartPosition); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.OnStairDemolishing_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayBuilding(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.PlayBuilding // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayDestroying(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.PlayDestroying // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void HandleAk(enum class E_FlyingStairState State, struct USkeletalMeshComponent* Component); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.HandleAk // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnStairBuilding_Event_1(struct UFlyingStairComponent* FlyingStairComponent, float animationLength, float animationStartPosition); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.OnStairBuilding_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_FlyingStairsChain(int32_t EntryPoint); // Function BP_FlyingStairsChain.BP_FlyingStairsChain_C.ExecuteUbergraph_BP_FlyingStairsChain // (Final|UbergraphFunction) // @ game+0x38a7480
};

