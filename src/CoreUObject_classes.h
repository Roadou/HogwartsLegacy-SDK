// Class CoreUObject.Object
// Size: 0x28 (Inherited: 0x00)
struct UObject {
	char pad_0[0x28]; // 0x00(0x28)

	void ExecuteUbergraph(int32_t EntryPoint); // Function CoreUObject.Object.ExecuteUbergraph // (Event|Public|BlueprintEvent) // @ game+0x38a7480
};

// Class CoreUObject.Interface
// Size: 0x28 (Inherited: 0x28)
struct UInterface : UObject {
};

// Class CoreUObject.Package
// Size: 0xa0 (Inherited: 0x28)
struct UPackage : UObject {
	char pad_28[0x78]; // 0x28(0x78)
};

// Class CoreUObject.Field
// Size: 0x30 (Inherited: 0x28)
struct UField : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class CoreUObject.Struct
// Size: 0xb0 (Inherited: 0x30)
struct UStruct : UField {
	char pad_30[0x80]; // 0x30(0x80)
};

// Class CoreUObject.Class
// Size: 0x230 (Inherited: 0xb0)
struct UClass : UStruct {
	char pad_B0[0x180]; // 0xb0(0x180)
};

// Class CoreUObject.GCObjectReferencer
// Size: 0x70 (Inherited: 0x28)
struct UGCObjectReferencer : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class CoreUObject.TextBuffer
// Size: 0x50 (Inherited: 0x28)
struct UTextBuffer : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class CoreUObject.ScriptStruct
// Size: 0xc0 (Inherited: 0xb0)
struct UScriptStruct : UStruct {
	char pad_B0[0x10]; // 0xb0(0x10)
};

// Class CoreUObject.Function
// Size: 0xe0 (Inherited: 0xb0)
struct UFunction : UStruct {
	char pad_B0[0x30]; // 0xb0(0x30)
};

// Class CoreUObject.DelegateFunction
// Size: 0xe0 (Inherited: 0xe0)
struct UDelegateFunction : UFunction {
};

// Class CoreUObject.SparseDelegateFunction
// Size: 0xf0 (Inherited: 0xe0)
struct USparseDelegateFunction : UDelegateFunction {
	char pad_E0[0x10]; // 0xe0(0x10)
};

// Class CoreUObject.DynamicClass
// Size: 0x2b0 (Inherited: 0x230)
struct UDynamicClass : UClass {
	char pad_230[0x80]; // 0x230(0x80)
};

// Class CoreUObject.PackageMap
// Size: 0xe0 (Inherited: 0x28)
struct UPackageMap : UObject {
	char pad_28[0xb8]; // 0x28(0xb8)
};

