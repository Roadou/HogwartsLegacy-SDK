// BlueprintGeneratedClass BTS_Biped_EQS.BTS_Biped_EQS_C
// Size: 0xd8 (Inherited: 0xd0)
struct UBTS_Biped_EQS_C : UBTService_SocialReasoning {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)

	void RunEQS_FindStations(struct ASocialReasoning* SocialReasoning, enum class EEnvQueryRunMode RunMode, struct FQueryFinishedData& QueryFinishedDelegate); // Function BTS_Biped_EQS.BTS_Biped_EQS_C.RunEQS_FindStations // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void FindStations_QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTS_Biped_EQS.BTS_Biped_EQS_C.FindStations_QueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void RunEQS_FindSocialReasonings(struct ASocialReasoning* SocialReasoning, enum class EEnvQueryRunMode RunMode, struct FQueryFinishedData& QueryFinishedDelegate); // Function BTS_Biped_EQS.BTS_Biped_EQS_C.RunEQS_FindSocialReasonings // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38a7480
	void FindSocialReasonings_QueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTS_Biped_EQS.BTS_Biped_EQS_C.FindSocialReasonings_QueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BTS_Biped_EQS(int32_t EntryPoint); // Function BTS_Biped_EQS.BTS_Biped_EQS_C.ExecuteUbergraph_BTS_Biped_EQS // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

