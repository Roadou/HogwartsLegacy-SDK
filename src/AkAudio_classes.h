// Class AkAudio.AkPortalComponent
// Size: 0x2e0 (Inherited: 0x220)
struct UAkPortalComponent : USceneComponent {
	bool bDynamic; // 0x218(0x01)
	enum class AkAcousticPortalState InitialState; // 0x219(0x01)
	float ObstructionRefreshInterval; // 0x21c(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x220(0x01)
	char pad_227[0xb9]; // 0x227(0xb9)

	bool PortalPlacementValid(); // Function AkAudio.AkPortalComponent.PortalPlacementValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1036350
	void OpenPortal(); // Function AkAudio.AkPortalComponent.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1036330
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkPortalComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035f90
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkPortalComponent.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035ea0
	void ClosePortal(); // Function AkAudio.AkPortalComponent.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1035d60
};

// Class AkAudio.AkAcousticPortal
// Size: 0x290 (Inherited: 0x280)
struct AAkAcousticPortal : AVolume {
	struct UAkPortalComponent* Portal; // 0x280(0x08)
	enum class AkAcousticPortalState InitialState; // 0x288(0x01)
	bool bRequiresStateMigration; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1036310
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035e70
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1035d40
};

// Class AkAudio.AkAudioType
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioType : UObject {
	uint32_t ShortID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
};

// Class AkAudio.AkAcousticTexture
// Size: 0x40 (Inherited: 0x40)
struct UAkAcousticTexture : UAkAudioType {
};

// Class AkAudio.AkAcousticTextureSetComponent
// Size: 0x230 (Inherited: 0x220)
struct UAkAcousticTextureSetComponent : USceneComponent {
	char pad_220[0x10]; // 0x220(0x10)
};

// Class AkAudio.AkAmbientSound
// Size: 0x288 (Inherited: 0x248)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x248(0x08)
	struct UAkComponent* AkComponent; // 0x250(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x258(0x01)
	bool AutoPost; // 0x259(0x01)
	char pad_25A[0x2e]; // 0x25a(0x2e)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1037720
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1037700
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x10360a0
};

