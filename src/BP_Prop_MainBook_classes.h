// BlueprintGeneratedClass BP_Prop_MainBook.BP_Prop_MainBook_C
// Size: 0x2f0 (Inherited: 0x248)
struct ABP_Prop_MainBook_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* book mesh; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct FVector BookHoverTimeline_NewTrack_0_C53074784236B0D42A8B27A742BE41BD; // 0x260(0x0c)
	enum class ETimelineDirection BookHoverTimeline__Direction_C53074784236B0D42A8B27A742BE41BD; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* BookHoverTimeline; // 0x270(0x08)
	float BookLerpTimeline_NewTrack_0_7DC0D1584911B5EB143879AFB7A78F27; // 0x278(0x04)
	enum class ETimelineDirection BookLerpTimeline__Direction_7DC0D1584911B5EB143879AFB7A78F27; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* BookLerpTimeline; // 0x280(0x08)
	bool BookActive?; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FTransform StartingTransform; // 0x290(0x30)
	struct FTransform DestinationTransform; // 0x2c0(0x30)

	void BookLerpTimeline__FinishedFunc(); // Function BP_Prop_MainBook.BP_Prop_MainBook_C.BookLerpTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void BookLerpTimeline__UpdateFunc(); // Function BP_Prop_MainBook.BP_Prop_MainBook_C.BookLerpTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void BookHoverTimeline__FinishedFunc(); // Function BP_Prop_MainBook.BP_Prop_MainBook_C.BookHoverTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x38a7480
	void BookHoverTimeline__UpdateFunc(); // Function BP_Prop_MainBook.BP_Prop_MainBook_C.BookHoverTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x38a7480
	void Book Float Start(struct FTransform StartingTransform, struct FTransform Destination); // Function BP_Prop_MainBook.BP_Prop_MainBook_C.Book Float Start // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void Book Float End(); // Function BP_Prop_MainBook.BP_Prop_MainBook_C.Book Float End // (BlueprintCallable|BlueprintEvent) // @ game+0x38a7480
	void ExecuteUbergraph_BP_Prop_MainBook(int32_t EntryPoint); // Function BP_Prop_MainBook.BP_Prop_MainBook_C.ExecuteUbergraph_BP_Prop_MainBook // (Final|UbergraphFunction|HasDefaults) // @ game+0x38a7480
};

