// BlueprintGeneratedClass BTT_Biped_EnterTotem.BTT_Biped_EnterTotem_C
// Size: 0x1a8 (Inherited: 0x150)
struct UBTT_Biped_EnterTotem_C : UBTTask_AvaAITree_Input {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AActor* Totem; // 0x158(0x08)
	struct FVector PlayerToStation; // 0x160(0x0c)
	struct FRotator DesiredRotation; // 0x16c(0x0c)
	struct FVector Up; // 0x178(0x0c)
	float InterpSpeed; // 0x184(0x04)
	float RotationSpeed; // 0x188(0x04)
	float InterpPosSpeed; // 0x18c(0x04)
	float DistFromSite; // 0x190(0x04)
	bool GettingIntoPosition; // 0x194(0x01)
	bool HasLeftStickBeenPressed; // 0x195(0x01)
	char pad_196[0x2]; // 0x196(0x02)
	float ValueToAdd; // 0x198(0x04)
	struct FVector DesiredLocation; // 0x19c(0x0c)

	void SetDesiredLocationAndRotation(struct AActor* Player); // Function BTT_Biped_EnterTotem.BTT_Biped_EnterTotem_C.SetDesiredLocationAndRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_Biped_EnterTotem.BTT_Biped_EnterTotem_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void ExitTask(struct AActor* OwnerActor); // Function BTT_Biped_EnterTotem.BTT_Biped_EnterTotem_C.ExitTask // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTT_Biped_EnterTotem(int32_t EntryPoint); // Function BTT_Biped_EnterTotem.BTT_Biped_EnterTotem_C.ExecuteUbergraph_BTT_Biped_EnterTotem // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

