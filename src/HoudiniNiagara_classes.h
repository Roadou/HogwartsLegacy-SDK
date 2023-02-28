// Class HoudiniNiagara.HoudiniPointCache
// Size: 0xe8 (Inherited: 0x28)
struct UHoudiniPointCache : UObject {
	struct FString Filename; // 0x28(0x10)
	int32_t NumberOfSamples; // 0x38(0x04)
	int32_t NumberOfAttributes; // 0x3c(0x04)
	int32_t NumberOfPoints; // 0x40(0x04)
	int32_t NumberOfFrames; // 0x44(0x04)
	float FirstFrame; // 0x48(0x04)
	float LastFrame; // 0x4c(0x04)
	float MinSampleTime; // 0x50(0x04)
	float MaxSampleTime; // 0x54(0x04)
	struct FString SourceCSVTitleRow; // 0x58(0x10)
	struct TArray<struct FString> AttributeArray; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<float> FloatSampleData; // 0x80(0x10)
	struct TArray<float> SpawnTimes; // 0x90(0x10)
	struct TArray<float> LifeValues; // 0xa0(0x10)
	struct TArray<int32_t> PointTypes; // 0xb0(0x10)
	struct TArray<int32_t> SpecialAttributeIndexes; // 0xc0(0x10)
	struct TArray<struct FPointIndexes> PointValueIndexes; // 0xd0(0x10)
	bool UseCustomCSVTitleRow; // 0xe0(0x01)
	enum class EHoudiniPointCacheFileType FileType; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)

	void SetUseCustomCSVTitleRow(bool bInUseCustomCSVTitleRow); // Function HoudiniNiagara.HoudiniPointCache.SetUseCustomCSVTitleRow // (Final|Native|Public|BlueprintCallable) // @ game+0x2089f60
	bool GetVelocityValue(int32_t& SampleIndex, struct FVector& Value); // Function HoudiniNiagara.HoudiniPointCache.GetVelocityValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2089e70
	bool GetVectorValueForString(int32_t& SampleIndex, struct FString Attribute, struct FVector& Value, bool& DoSwap, bool& DoScale); // Function HoudiniNiagara.HoudiniPointCache.GetVectorValueForString // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2089c70
	bool GetVectorValue(int32_t& SampleIndex, int32_t& attrIndex, struct FVector& Value, bool& DoSwap, bool& DoScale); // Function HoudiniNiagara.HoudiniPointCache.GetVectorValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2089a60
	bool GetVector4ValueForString(int32_t& SampleIndex, struct FString Attribute, struct FVector4& Value); // Function HoudiniNiagara.HoudiniPointCache.GetVector4ValueForString // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2089910
	bool GetVector4Value(int32_t& SampleIndex, int32_t& attrIndex, struct FVector4& Value); // Function HoudiniNiagara.HoudiniPointCache.GetVector4Value // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x20897d0
	bool GetUseCustomCSVTitleRow(); // Function HoudiniNiagara.HoudiniPointCache.GetUseCustomCSVTitleRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20897b0
	bool GetTimeValue(int32_t& SampleIndex, float& Value); // Function HoudiniNiagara.HoudiniPointCache.GetTimeValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x20896c0
	struct TArray<int32_t> GetSpecialAttributeIndexes(); // Function HoudiniNiagara.HoudiniPointCache.GetSpecialAttributeIndexes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2089690
	struct TArray<float> GetSpawnTimes(); // Function HoudiniNiagara.HoudiniPointCache.GetSpawnTimes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2089660
	bool GetSampleIndexesForPointAtTime(int32_t& POINTID, float& desiredTime, int32_t& PrevSampleIndex, int32_t& NextSampleIndex, float& PrevWeight); // Function HoudiniNiagara.HoudiniPointCache.GetSampleIndexesForPointAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2089450
	bool GetQuatValueForString(int32_t& SampleIndex, struct FString Attribute, struct FQuat& Value, bool& DoHoudiniToUnrealConversion); // Function HoudiniNiagara.HoudiniPointCache.GetQuatValueForString // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x20892a0
	bool GetQuatValue(int32_t& SampleIndex, int32_t& attrIndex, struct FQuat& Value, bool& DoHoudiniToUnrealConversion); // Function HoudiniNiagara.HoudiniPointCache.GetQuatValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x20890f0
	bool GetPositionValue(int32_t& SampleIndex, struct FVector& Value); // Function HoudiniNiagara.HoudiniPointCache.GetPositionValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2089000
	bool GetPointVectorValueAtTimeForString(int32_t POINTID, struct FString Attribute, float desiredTime, struct FVector& Vector, bool DoSwap, bool DoScale); // Function HoudiniNiagara.HoudiniPointCache.GetPointVectorValueAtTimeForString // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2088e00
	bool GetPointVectorValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, struct FVector& Vector, bool DoSwap, bool DoScale); // Function HoudiniNiagara.HoudiniPointCache.GetPointVectorValueAtTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2088be0
	bool GetPointVector4ValueAtTimeForString(int32_t POINTID, struct FString Attribute, float desiredTime, struct FVector4& Vector); // Function HoudiniNiagara.HoudiniPointCache.GetPointVector4ValueAtTimeForString // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2088a50
	bool GetPointVector4ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, struct FVector4& Vector); // Function HoudiniNiagara.HoudiniPointCache.GetPointVector4ValueAtTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x20888e0
	struct TArray<struct FPointIndexes> GetPointValueIndexes(); // Function HoudiniNiagara.HoudiniPointCache.GetPointValueIndexes // (Final|Native|Public|Const) // @ game+0x20887e0
	bool GetPointValueAtTimeForString(int32_t& POINTID, struct FString Attribute, float& desiredTime, float& Value); // Function HoudiniNiagara.HoudiniPointCache.GetPointValueAtTimeForString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2088630
	bool GetPointValueAtTime(int32_t& POINTID, int32_t& AttributeIndex, float& desiredTime, float& Value); // Function HoudiniNiagara.HoudiniPointCache.GetPointValueAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2088480
	struct TArray<int32_t> GetPointTypes(); // Function HoudiniNiagara.HoudiniPointCache.GetPointTypes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2088450
	bool GetPointType(int32_t& POINTID, int32_t& Value); // Function HoudiniNiagara.HoudiniPointCache.GetPointType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2088360
	bool GetPointQuatValueAtTimeForString(int32_t POINTID, struct FString Attribute, float desiredTime, struct FQuat& Quat, bool DoHoudiniToUnrealConversion); // Function HoudiniNiagara.HoudiniPointCache.GetPointQuatValueAtTimeForString // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2088180
	bool GetPointQuatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, struct FQuat& Quat, bool DoHoudiniToUnrealConversion); // Function HoudiniNiagara.HoudiniPointCache.GetPointQuatValueAtTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087fb0
	bool GetPointPositionAtTime(int32_t& POINTID, float& desiredTime, struct FVector& Vector); // Function HoudiniNiagara.HoudiniPointCache.GetPointPositionAtTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087e70
	bool GetPointLifeAtTime(int32_t& POINTID, float& desiredTime, float& Value); // Function HoudiniNiagara.HoudiniPointCache.GetPointLifeAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087d30
	bool GetPointLife(int32_t& POINTID, float& Value); // Function HoudiniNiagara.HoudiniPointCache.GetPointLife // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087c40
	bool GetPointInt32ValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, int32_t& Value); // Function HoudiniNiagara.HoudiniPointCache.GetPointInt32ValueAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087ae0
	bool GetPointIDsToSpawnAtTime(float& desiredTime, int32_t& MinID, int32_t& MaxID, int32_t& Count, int32_t& LastSpawnedPointID, float& LastSpawnTime, float& LastSpawnTimeRequest); // Function HoudiniNiagara.HoudiniPointCache.GetPointIDsToSpawnAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087860
	bool GetPointFloatValueAtTime(int32_t POINTID, int32_t AttributeIndex, float desiredTime, float& Value); // Function HoudiniNiagara.HoudiniPointCache.GetPointFloatValueAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087700
	int32_t GetNumberOfSamples(); // Function HoudiniNiagara.HoudiniPointCache.GetNumberOfSamples // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20876d0
	int32_t GetNumberOfPoints(); // Function HoudiniNiagara.HoudiniPointCache.GetNumberOfPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20876a0
	int32_t GetNumberOfAttributes(); // Function HoudiniNiagara.HoudiniPointCache.GetNumberOfAttributes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087670
	bool GetNormalValue(int32_t& SampleIndex, struct FVector& Value); // Function HoudiniNiagara.HoudiniPointCache.GetNormalValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087580
	struct TArray<float> GetLifeValues(); // Function HoudiniNiagara.HoudiniPointCache.GetLifeValues // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087550
	bool GetLastSampleIndexAtTime(float& desiredTime, int32_t& lastSampleIndex); // Function HoudiniNiagara.HoudiniPointCache.GetLastSampleIndexAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087460
	bool GetLastPointIDToSpawnAtTime(float& Time, int32_t& lastID); // Function HoudiniNiagara.HoudiniPointCache.GetLastPointIDToSpawnAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087370
	bool GetImpulseValue(int32_t& SampleIndex, float& Value); // Function HoudiniNiagara.HoudiniPointCache.GetImpulseValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087280
	bool GetFloatValueForString(int32_t& SampleIndex, struct FString Attribute, float& Value); // Function HoudiniNiagara.HoudiniPointCache.GetFloatValueForString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2087130
	bool GetFloatValue(int32_t& SampleIndex, int32_t& attrIndex, float& Value); // Function HoudiniNiagara.HoudiniPointCache.GetFloatValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2086ff0
	struct TArray<float> GetFloatSampleData(); // Function HoudiniNiagara.HoudiniPointCache.GetFloatSampleData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2086fc0
	bool GetColorValue(int32_t& SampleIndex, struct FLinearColor& Value); // Function HoudiniNiagara.HoudiniPointCache.GetColorValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2086ed0
	bool GetAttributeIndexInArrayFromString(struct FString InAttribute, struct TArray<struct FString>& InAttributeArray, int32_t& OutAttributeIndex); // Function HoudiniNiagara.HoudiniPointCache.GetAttributeIndexInArrayFromString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2086d50
	bool GetAttributeIndexFromString(struct FString Attribute, int32_t& AttributeIndex); // Function HoudiniNiagara.HoudiniPointCache.GetAttributeIndexFromString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2086c50
};

// Class HoudiniNiagara.NiagaraDataInterfaceHoudini
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceHoudini : UNiagaraDataInterface {
	struct UHoudiniPointCache* HoudiniPointCacheAsset; // 0x38(0x08)
};

