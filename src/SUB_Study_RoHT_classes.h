// BlueprintGeneratedClass SUB_Study_RoHT.SUB_Study_RoHT_C
// Size: 0x2d8 (Inherited: 0x250)
struct ASUB_Study_RoHT_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	int32_t ChosenTransfigIdentity; // 0x258(0x04)
	enum class ESanctuaryIdentity ChosenLightingIdentity; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	int32_t ChosenDressing; // 0x260(0x04)
	struct FName ChosenColor; // 0x264(0x08)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FString CustomizationChoice; // 0x270(0x10)
	struct TMap<struct FString, struct FString> ArticyIDToCustomizationChoiceName; // 0x280(0x50)
	struct ULevelStreaming* Target; // 0x2d0(0x08)

	void ReceiveBeginPlay(); // Function SUB_Study_RoHT.SUB_Study_RoHT_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void OnHubReadyToEnter(); // Function SUB_Study_RoHT.SUB_Study_RoHT_C.OnHubReadyToEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Conversation_Node_Property:MSG_Mission(struct UObject* Caller, struct FString String); // Function SUB_Study_RoHT.SUB_Study_RoHT_C.Conversation_Node_Property:MSG_Mission // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SUB_Study_RoHT.SUB_Study_RoHT_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void SNC_01_Updated(struct UObject* Caller, struct FName& String); // Function SUB_Study_RoHT.SUB_Study_RoHT_C.SNC_01_Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void OnRoHTReady(); // Function SUB_Study_RoHT.SUB_Study_RoHT_C.OnRoHTReady // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_SUB_Study_RoHT(int32_t EntryPoint); // Function SUB_Study_RoHT.SUB_Study_RoHT_C.ExecuteUbergraph_SUB_Study_RoHT // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

