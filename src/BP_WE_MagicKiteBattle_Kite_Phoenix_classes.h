// BlueprintGeneratedClass BP_WE_MagicKiteBattle_Kite_Phoenix.BP_WE_MagicKiteBattle_Kite_Phoenix_C
// Size: 0x3a8 (Inherited: 0x378)
struct ABP_WE_MagicKiteBattle_Kite_Phoenix_C : ABP_WE_MagicKiteBattle_Kite_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct USkeletalMeshComponent* SkeletalMesh1; // 0x380(0x08)
	struct USkeletalMeshComponent* SkeletalMesh3; // 0x388(0x08)
	struct USkeletalMeshComponent* SkeletalMesh2; // 0x390(0x08)
	enum class ETimelineDirection FollowForwardKite__Direction_EDC55CD74F7A7498C15042994A444A0A; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UTimelineComponent* FollowForwardKite; // 0x3a0(0x08)

	void FollowForwardKite__FinishedFunc(); // Function BP_WE_MagicKiteBattle_Kite_Phoenix.BP_WE_MagicKiteBattle_Kite_Phoenix_C.FollowForwardKite__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void FollowForwardKite__UpdateFunc(); // Function BP_WE_MagicKiteBattle_Kite_Phoenix.BP_WE_MagicKiteBattle_Kite_Phoenix_C.FollowForwardKite__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_WE_MagicKiteBattle_Kite_Phoenix.BP_WE_MagicKiteBattle_Kite_Phoenix_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void StartDeploy(); // Function BP_WE_MagicKiteBattle_Kite_Phoenix.BP_WE_MagicKiteBattle_Kite_Phoenix_C.StartDeploy // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void FinishedReturnAnim(); // Function BP_WE_MagicKiteBattle_Kite_Phoenix.BP_WE_MagicKiteBattle_Kite_Phoenix_C.FinishedReturnAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void StartFlyingLoop(); // Function BP_WE_MagicKiteBattle_Kite_Phoenix.BP_WE_MagicKiteBattle_Kite_Phoenix_C.StartFlyingLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void KiteReturn(); // Function BP_WE_MagicKiteBattle_Kite_Phoenix.BP_WE_MagicKiteBattle_Kite_Phoenix_C.KiteReturn // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_WE_MagicKiteBattle_Kite_Phoenix(int32_t EntryPoint); // Function BP_WE_MagicKiteBattle_Kite_Phoenix.BP_WE_MagicKiteBattle_Kite_Phoenix_C.ExecuteUbergraph_BP_WE_MagicKiteBattle_Kite_Phoenix // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

