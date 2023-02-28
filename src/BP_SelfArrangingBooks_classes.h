// BlueprintGeneratedClass BP_SelfArrangingBooks.BP_SelfArrangingBooks_C
// Size: 0x328 (Inherited: 0x2c0)
struct ABP_SelfArrangingBooks_C : ASelfArrangingBooks {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	float AccumulatedTime; // 0x2d0(0x04)
	float RandomTimer; // 0x2d4(0x04)
	bool Reverse; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32_t NumberOfPaths_1; // 0x2dc(0x04)
	struct TArray<struct UStaticMesh*> ArrayOfBooks; // 0x2e0(0x10)
	float MinTimerDelay; // 0x2f0(0x04)
	float MaxTimerDelay; // 0x2f4(0x04)
	float PlayRate; // 0x2f8(0x04)
	bool OverwrittenSplines; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct TArray<struct FSTR_SelfArrangingObjects> RearrangingObjects; // 0x300(0x10)
	enum class E_SelfArrangingObjects SelectionOfObjectType; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	int32_t SelectedType; // 0x314(0x04)
	bool InArea; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float DistanceLoadInArea; // 0x31c(0x04)
	struct FRandomStream RandomStream; // 0x320(0x08)

	void UserConstructionScript(); // Function BP_SelfArrangingBooks.BP_SelfArrangingBooks_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_SelfArrangingBooks.BP_SelfArrangingBooks_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void MoveBooks(); // Function BP_SelfArrangingBooks.BP_SelfArrangingBooks_C.MoveBooks // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_SelfArrangingBooks(int32_t EntryPoint); // Function BP_SelfArrangingBooks.BP_SelfArrangingBooks_C.ExecuteUbergraph_BP_SelfArrangingBooks // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

