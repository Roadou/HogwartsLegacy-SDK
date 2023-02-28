// BlueprintGeneratedClass BTT_FollowSplineInit.BTT_FollowSplineInit_C
// Size: 0xcd (Inherited: 0xa8)
struct UBTT_FollowSplineInit_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float MaxTime; // 0xb0(0x04)
	float ElapsedTime; // 0xb4(0x04)
	struct FName PathNodeLocKeyName; // 0xb8(0x08)
	struct FName PathNodeRadiusKeyName; // 0xc0(0x08)
	float StartTimer; // 0xc8(0x04)
	bool Started; // 0xcc(0x01)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_FollowSplineInit.BTT_FollowSplineInit_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_FollowSplineInit(int32_t EntryPoint); // Function BTT_FollowSplineInit.BTT_FollowSplineInit_C.ExecuteUbergraph_BTT_FollowSplineInit // (Final|UbergraphFunction) // @ game+0x38a7480
};

