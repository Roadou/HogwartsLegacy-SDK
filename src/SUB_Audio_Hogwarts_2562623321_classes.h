// BlueprintGeneratedClass SUB_Audio_Hogwarts_2562623321.SUB_Audio_Hogwarts_C
// Size: 0x268 (Inherited: 0x250)
struct ASUB_Audio_Hogwarts_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	int32_t HW AudioVolumesOverlapped; // 0x258(0x04)
	int32_t PotionsClassroomVolumesOverlapped; // 0x25c(0x04)
	int32_t GreenhouseVolumesOverlapped; // 0x260(0x04)
	int32_t GreatHallVolumesOverlapped; // 0x264(0x04)

	void ReceiveBeginPlay(); // Function SUB_Audio_Hogwarts_2562623321.SUB_Audio_Hogwarts_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_Audio_Hogwarts_2562623321.SUB_Audio_Hogwarts_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_Audio_Hogwarts(int32_t EntryPoint); // Function SUB_Audio_Hogwarts_2562623321.SUB_Audio_Hogwarts_C.ExecuteUbergraph_SUB_Audio_Hogwarts // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