// Class AkAudio.AkPlatformInfo
// Size: 0x70 (Inherited: 0x28)
struct UAkPlatformInfo : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAssetBase
// Size: 0x50 (Inherited: 0x40)
struct UAkAssetBase : UAkAudioType {
	struct UAkAssetPlatformData* PlatformAssetData; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class AkAudio.AkAssetData
// Size: 0x78 (Inherited: 0x28)
struct UAkAssetData : UObject {
	uint32_t CachedHash; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString BankLanguage; // 0x30(0x10)
	char pad_40[0x38]; // 0x40(0x38)
};

// Class AkAudio.AkAssetDataWithMedia
// Size: 0x88 (Inherited: 0x78)
struct UAkAssetDataWithMedia : UAkAssetData {
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x78(0x10)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x30 (Inherited: 0x28)
struct UAkAssetPlatformData : UObject {
	struct UAkAssetData* CurrentAssetData; // 0x28(0x08)
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x78 (Inherited: 0x28)
struct UAkAssetDataSwitchContainerData : UObject {
	struct TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28(0x28)
	struct UAkGroupValue* DefaultGroupValue; // 0x50(0x08)
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x58(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x68(0x10)
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0xf0 (Inherited: 0x88)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia {
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x88(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0x98(0x08)
	char pad_A0[0x50]; // 0xa0(0x50)
};

// Class AkAudio.AkAudioEventData
// Size: 0x290 (Inherited: 0xf0)
struct UAkAudioEventData : UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0xf0(0x04)
	bool IsInfinite; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float MinimumDuration; // 0xf8(0x04)
	float MaximumDuration; // 0xfc(0x04)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0x100(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0x150(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x1a0(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x1f0(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x240(0x50)
};

// Class AkAudio.AkAudioBank
// Size: 0x120 (Inherited: 0x50)
struct UAkAudioBank : UAkAssetBase {
	bool AutoLoad; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<struct FString, struct UAkAssetPlatformData*> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xa8(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xf8(0x08)
	char pad_100[0x20]; // 0x100(0x20)
};

// Class AkAudio.AkAudioEvent
// Size: 0xd0 (Inherited: 0x50)
struct UAkAudioEvent : UAkAssetBase {
	struct TMap<struct FString, struct UAkAssetPlatformData*> LocalizedPlatformAssetDataMap; // 0x50(0x50)
	struct UAkAudioBank* RequiredBank; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb0(0x08)
	float MaxAttenuationRadius; // 0xb8(0x04)
	bool IsInfinite; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float MinimumDuration; // 0xc0(0x04)
	float MaximumDuration; // 0xc4(0x04)
	char pad_C8[0x8]; // 0xc8(0x08)

	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035f60
	float GetMaximumDuration(); // Function AkAudio.AkAudioEvent.GetMaximumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035f30
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035f00
	bool GetIsInfinite(); // Function AkAudio.AkAudioEvent.GetIsInfinite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035ed0
};

// Class AkAudio.AkGameObject
// Size: 0x240 (Inherited: 0x220)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x218(0x08)
	struct FString EventName; // 0x220(0x10)
	char pad_238[0x8]; // 0x238(0x08)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x103db30
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkGameObject.SetRTPCValue // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const) // @ game+0x103cfb0
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x103b1e0
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x103b040
	int32_t PostAkEventWithStartTime(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName, float StartTime); // Function AkAudio.AkGameObject.PostAkEventWithStartTime // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x103a8d0
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x103a610
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x103a3e0
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkGameObject.GetRTPCValue // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1039950
};

// Class AkAudio.AkComponent
// Size: 0x620 (Inherited: 0x240)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	char EnableSpotReflectors : 1; // 0x24c(0x01)
	char pad_24C_1 : 7; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	float OuterRadius; // 0x250(0x04)
	float InnerRadius; // 0x254(0x04)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x258(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x260(0x10)
	int32_t EarlyReflectionOrder; // 0x270(0x04)
	float EarlyReflectionBusSendGain; // 0x274(0x04)
	float EarlyReflectionMaxPathLength; // 0x278(0x04)
	float roomReverbAuxBusGain; // 0x27c(0x04)
	int32_t diffractionMaxEdges; // 0x280(0x04)
	int32_t diffractionMaxPaths; // 0x284(0x04)
	float diffractionMaxPathLength; // 0x288(0x04)
	char DrawFirstOrderReflections : 1; // 0x28c(0x01)
	char DrawSecondOrderReflections : 1; // 0x28c(0x01)
	char DrawHigherOrderReflections : 1; // 0x28c(0x01)
	char DrawDiffraction : 1; // 0x28c(0x01)
	char pad_28C_4 : 4; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	bool StopWhenOwnerDestroyed; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float AttenuationScalingFactor; // 0x294(0x04)
	float OcclusionRefreshInterval; // 0x298(0x04)
	char pad_29C[0x8c]; // 0x29c(0x8c)
	int32_t OcclusionSecondaryTracePoints; // 0x328(0x04)
	bool bSkipOcclusionCalculation; // 0x32c(0x01)
	bool bSpawnedByAnimNotify; // 0x32d(0x01)
	bool bUseReverbVolumes; // 0x32e(0x01)
	char pad_32F[0x79]; // 0x32f(0x79)
	bool bComputeDoppler; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct FMasterTickThrottlerSettings TickThrottlerSettings; // 0x3b0(0x28)
	char pad_3D8[0x248]; // 0x3d8(0x248)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1037930
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (Final|Native|Public|BlueprintCallable) // @ game+0x1037740
	void SetWantsOnUpdateTransform(bool bInWantsOnUpdateTranform); // Function AkAudio.AkComponent.SetWantsOnUpdateTransform // (Final|Native|Public|BlueprintCallable) // @ game+0x1037670
	void SetSwitchPropagating(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitchPropagating // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x10374c0
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1037310
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1037280
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1037200
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1037150
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius); // Function AkAudio.AkComponent.SetGameObjectRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x1036ff0
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1036f70
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1036ed0
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1036dd0
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1036b60
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1036990
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1036820
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1036770
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10365a0
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10363b0
	void OcclusionRefreshStackSetDefault(float RefreshInterval); // Function AkAudio.AkComponent.OcclusionRefreshStackSetDefault // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1036290
	void OcclusionRefreshStackRemove(int32_t StackHandle); // Function AkAudio.AkComponent.OcclusionRefreshStackRemove // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1036200
	int32_t OcclusionRefreshStackAdd(float RefreshInterval, int32_t Priority); // Function AkAudio.AkComponent.OcclusionRefreshStackAdd // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1036130
	void MasterTickThrottlerSetNoTickRadius(float NoTickRadiusMeters); // Function AkAudio.AkComponent.MasterTickThrottlerSetNoTickRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x1036020
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035e10
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x650 (Inherited: 0x620)
struct UAkAudioInputComponent : UAkComponent {
	char pad_620[0x30]; // 0x620(0x30)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1036b30
};

// Class AkAudio.AkAuxBus
// Size: 0x58 (Inherited: 0x50)
struct UAkAuxBus : UAkAssetBase {
	struct UAkAudioBank* RequiredBank; // 0x50(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xad0 (Inherited: 0x120)
struct UAkCheckBox : UContentWidget {
	char pad_120[0x340]; // 0x120(0x340)
	enum class ECheckBoxState CheckedState; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	struct FDelegate CheckedStateDelegate; // 0x464(0x10)
	char pad_474[0x4]; // 0x474(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x478(0x580)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x9f8(0x01)
	bool IsFocusable; // 0x9f9(0x01)
	char pad_9FA[0x6]; // 0x9fa(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xa00(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xa10(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xa50(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xa60(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xa70(0x10)
	char pad_A80[0x50]; // 0xa80(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x10370c0
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x1036e50
	void SetAkItemId(struct FGuid& ItemId); // Function AkAudio.AkCheckBox.SetAkItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1036d30
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x1036c90
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035ff0
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035fc0
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035e40
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035dc0
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1035d80
};

// Class AkAudio.DrawPortalComponent
// Size: 0x480 (Inherited: 0x480)
struct UDrawPortalComponent : UPrimitiveComponent {
};

// Class AkAudio.DrawRoomComponent
// Size: 0x480 (Inherited: 0x480)
struct UDrawRoomComponent : UPrimitiveComponent {
};

// Class AkAudio.AkFolder
// Size: 0xb8 (Inherited: 0x40)
struct UAkFolder : UAkAudioType {
	struct FString UnrealFolderPath; // 0x40(0x10)
	struct FString WwiseFolderPath; // 0x50(0x10)
	char pad_60[0x58]; // 0x60(0x58)
};

// Class AkAudio.AkGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103e1b0
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103df90
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103df00
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103de20
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.UnloadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103dcb0
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103dc90
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103dc70
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103dbf0
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103dbd0
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103db50
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103daa0
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103da10
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103d990
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x103d750
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103d600
	void SetState(struct UAkStateValue* StateValue, struct FName stateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103d500
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103d3b0
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103d160
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths); // Function AkAudio.AkGameplayStatics.SetReflectionsOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103d2f0
	void SetPortalToPortalObstruction(struct UAkPortalComponent* PortalComponent0, struct UAkPortalComponent* PortalComponent1, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103cea0
	void SetPortalObstructionAndOcclusion(struct UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103cda0
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103cd30
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103cc70
	void SetOcclusionScalingFactor(float ScalingFactor); // Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103cbf0
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103cb30
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103c9d0
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103c7f0
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103c610
	void SetGameObjectToPortalObstruction(struct UAkComponent* GameObjectAkComponent, struct UAkPortalComponent* PortalComponent, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103c500
	void SetDefaultOcclusionRefreshInterval(struct AActor* Actor, float RefreshInterval); // Function AkAudio.AkGameplayStatics.SetDefaultOcclusionRefreshInterval // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103c440
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103c350
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103c200
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x103c130
	void ResetRTPCValue(struct UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.ResetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103bff0
	void ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings); // Function AkAudio.AkGameplayStatics.ReplaceMainOutput // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103bf50
	void RemoveOcclusionRefreshFromStack(struct AActor* Actor, int32_t StackHandle); // Function AkAudio.AkGameplayStatics.RemoveOcclusionRefreshFromStack // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103be90
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger); // Function AkAudio.AkGameplayStatics.PostTrigger // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103bd90
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103bc70
	int32_t PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventAttached // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103ba80
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x103b910
	int32_t PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x103b750
	int32_t PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103b460
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103ade0
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103ab40
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103a3c0
	void LoadBanks(struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks); // Function AkAudio.AkGameplayStatics.LoadBanks // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103a2d0
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x103a240
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x103a160
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.LoadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1039ff0
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1039f60
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1039f30
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1039dd0
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1039ba0
	float GetOcclusionScalingFactor(); // Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1039920
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10398a0
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10397c0
	struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10396f0
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1039550
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1039480
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1039340
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1039170
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1039150
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10390b0
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1039020
	int32_t AddOcclusionRefreshToStack(struct AActor* Actor, float RefreshInterval, int32_t Priority); // Function AkAudio.AkGameplayStatics.AddOcclusionRefreshToStack // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1038f10
};

// Class AkAudio.AkCallbackInfo
// Size: 0x30 (Inherited: 0x28)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x28(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	int32_t EventID; // 0x34(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48 (Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_38[0x10]; // 0x38(0x10)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // @ game+0x1043170
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10430c0
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1043010
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1042f60
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1042eb0
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1042e00
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1042d50
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1042ca0
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x1042c70
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1042bc0
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x38(0x04)
	int32_t Position; // 0x3c(0x04)
	struct FString Label; // 0x40(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x38(0x04)
	float EstimatedDuration; // 0x3c(0x04)
	int32_t AudioNodeID; // 0x40(0x04)
	int32_t MediaID; // 0x44(0x04)
	bool bStreaming; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString UserCueName; // 0x60(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x3c0 (Inherited: 0x230)
struct UAkGeometryComponent : UAkAcousticTextureSetComponent {
	enum class AkMeshType MeshType; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	int32_t LOD; // 0x234(0x04)
	float WeldingThreshold; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x240(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x290(0x18)
	char bEnableDiffraction : 1; // 0x2a8(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x2a8(0x01)
	char pad_2A8_2 : 6; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct AActor* AssociatedRoom; // 0x2b0(0x08)
	char pad_2B8[0x10]; // 0x2b8(0x10)
	struct FAkGeometryData GeometryData; // 0x2c8(0x50)
	struct TMap<int32_t, double> SurfaceAreas; // 0x318(0x50)
	char pad_368[0x58]; // 0x368(0x58)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x10431e0
	void SendGeometry(); // Function AkAudio.AkGeometryComponent.SendGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x10431c0
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x10431a0
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1042ba0
};

// Class AkAudio.AkGroupValue
// Size: 0x68 (Inherited: 0x40)
struct UAkGroupValue : UAkAudioType {
	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaDependencies; // 0x40(0x10)
	uint32_t GroupShortID; // 0x50(0x04)
	char pad_54[0x14]; // 0x54(0x14)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkHololensInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x34)
	char pad_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x10360a0
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBankAssetData
// Size: 0x98 (Inherited: 0x88)
struct UAkInitBankAssetData : UAkAssetDataWithMedia {
	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x88(0x10)
};

// Class AkAudio.AkInitBank
// Size: 0x70 (Inherited: 0x50)
struct UAkInitBank : UAkAssetBase {
	struct TArray<struct FString> AvailableAudioCultures; // 0x50(0x10)
	struct FString DefaultLanguage; // 0x60(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x2c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1047560
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1047470
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x148 (Inherited: 0x108)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1047c50
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10477a0
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1047720
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1047560
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1047470
};

// Class AkAudio.AkItemProperties
// Size: 0x148 (Inherited: 0x108)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1047c50
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1047820
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1047720
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x2c0 (Inherited: 0x220)
struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x218(0x01)
	float SendLevel; // 0x21c(0x04)
	float FadeRate; // 0x220(0x04)
	float Priority; // 0x224(0x04)
	bool AutoAssignAuxBus; // 0x228(0x01)
	char pad_22D_1 : 7; // 0x22d(0x01)
	char pad_22E[0x2]; // 0x22e(0x02)
	struct UAkAuxBus* AuxBus; // 0x230(0x08)
	struct FString AuxBusName; // 0x238(0x10)
	char pad_248[0x8]; // 0x248(0x08)
	struct UAkAuxBus* AuxBusManual; // 0x250(0x08)
	char pad_258[0x3e]; // 0x258(0x3e)
	bool bIsSimpleBox; // 0x296(0x01)
	char pad_297[0x29]; // 0x297(0x29)

	void AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x10473e0
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x10360a0
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkMacInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x10360a0
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMediaAssetData
// Size: 0x78 (Inherited: 0x28)
struct UAkMediaAssetData : UObject {
	bool IsStreamed; // 0x28(0x01)
	bool UseDeviceMemory; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FString Language; // 0x30(0x10)
	struct FString AssetPlatform; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)
};

// Class AkAudio.AkMediaAsset
// Size: 0x78 (Inherited: 0x28)
struct UAkMediaAsset : UObject {
	uint32_t ID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString MediaName; // 0x30(0x10)
	bool AutoLoad; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UObject*> UserData; // 0x48(0x10)
	struct FString Language; // 0x58(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x78 (Inherited: 0x78)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0xd8 (Inherited: 0x78)
struct UAkExternalMediaAsset : UAkMediaAsset {
	char pad_78[0x60]; // 0x78(0x60)
};

// Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UAkPlatformInitialisationSettingsBase : UInterface {
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkPS4InitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x10478d0
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkPS5InitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkPS5InitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkPS5AdvancedInitializationSettings AdvancedSettings; // 0xb8(0x34)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class AkAudio.AkDPXInitializationSettings
// Size: 0xf0 (Inherited: 0xf0)
struct UAkDPXInitializationSettings : UAkPS5InitializationSettings {
};

// Class AkAudio.AkPS5PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkPS5PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size: 0x2b8 (Inherited: 0x280)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x280(0x01)
	char pad_280_1 : 7; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct UAkAuxBus* AuxBus; // 0x288(0x08)
	struct FString AuxBusName; // 0x290(0x10)
	float SendLevel; // 0x2a0(0x04)
	float FadeRate; // 0x2a4(0x04)
	float Priority; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x2b0(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x290 (Inherited: 0x240)
struct UAkRoomComponent : UAkGameObject {
	char bEnable : 1; // 0x238(0x01)
	bool bDynamic; // 0x23c(0x01)
	float Priority; // 0x240(0x04)
	float WallOcclusion; // 0x244(0x04)
	float AuxSendLevel; // 0x248(0x04)
	bool AutoPost; // 0x24c(0x01)
	bool bIsSimpleBox; // 0x24d(0x01)
	char pad_24F_1 : 7; // 0x24f(0x01)
	char pad_250[0x28]; // 0x250(0x28)
	struct UAkAcousticTextureSetComponent* GeometryComponent; // 0x278(0x08)
	char pad_280[0x10]; // 0x280(0x10)

	void SetGeometryComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkRoomComponent.SetGeometryComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1047aa0
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkRoomComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10476f0
};

// Class AkAudio.AkRtpc
// Size: 0x40 (Inherited: 0x40)
struct UAkRtpc : UAkAudioType {
};

// Class AkAudio.AkSettings
// Size: 0x2e0 (Inherited: 0x28)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x40(0x10)
	bool bAutoConnectToWAAPI; // 0x50(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51(0x01)
	enum class ECollisionChannel DefaultFitToGeometryCollisionChannel; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58(0x50)
	float GlobalDecayAbsorption; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus; // 0xb0(0x28)
	struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap; // 0xd8(0x50)
	struct FString HFDampingName; // 0x128(0x10)
	struct FString DecayEstimateName; // 0x138(0x10)
	struct FString TimeToFirstReflectionName; // 0x148(0x10)
	struct TSoftObjectPtr<UAkRtpc> HFDampingRTPC; // 0x158(0x28)
	struct TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC; // 0x180(0x28)
	struct TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC; // 0x1a8(0x28)
	struct TSoftObjectPtr<UAkAudioEvent> AudioInputEvent; // 0x1d0(0x28)
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap; // 0x1f8(0x50)
	bool SplitSwitchContainerMedia; // 0x248(0x01)
	bool SplitMediaPerFolder; // 0x249(0x01)
	bool UseEventBasedPackaging; // 0x24a(0x01)
	bool EnableAutomaticAssetSynchronization; // 0x24b(0x01)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct FString CommandletCommitMessage; // 0x250(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0x260(0x50)
	bool AskedToUseNewAssetManagement; // 0x2b0(0x01)
	bool bEnableMultiCoreRendering; // 0x2b1(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x2b2(0x01)
	bool FixupRedirectorsDuringMigration; // 0x2b3(0x01)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x2b8(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x2c8(0x10)
	char pad_2D8[0x8]; // 0x2d8(0x08)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x80 (Inherited: 0x28)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x04)
	bool bAutoConnectToWAAPI; // 0x64(0x01)
	bool AutoSyncSelection; // 0x65(0x01)
	bool SuppressWwiseProjectPathWarnings; // 0x66(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x67(0x01)
	char pad_68[0x18]; // 0x68(0x18)
};

// Class AkAudio.AkSlider
// Size: 0x530 (Inherited: 0x108)
struct UAkSlider : UWidget {
	float Value; // 0x108(0x04)
	struct FDelegate ValueDelegate; // 0x10c(0x10)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FSliderStyle WidgetStyle; // 0x120(0x340)
	enum class EOrientation Orientation; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	struct FLinearColor SliderBarColor; // 0x464(0x10)
	struct FLinearColor SliderHandleColor; // 0x474(0x10)
	bool IndentHandle; // 0x484(0x01)
	bool Locked; // 0x485(0x01)
	char pad_486[0x2]; // 0x486(0x02)
	float StepSize; // 0x488(0x04)
	bool IsFocusable; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x490(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x4a0(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x500(0x10)
	char pad_510[0x20]; // 0x510(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1047e90
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1047e10
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1047d80
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1047cf0
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x1047bc0
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x1047b30
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x1047a00
	void SetAkSliderItemId(struct FGuid& ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1047960
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10478a0
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10476a0
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1047660
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x298 (Inherited: 0x280)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x280(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x288(0x08)
	struct UAkRoomComponent* Room; // 0x290(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x270 (Inherited: 0x248)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x248(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x250(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x260(0x08)
	float DistanceScalingFactor; // 0x268(0x04)
	float Level; // 0x26c(0x04)
};

// Class AkAudio.AkStateValue
// Size: 0x68 (Inherited: 0x68)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSubmixInputComponent
// Size: 0x6a0 (Inherited: 0x650)
struct UAkSubmixInputComponent : UAkAudioInputComponent {
	struct USoundSubmix* SubmixToRecord; // 0x650(0x08)
	char pad_658[0x48]; // 0x658(0x48)
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x260 (Inherited: 0x230)
struct UAkSurfaceReflectorSetComponent : UAkAcousticTextureSetComponent {
	char bEnableSurfaceReflectors : 1; // 0x230(0x01)
	char pad_230_1 : 7; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct TArray<struct FAkSurfacePoly> AcousticPolys; // 0x238(0x10)
	char bEnableDiffraction : 1; // 0x248(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x248(0x01)
	char pad_248_2 : 6; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct AActor* AssociatedRoom; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x104dba0
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x104cac0
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x10431a0
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkSwitchInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x30)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x10360a0
};

// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkSwitchPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkSwitchValue
// Size: 0x68 (Inherited: 0x68)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size: 0x40 (Inherited: 0x40)
struct UAkTrigger : UAkAudioType {
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkTVOSInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x2c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104da80
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104d810
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104d740
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104ca10
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104c960
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104c8d0
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104bcf0
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x104bc20
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104b7e0
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28 (Inherited: 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1047560
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1047470
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104d560
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104d2a0
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104d0d0
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104cf00
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104cd00
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104cae0
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104c740
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104c420
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104c2d0
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104c180
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104c030
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x104bde0
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x104baf0
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x104b9e0
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1047560
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1047470
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x10360a0
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size: 0x148 (Inherited: 0x108)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x104d4c0
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104c620
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x104c5a0
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x168 (Inherited: 0x108)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x118(0x10)
	char pad_128[0x40]; // 0x128(0x40)
};

// Class AkAudio.AkXboxOneGDKInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXboxOneGDKInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x34)
	char pad_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x10360a0
};

// Class AkAudio.AkXboxOneAnvilInitializationSettings
// Size: 0xf8 (Inherited: 0xf8)
struct UAkXboxOneAnvilInitializationSettings : UAkXboxOneGDKInitializationSettings {
};

// Class AkAudio.AkXB1InitializationSettings
// Size: 0xf8 (Inherited: 0xf8)
struct UAkXB1InitializationSettings : UAkXboxOneGDKInitializationSettings {
};

// Class AkAudio.AkXboxOneGDKPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOneGDKPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkXboxOneAnvilPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOneAnvilPlatformInfo : UAkXboxOneGDKPlatformInfo {
};

// Class AkAudio.AkXB1PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXB1PlatformInfo : UAkXboxOneGDKPlatformInfo {
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXboxOneInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x34)
	char pad_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x10360a0
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkXSXInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXSXInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x10360a0
};

// Class AkAudio.AkMPXInitializationSettings
// Size: 0xf8 (Inherited: 0xf8)
struct UAkMPXInitializationSettings : UAkXSXInitializationSettings {
};

// Class AkAudio.AkXSXPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXSXPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AvaAudioCachedRTPC
// Size: 0x28 (Inherited: 0x28)
struct UAvaAudioCachedRTPC : UBlueprintFunctionLibrary {

	void AvaAudioSetGlobalState(struct FName StateName, struct FName StateValue, bool& bSuccess, bool bForce); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioSetGlobalState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1051d10
	void AvaAudioSetGlobalRTPC(struct FName RTPCName, float RTPCValue, bool& bSuccess, int32_t InterpolationTimeMilliseconds, float Threshold, bool bForce, bool bHoldMax); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioSetGlobalRTPC // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1051ae0
	void AvaAudioSetGameObjectRTPC(struct UAkGameObject* AudioObject, struct FName RTPCName, float RTPCValue, bool& bSuccess, int32_t InterpolationTimeMilliseconds, float Threshold, bool bForce); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioSetGameObjectRTPC // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10518c0
	void AvaAudioSetActorRTPC(struct AActor* Actor, struct FName RTPCName, float RTPCValue, bool& bSuccess, int32_t InterpolationTimeMilliseconds, float Threshold, bool bForce); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioSetActorRTPC // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10516a0
	void AvaAudioResetGlobalState(struct FName StateName); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioResetGlobalState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1051620
	void AvaAudioResetGlobalRTPC(struct FName RTPCName); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioResetGlobalRTPC // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10515a0
	void AvaAudioResetGameObjectRTPC(struct UAkGameObject* AudioObject, struct FName RTPCName); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioResetGameObjectRTPC // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10514e0
	void AvaAudioResetActorRTPC(struct AActor* Actor, struct FName RTPCName); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioResetActorRTPC // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10514e0
	void AvaAudioGetGlobalState(struct FName StateName, bool& bSuccess, struct FName& StateValue); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioGetGlobalState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10513c0
	void AvaAudioGetGlobalRTPC(struct FName RTPCName, bool& bSuccess, float& RTPCValue); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioGetGlobalRTPC // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1051290
	void AvaAudioGetGameObjectRTPC(struct UAkGameObject* AudioObject, struct FName RTPCName, bool& bSuccess, float& RTPCValue); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioGetGameObjectRTPC // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1051120
	void AvaAudioGetActorRTPC(struct AActor* Actor, struct FName RTPCName, bool& bSuccess, float& RTPCValue); // Function AkAudio.AvaAudioCachedRTPC.AvaAudioGetActorRTPC // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1051120
};

// Class AkAudio.AvaAudioDialogueEvent
// Size: 0x28 (Inherited: 0x28)
struct UAvaAudioDialogueEvent : UObject {
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1d0 (Inherited: 0xe8)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	char pad_E8[0x40]; // 0xe8(0x40)
	struct UAkAudioEvent* Event; // 0x128(0x08)
	bool RetriggerEvent; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32_t ScrubTailLengthMs; // 0x134(0x04)
	bool StopAtSectionEnd; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FString EventName; // 0x140(0x10)
	char pad_150[0x20]; // 0x150(0x20)
	float MaxSourceDuration; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FString MaxDurationSourceID; // 0x178(0x10)
	char pad_188[0x48]; // 0x188(0x48)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
	char bIsAMasterTrack : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x250 (Inherited: 0xe8)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xe8(0x08)
	struct FString Name; // 0xf0(0x10)
	struct FRichCurve FloatCurve; // 0x100(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x180(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1b0(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class AkAudio.PostEventAsync
// Size: 0xa0 (Inherited: 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char pad_40[0x60]; // 0x40(0x60)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1051eb0
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x1051e70
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x80 (Inherited: 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char pad_40[0x40]; // 0x40(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1052140
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x1051e90
};