// Class CoreUObject.Enum
// Size: 0x60 (Inherited: 0x30)
struct UEnum : UField {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class CoreUObject.LinkerPlaceholderClass
// Size: 0x3e8 (Inherited: 0x230)
struct ULinkerPlaceholderClass : UClass {
	char pad_230[0x1b8]; // 0x230(0x1b8)
};

// Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xf0 (Inherited: 0x28)
struct ULinkerPlaceholderExportObject : UObject {
	char pad_28[0xc8]; // 0x28(0xc8)
};

// Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x298 (Inherited: 0xe0)
struct ULinkerPlaceholderFunction : UFunction {
	char pad_E0[0x1b8]; // 0xe0(0x1b8)
};

// Class CoreUObject.MetaData
// Size: 0xc8 (Inherited: 0x28)
struct UMetaData : UObject {
	char pad_28[0xa0]; // 0x28(0xa0)
};

// Class CoreUObject.ObjectRedirector
// Size: 0x30 (Inherited: 0x28)
struct UObjectRedirector : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class CoreUObject.Property
// Size: 0x70 (Inherited: 0x30)
struct UProperty : UField {
	char pad_30[0x40]; // 0x30(0x40)
};

// Class CoreUObject.EnumProperty
// Size: 0x80 (Inherited: 0x70)
struct UEnumProperty : UProperty {
	char pad_70[0x10]; // 0x70(0x10)
};

// Class CoreUObject.ArrayProperty
// Size: 0x78 (Inherited: 0x70)
struct UArrayProperty : UProperty {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.ObjectPropertyBase
// Size: 0x78 (Inherited: 0x70)
struct UObjectPropertyBase : UProperty {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.BoolProperty
// Size: 0x78 (Inherited: 0x70)
struct UBoolProperty : UProperty {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.NumericProperty
// Size: 0x70 (Inherited: 0x70)
struct UNumericProperty : UProperty {
};

// Class CoreUObject.ByteProperty
// Size: 0x78 (Inherited: 0x70)
struct UByteProperty : UNumericProperty {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.ObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct UObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.ClassProperty
// Size: 0x80 (Inherited: 0x78)
struct UClassProperty : UObjectProperty {
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.DelegateProperty
// Size: 0x78 (Inherited: 0x70)
struct UDelegateProperty : UProperty {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.DoubleProperty
// Size: 0x70 (Inherited: 0x70)
struct UDoubleProperty : UNumericProperty {
};

// Class CoreUObject.FloatProperty
// Size: 0x70 (Inherited: 0x70)
struct UFloatProperty : UNumericProperty {
};

// Class CoreUObject.IntProperty
// Size: 0x70 (Inherited: 0x70)
struct UIntProperty : UNumericProperty {
};

// Class CoreUObject.Int8Property
// Size: 0x70 (Inherited: 0x70)
struct UInt8Property : UNumericProperty {
};

// Class CoreUObject.Int16Property
// Size: 0x70 (Inherited: 0x70)
struct UInt16Property : UNumericProperty {
};

// Class CoreUObject.Int64Property
// Size: 0x70 (Inherited: 0x70)
struct UInt64Property : UNumericProperty {
};

// Class CoreUObject.InterfaceProperty
// Size: 0x78 (Inherited: 0x70)
struct UInterfaceProperty : UProperty {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.LazyObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct ULazyObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.MapProperty
// Size: 0x98 (Inherited: 0x70)
struct UMapProperty : UProperty {
	char pad_70[0x28]; // 0x70(0x28)
};

// Class CoreUObject.MulticastDelegateProperty
// Size: 0x78 (Inherited: 0x70)
struct UMulticastDelegateProperty : UProperty {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.MulticastInlineDelegateProperty
// Size: 0x78 (Inherited: 0x78)
struct UMulticastInlineDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.MulticastSparseDelegateProperty
// Size: 0x78 (Inherited: 0x78)
struct UMulticastSparseDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.NameProperty
// Size: 0x70 (Inherited: 0x70)
struct UNameProperty : UProperty {
};

// Class CoreUObject.SetProperty
// Size: 0x90 (Inherited: 0x70)
struct USetProperty : UProperty {
	char pad_70[0x20]; // 0x70(0x20)
};

// Class CoreUObject.SoftObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct USoftObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.SoftClassProperty
// Size: 0x80 (Inherited: 0x78)
struct USoftClassProperty : USoftObjectProperty {
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.StrProperty
// Size: 0x70 (Inherited: 0x70)
struct UStrProperty : UProperty {
};

// Class CoreUObject.StructProperty
// Size: 0x78 (Inherited: 0x70)
struct UStructProperty : UProperty {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class CoreUObject.UInt16Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt16Property : UNumericProperty {
};

// Class CoreUObject.UInt32Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt32Property : UNumericProperty {
};

// Class CoreUObject.UInt64Property
// Size: 0x70 (Inherited: 0x70)
struct UUInt64Property : UNumericProperty {
};

// Class CoreUObject.WeakObjectProperty
// Size: 0x78 (Inherited: 0x78)
struct UWeakObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.TextProperty
// Size: 0x70 (Inherited: 0x70)
struct UTextProperty : UProperty {
};

// Class CoreUObject.PropertyWrapper
// Size: 0x30 (Inherited: 0x28)
struct UPropertyWrapper : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class CoreUObject.MulticastDelegatePropertyWrapper
// Size: 0x30 (Inherited: 0x30)
struct UMulticastDelegatePropertyWrapper : UPropertyWrapper {
};

// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// Size: 0x30 (Inherited: 0x30)
struct UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper {
};

