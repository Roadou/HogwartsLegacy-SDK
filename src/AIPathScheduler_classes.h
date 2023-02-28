// Class AIPathScheduler.AIPath
// Size: 0x328 (Inherited: 0x248)
struct AAIPath : AActor {
	char pad_248[0x4]; // 0x248(0x04)
	float BlendScale; // 0x24c(0x04)
	bool UseAsEscapePath; // 0x250(0x01)
	bool BranchOnly; // 0x251(0x01)
	char pad_252[0x6]; // 0x252(0x06)
	struct TArray<struct FPathScheduleData> PathSchedule; // 0x258(0x10)
	bool bStartActive; // 0x268(0x01)
	bool bApparateOnDeactivate; // 0x269(0x01)
	bool bAllowGroups; // 0x26a(0x01)
	char pad_26B[0x5]; // 0x26b(0x05)
	struct UPathComponent* PathComponent; // 0x270(0x08)
	struct TArray<struct FBranchTagCommand> BranchCommands; // 0x278(0x10)
	struct TArray<struct FStationTagCommand> StationCommands; // 0x288(0x10)
	bool bDataTransfered; // 0x298(0x01)
	char pad_299[0x8f]; // 0x299(0x8f)

	void EnableApparate(bool InEnable); // Function AIPathScheduler.AIPath.EnableApparate // (Final|Native|Public|BlueprintCallable) // @ game+0x35141f0
	void Deactivate(); // Function AIPathScheduler.AIPath.Deactivate // (Final|Native|Public|BlueprintCallable) // @ game+0x35141d0
	void Activate(); // Function AIPathScheduler.AIPath.Activate // (Final|Native|Public|BlueprintCallable) // @ game+0x35141b0
};

