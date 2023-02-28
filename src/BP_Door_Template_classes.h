// BlueprintGeneratedClass BP_Door_Template.BP_Door_Template_C
// Size: 0x53c (Inherited: 0x528)
struct ABP_Door_Template_C : APadlockDoor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	enum class EEnvironment Environment; // 0x530(0x01)
	char pad_531[0x3]; // 0x531(0x03)
	struct FRandomStream Random Seed; // 0x534(0x08)

	void UserConstructionScript(); // Function BP_Door_Template.BP_Door_Template_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Door_Template(int32_t EntryPoint); // Function BP_Door_Template.BP_Door_Template_C.ExecuteUbergraph_BP_Door_Template // (Final|UbergraphFunction) // @ game+0x38a7480
};

