// BlueprintGeneratedClass BP_BroomStudent.BP_BroomStudent_C
// Size: 0xd08 (Inherited: 0xcd0)
struct ABP_BroomStudent_C : AEnemyBroomRider {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xcd0(0x08)
	struct UAnimationComponent* Animation; // 0xcd8(0x08)
	struct UObjectStateComponent* ObjectState; // 0xce0(0x08)
	struct UCustomizableCharacterComponent* CustomizableCharacter; // 0xce8(0x08)
	struct TArray<struct FName> DBNameArray; // 0xcf0(0x10)
	struct FName DatabaseCharacterIDOverride; // 0xd00(0x08)

	struct FName OnOverrideCharacterLook(struct AActor* Actor, struct FName Name); // Function BP_BroomStudent.BP_BroomStudent_C.OnOverrideCharacterLook // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_BroomStudent.BP_BroomStudent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_BroomStudent(int32_t EntryPoint); // Function BP_BroomStudent.BP_BroomStudent_C.ExecuteUbergraph_BP_BroomStudent // (Final|UbergraphFunction) // @ game+0x38a7480
};

