// BlueprintGeneratedClass BP_Superposition_Combined_Experiences.BP_Superposition_Combined_Experiences_C
// Size: 0x2e4 (Inherited: 0x2c1)
struct ABP_Superposition_Combined_Experiences_C : ABP_WE_Superposition_Experience_C {
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct TArray<struct FSTR_Superposition_Combined_Experiences> ExperienceSequence; // 0x2c8(0x10)
	struct ABP_WE_Superposition_Experience_C* CurrentExperience; // 0x2d8(0x08)
	int32_t SequenceIndex; // 0x2e0(0x04)

	void Uninitialise(); // Function BP_Superposition_Combined_Experiences.BP_Superposition_Combined_Experiences_C.Uninitialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void SetupNextExperience(); // Function BP_Superposition_Combined_Experiences.BP_Superposition_Combined_Experiences_C.SetupNextExperience // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void PlayCurrentExperience(); // Function BP_Superposition_Combined_Experiences.BP_Superposition_Combined_Experiences_C.PlayCurrentExperience // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void CreateExperience(struct FSTR_Superposition_Combined_Experiences& ExperienceDescription, struct ABP_WE_Superposition_Experience_C*& Experience); // Function BP_Superposition_Combined_Experiences.BP_Superposition_Combined_Experiences_C.CreateExperience // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void TriggerNextExperience(); // Function BP_Superposition_Combined_Experiences.BP_Superposition_Combined_Experiences_C.TriggerNextExperience // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Initialise(); // Function BP_Superposition_Combined_Experiences.BP_Superposition_Combined_Experiences_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
};

