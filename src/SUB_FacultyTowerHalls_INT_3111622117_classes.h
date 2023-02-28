// BlueprintGeneratedClass SUB_FacultyTowerHalls_INT_3111622117.SUB_FacultyTowerHalls_INT_C
// Size: 0x270 (Inherited: 0x250)
struct ASUB_FacultyTowerHalls_INT_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct FName MissionGDW_CP1; // 0x258(0x08)
	struct ABP_Door_Template_C* FacultyTowerDoor_ExecuteUbergraph_SUB_FacultyTowerHalls_INT_RefProperty; // 0x260(0x08)
	struct ABP_Door_Template_C* BP_Door_Template10_ExecuteUbergraph_SUB_FacultyTowerHalls_INT_RefProperty; // 0x268(0x08)

	void ReceiveBeginPlay(); // Function SUB_FacultyTowerHalls_INT_3111622117.SUB_FacultyTowerHalls_INT_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnStatChanged(struct FName Key, int32_t Value, int32_t Delta); // Function SUB_FacultyTowerHalls_INT_3111622117.SUB_FacultyTowerHalls_INT_C.OnStatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnPlayerRemovedLock(); // Function SUB_FacultyTowerHalls_INT_3111622117.SUB_FacultyTowerHalls_INT_C.OnPlayerRemovedLock // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void GDW_01_CP1_Updated(struct UObject* Caller, struct FName& String); // Function SUB_FacultyTowerHalls_INT_3111622117.SUB_FacultyTowerHalls_INT_C.GDW_01_CP1_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_FacultyTowerHalls_INT(int32_t EntryPoint); // Function SUB_FacultyTowerHalls_INT_3111622117.SUB_FacultyTowerHalls_INT_C.ExecuteUbergraph_SUB_FacultyTowerHalls_INT // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

