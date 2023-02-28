// Class Toolset.Tool
// Size: 0x2e0 (Inherited: 0x248)
struct ATool : AActor {
	bool bUseEffectsOnTool; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float EffectsTimeIn; // 0x24c(0x04)
	float EffectsTimeOut; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<struct UToolEffectData*> ActivateEffects; // 0x258(0x10)
	struct TArray<struct UToolEffectData*> DeactivateEffects; // 0x268(0x10)
	struct FName AttachSocket; // 0x278(0x08)
	struct UAkAudioEvent* EquipSfx; // 0x280(0x08)
	struct UAkAudioEvent* UnequipSfx; // 0x288(0x08)
	struct FBTCustomAction ToolEquipAction; // 0x290(0x0c)
	char pad_29C[0x44]; // 0x29c(0x44)

	struct AActor* GetUltimateOwner(); // Function Toolset.Tool.GetUltimateOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x5e26540
	struct UToolRecord* GetToolRecord(); // Function Toolset.Tool.GetToolRecord // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e26340
	struct UToolSetComponent* GetOurToolSetComponent(); // Function Toolset.Tool.GetOurToolSetComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e26310
	void DeactivationFx(); // Function Toolset.Tool.DeactivationFx // (Native|Event|Public|BlueprintEvent) // @ game+0x31e03d0
	void DeactivationComplete(); // Function Toolset.Tool.DeactivationComplete // (Final|Native|Public|BlueprintCallable) // @ game+0x5e26020
	void BlueprintDeactivate(); // Function Toolset.Tool.BlueprintDeactivate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void BlueprintActivate(); // Function Toolset.Tool.BlueprintActivate // (Event|Public|BlueprintEvent) // @ game+0x38a7480
	void ActivateFx(); // Function Toolset.Tool.ActivateFx // (Native|Event|Public|BlueprintEvent) // @ game+0x31e1780
};

// Class Toolset.ToolRecord
// Size: 0x50 (Inherited: 0x30)
struct UToolRecord : UDataAsset {
	struct FName LookupName; // 0x30(0x08)
	struct FName LockName; // 0x38(0x08)
	struct TArray<struct FInputContextWithType> Contexts; // 0x40(0x10)
};

// Class Toolset.LEDEffects
// Size: 0x140 (Inherited: 0xc8)
struct ULEDEffects : UActorComponent {
	char pad_C8[0x10]; // 0xc8(0x10)
	struct TArray<struct ULEDFadeEffect*> faders; // 0xd8(0x10)
	struct ULEDFadeEffect* BaseLEDFadeEffect; // 0xe8(0x08)
	char pad_F0[0x50]; // 0xf0(0x50)

	void SetColor(int32_t& ControllerId, struct FColor& Color); // Function Toolset.LEDEffects.SetColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5e267b0
	void ResetLED(int32_t& ControllerId); // Function Toolset.LEDEffects.ResetLED // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5e26670
	void ResetAll(); // Function Toolset.LEDEffects.ResetAll // (Final|Native|Public|BlueprintCallable) // @ game+0x5e26650
	bool GetActiveColor(struct FColor& Color); // Function Toolset.LEDEffects.GetActiveColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5e261e0
};

// Class Toolset.LEDFadeEffect
// Size: 0x48 (Inherited: 0x28)
struct ULEDFadeEffect : UObject {
	struct TArray<struct FLEDFadeEffectProperty> FadeEffectProperties; // 0x28(0x10)
	bool Loop; // 0x38(0x01)
	bool SetOnEnd; // 0x39(0x01)
	char pad_3A[0xe]; // 0x3a(0x0e)
};

// Class Toolset.ToolAsset_Ammo
// Size: 0x78 (Inherited: 0x30)
struct UToolAsset_Ammo : UDataAsset {
	struct FString m_ammoUpgrade; // 0x30(0x10)
	int32_t m_clipSize; // 0x40(0x04)
	bool m_autoReload; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float m_reloadDelay; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UAkAudioEvent* m_reloadSfx; // 0x50(0x08)
	struct UAnimMontage* m_reloadAnim; // 0x58(0x08)
	bool m_limitedAmmo; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t m_startingAmmo; // 0x64(0x04)
	int32_t m_maxAmmo; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UAkAudioEvent* m_emptySfx; // 0x70(0x08)
};

// Class Toolset.ToolEffectData
// Size: 0x48 (Inherited: 0x30)
struct UToolEffectData : UDataAsset {
	enum class EToolEffectType EffectType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UCurveFloat* GraphCurveFloat; // 0x38(0x08)
	float BaseScale; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Toolset.ToolManager
// Size: 0x40 (Inherited: 0x28)
struct UToolManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct TWeakObjectPtr<struct ATool>> ToolList; // 0x30(0x10)
};

// Class Toolset.ToolSetComponent
// Size: 0x3a8 (Inherited: 0xc8)
struct UToolSetComponent : UActorComponent {
	struct TArray<struct UToolRecord*> ToolRecords; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnActiveToolChanged; // 0xd8(0x10)
	char pad_E8[0x10]; // 0xe8(0x10)
	struct TMap<struct UToolRecord*, struct ATool*> SpawnedToolsMap; // 0xf8(0x50)
	char pad_148[0x260]; // 0x148(0x260)

