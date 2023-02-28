// BlueprintGeneratedClass BTT_FollowSpline.BTT_FollowSpline_C
// Size: 0xc9 (Inherited: 0xa8)
struct UBTT_FollowSpline_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float MaxTime; // 0xb0(0x04)
	float ElapsedTime; // 0xb4(0x04)
	struct FName PathNodeLocKeyName; // 0xb8(0x08)
	struct FName PathNodeRadiusKeyName; // 0xc0(0x08)
	bool Started; // 0xc8(0x01)

	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function BTT_FollowSpline.BTT_FollowSpline_C.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_FollowSpline.BTT_FollowSpline_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_FollowSpline(int32_t EntryPoint); // Function BTT_FollowSpline.BTT_FollowSpline_C.ExecuteUbergraph_BTT_FollowSpline // (Final|UbergraphFunction) // @ game+0x38a7480
};

