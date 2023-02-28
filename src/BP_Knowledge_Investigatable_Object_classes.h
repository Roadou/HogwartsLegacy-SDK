// BlueprintGeneratedClass BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C
// Size: 0x378 (Inherited: 0x350)
struct ABP_Knowledge_Investigatable_Object_C : ABP_FieldGuideHotSpot_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UChildActorComponent* BP_Knowledge_Investigatable_Object_Marker; // 0x358(0x08)
	struct UInvestigatableKnowledge* InvestigatableKnowledge; // 0x360(0x08)
	struct FString Investigatable Name; // 0x368(0x10)

	void TurnOffMinimap(); // Function BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C.TurnOffMinimap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void UserConstructionScript(); // Function BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ReceiveBeginPlay(); // Function BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x38a7480
	void Test Cast(); // Function BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C.Test Cast // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Knowledge_Investigatable_Object(int32_t EntryPoint); // Function BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C.ExecuteUbergraph_BP_Knowledge_Investigatable_Object // (Final|UbergraphFunction) // @ game+0x38a7480
};