	void StartSettingWhitelistedTools(struct TArray<struct UToolRecord*>& InTools, enum class EStandardManagedPriority InPriority, struct UObject* InProvider); // Function Toolset.ToolSetComponent.StartSettingWhitelistedTools // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5e269c0
	void StartSettingBlacklistedTools(struct TArray<struct UToolRecord*>& InTools, enum class EStandardManagedPriority InPriority, struct UObject* InProvider); // Function Toolset.ToolSetComponent.StartSettingBlacklistedTools // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5e26890
	void SetAttachmentParent(struct USceneComponent* InOwnerMesh); // Function Toolset.ToolSetComponent.SetAttachmentParent // (Final|Native|Public|BlueprintCallable) // @ game+0x5e26720
	void OnActiveToolChanged__DelegateSignature(struct ATool* Activated, struct ATool* Deactivated); // DelegateFunction Toolset.ToolSetComponent.OnActiveToolChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x38a7480
	bool IsToolUsageAllowed(struct UToolRecord* ToolRecord); // Function Toolset.ToolSetComponent.IsToolUsageAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e26570
	struct TArray<struct UToolRecord*> GetToolRecords(); // Function Toolset.ToolSetComponent.GetToolRecords // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e264b0
	int32_t GetToolRecordIndex(struct UToolRecord* ToolRecord); // Function Toolset.ToolSetComponent.GetToolRecordIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e26410
	struct UToolRecord* GetToolRecordByName(struct FName Name); // Function Toolset.ToolSetComponent.GetToolRecordByName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e26370
	struct USceneComponent* GetAttachmentParent(); // Function Toolset.ToolSetComponent.GetAttachmentParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e262e0
	int32_t GetActiveToolRecordIndex(); // Function Toolset.ToolSetComponent.GetActiveToolRecordIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e262b0
	struct ATool* GetActiveTool(); // Function Toolset.ToolSetComponent.GetActiveTool // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e26280
	void FinishSettingWhitelistedTools(enum class EStandardManagedPriority InPriority, struct UObject* InProvider); // Function Toolset.ToolSetComponent.FinishSettingWhitelistedTools // (Final|Native|Public|BlueprintCallable) // @ game+0x5e26110
	void FinishSettingBlacklistedTools(enum class EStandardManagedPriority InPriority, struct UObject* InProvider); // Function Toolset.ToolSetComponent.FinishSettingBlacklistedTools // (Final|Native|Public|BlueprintCallable) // @ game+0x5e26040
	struct ATool* ClearActiveTool(); // Function Toolset.ToolSetComponent.ClearActiveTool // (Final|Native|Public|BlueprintCallable) // @ game+0x5e25f20
	void AsyncLoadToolByName(struct FName Name); // Function Toolset.ToolSetComponent.AsyncLoadToolByName // (Native|Public|BlueprintCallable) // @ game+0x5e25e90
	struct ATool* ActivateToolByName(struct FName Name); // Function Toolset.ToolSetComponent.ActivateToolByName // (Final|Native|Public|BlueprintCallable) // @ game+0x5e25d20
	struct ATool* ActivateTool(struct UToolRecord* ToolRecord); // Function Toolset.ToolSetComponent.ActivateTool // (Final|Native|Public|BlueprintCallable) // @ game+0x5e25c80
	struct ATool* ActivateExistingTool(struct ATool* Tool); // Function Toolset.ToolSetComponent.ActivateExistingTool // (Final|Native|Public|BlueprintCallable) // @ game+0x5e25be0
};

// Class Toolset.ToolType
// Size: 0xd0 (Inherited: 0xc8)
struct UToolType : UActorComponent {
	float m_autoEquipTimeout; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class Toolset.TriggerEffect
// Size: 0x48 (Inherited: 0x28)
struct UTriggerEffect : UObject {
	enum class TriggerModeEnum TriggerMode; // 0x28(0x01)
	bool RightTrigger; // 0x29(0x01)
	bool LeftTrigger; // 0x2a(0x01)
	char WeaponStartPosition; // 0x2b(0x01)
	char WeaponEndPosition; // 0x2c(0x01)
	char WeaponStrength; // 0x2d(0x01)
	char VibrationPosition; // 0x2e(0x01)
	char VibrationFrequency; // 0x2f(0x01)
	char VibrationAmplitude; // 0x30(0x01)
	char FeedbackPosition; // 0x31(0x01)
	char FeedbackStrength; // 0x32(0x01)
	char pad_33[0x15]; // 0x33(0x15)

	void MarkForUpdate(); // Function Toolset.TriggerEffect.MarkForUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x5e26610
};

// Class Toolset.TriggerEffectManager
// Size: 0x48 (Inherited: 0x28)
struct UTriggerEffectManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UTriggerEffect* InactiveTriggerEffect; // 0x30(0x08)
	struct TArray<struct UTriggerEffect*> TriggerEffectStack; // 0x38(0x10)

	void ResumeTriggerEffects(); // Function Toolset.TriggerEffectManager.ResumeTriggerEffects // (Final|Native|Public|BlueprintCallable) // @ game+0x5e26700
	void PauseTriggerEffects(); // Function Toolset.TriggerEffectManager.PauseTriggerEffects // (Final|Native|Public|BlueprintCallable) // @ game+0x5e26630
	void DeactivateTriggerEffect(struct UTriggerEffect* TriggerEffect, int32_t ControllerId); // Function Toolset.TriggerEffectManager.DeactivateTriggerEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x5e25f50
	void ActivateTriggerEffect(struct UTriggerEffect* TriggerEffect, int32_t ControllerId); // Function Toolset.TriggerEffectManager.ActivateTriggerEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x5e25dc0
};

