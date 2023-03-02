// UserDefinedStruct STR_LightParameterStruct.STR_LightParameterStruct
// Size: 0x38 (Inherited: 0x00)
struct FSTR_LightParameterStruct {
	float Intensity_49_AB60A6B841DF349700F2B0AAC1235C8C; // 0x00(0x04)
	struct FLinearColor LightColor_54_EE041A6E4566945E2708129DE921A19A; // 0x04(0x10)
	float Attenuationradius_48_B64051AE420825D8E8F37D96E19182EA; // 0x14(0x04)
	bool Usecolourtemperature_30_8C94C1E34AFE0F11324C3AA3531F1183; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ColorTemperature_27_2181636A49CAB5785CB18EBFD41CE7D8; // 0x1c(0x04)
	float Indirectlightintensity_53_83B5257A445B605A53E74E808CE343B8; // 0x20(0x04)
	bool CastDynamicShadow_57_1A2F56654EADC88D63177BA978F21F5C; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct UMaterialInstance* Lightfunction_45_A11A55CD43C585CB460C75A8B5BAB9A0; // 0x28(0x08)
	struct UTextureLightProfile* IESTexture_60_65D779B84BDD0F5D39E2B1AFEE0DC7A3; // 0x30(0x08)
};

