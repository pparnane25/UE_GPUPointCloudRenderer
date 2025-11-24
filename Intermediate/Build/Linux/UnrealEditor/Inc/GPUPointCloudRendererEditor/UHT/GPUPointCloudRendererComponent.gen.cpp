// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPUPointCloudRendererEditor/Public/GPUPointCloudRendererComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPUPointCloudRendererComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CUSTOMMESHCOMPONENT_API UClass* Z_Construct_UClass_UCustomMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GPUPOINTCLOUDRENDEREREDITOR_API UClass* Z_Construct_UClass_UGPUPointCloudRendererComponent();
GPUPOINTCLOUDRENDEREREDITOR_API UClass* Z_Construct_UClass_UGPUPointCloudRendererComponent_NoRegister();
GPUPOINTCLOUDRENDEREREDITOR_API UClass* Z_Construct_UClass_UPointCloudMeshComponent();
GPUPOINTCLOUDRENDEREREDITOR_API UClass* Z_Construct_UClass_UPointCloudMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GPUPointCloudRendererEditor();
// End Cross Module References

// Begin Class UPointCloudMeshComponent
void UPointCloudMeshComponent::StaticRegisterNativesUPointCloudMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudMeshComponent);
UClass* Z_Construct_UClass_UPointCloudMeshComponent_NoRegister()
{
	return UPointCloudMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UPointCloudMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object LOD Physics Collision Object LOD Physics Collision Mobility Trigger" },
		{ "IncludePath", "GPUPointCloudRendererComponent.h" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPointCloudMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCustomMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GPUPointCloudRendererEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudMeshComponent_Statics::ClassParams = {
	&UPointCloudMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPointCloudMeshComponent()
{
	if (!Z_Registration_Info_UClass_UPointCloudMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudMeshComponent.OuterSingleton, Z_Construct_UClass_UPointCloudMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPointCloudMeshComponent.OuterSingleton;
}
template<> GPUPOINTCLOUDRENDEREREDITOR_API UClass* StaticClass<UPointCloudMeshComponent>()
{
	return UPointCloudMeshComponent::StaticClass();
}
UPointCloudMeshComponent::UPointCloudMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudMeshComponent);
UPointCloudMeshComponent::~UPointCloudMeshComponent() {}
// End Class UPointCloudMeshComponent

// Begin Class UGPUPointCloudRendererComponent Function AddSnapshot
struct Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics
{
	struct GPUPointCloudRendererComponent_eventAddSnapshot_Parms
	{
		TArray<FLinearColor> pointPositions;
		TArray<uint8> pointColors;
		FVector offsetTranslation;
		FRotator offsetRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GPUPointCloudRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Creates a large datasets and adds the given data as a \"snapshot\" to it. Can be used to collect different point cloud datasets into one large set (e.g. collecting a 360\xef\xbf\xbd-View with several captures of the environment etc.).\n\x09*\n\x09* @param\x09pointPositions\x09\x09\x09\x09""Array of your point positions.\n\x09* @param\x09pointColors\x09\x09\x09\x09\x09""Array of your point colors (BGRA-encoded).\n\x09* @param\x09offsetTranslation\x09\x09\x09The World-Space offset translation the given point cloud should be saved with.\n\x09* @param\x09offsetRotation\x09\x09\x09\x09The World-Space offset rotation the given point cloud should be saved with.\n\x09*/" },
#endif
		{ "CPP_Default_offsetRotation", "" },
		{ "CPP_Default_offsetTranslation", "" },
		{ "DisplayName", "PCR Add Point Cloud Snapshot" },
		{ "Keywords", "set add input increment point cloud collect snapshot kinect" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a large datasets and adds the given data as a \"snapshot\" to it. Can be used to collect different point cloud datasets into one large set (e.g. collecting a 360\xef\xbf\xbd-View with several captures of the environment etc.).\n\n@param        pointPositions                          Array of your point positions.\n@param        pointColors                                     Array of your point colors (BGRA-encoded).\n@param        offsetTranslation                       The World-Space offset translation the given point cloud should be saved with.\n@param        offsetRotation                          The World-Space offset rotation the given point cloud should be saved with." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pointPositions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_pointColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pointColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_offsetTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_offsetRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_pointPositions_Inner = { "pointPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_pointPositions = { "pointPositions", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventAddSnapshot_Parms, pointPositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_pointColors_Inner = { "pointColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_pointColors = { "pointColors", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventAddSnapshot_Parms, pointColors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_offsetTranslation = { "offsetTranslation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventAddSnapshot_Parms, offsetTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_offsetRotation = { "offsetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventAddSnapshot_Parms, offsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_pointPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_pointPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_pointColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_pointColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_offsetTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::NewProp_offsetRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPUPointCloudRendererComponent, nullptr, "AddSnapshot", nullptr, nullptr, Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::GPUPointCloudRendererComponent_eventAddSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::GPUPointCloudRendererComponent_eventAddSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPUPointCloudRendererComponent::execAddSnapshot)
{
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_pointPositions);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_pointColors);
	P_GET_STRUCT(FVector,Z_Param_offsetTranslation);
	P_GET_STRUCT(FRotator,Z_Param_offsetRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSnapshot(Z_Param_Out_pointPositions,Z_Param_Out_pointColors,Z_Param_offsetTranslation,Z_Param_offsetRotation);
	P_NATIVE_END;
}
// End Class UGPUPointCloudRendererComponent Function AddSnapshot

// Begin Class UGPUPointCloudRendererComponent Function SetDynamicProperties
struct Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics
{
	struct GPUPointCloudRendererComponent_eventSetDynamicProperties_Parms
	{
		FLinearColor overallColouring;
		float cloudScaling;
		float splatSize;
		float distanceScaling;
		bool overrideColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GPUPointCloudRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* For dynamic point clouds only. When you want to change properties, then you'll have to call this function (during Run-Time or in construction script). Sets the given point cloud properties and updates the point cloud. Can be called every frame.\n\x09*\n\x09* @param\x09""cloudScaling\x09\x09\x09\x09The scaling factor of the whole point cloud. Scaling can be also changed by the component scaling in the editor, but not during Run-Time.\n\x09* @param\x09""falloff\x09\x09\x09\x09\x09\x09The softness of the point's edge.\n\x09* @param\x09splatSize\x09\x09\x09\x09\x09The splat size.\n\x09* @param\x09""distanceScaling\x09\x09\x09\x09The distance from the camera, where the scaling of the points start to increase.\n\x09* @param\x09""distanceFalloff\x09\x09\x09\x09The scaling falloff depending on the distance to the camera (1=linear, 2=quadratic).\n\x09* @param\x09overrideColor\x09\x09\x09\x09Overrides the point cloud colors with the given colormap.\n\x09*/" },
#endif
		{ "CPP_Default_cloudScaling", "1.000000" },
		{ "CPP_Default_distanceScaling", "1000.000000" },
		{ "CPP_Default_overallColouring", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_overrideColor", "false" },
		{ "CPP_Default_splatSize", "1.000000" },
		{ "DisplayName", "PCR Set Dynamic Point Cloud Properties" },
		{ "Keywords", "point cloud update set properties" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For dynamic point clouds only. When you want to change properties, then you'll have to call this function (during Run-Time or in construction script). Sets the given point cloud properties and updates the point cloud. Can be called every frame.\n\n@param        cloudScaling                            The scaling factor of the whole point cloud. Scaling can be also changed by the component scaling in the editor, but not during Run-Time.\n@param        falloff                                         The softness of the point's edge.\n@param        splatSize                                       The splat size.\n@param        distanceScaling                         The distance from the camera, where the scaling of the points start to increase.\n@param        distanceFalloff                         The scaling falloff depending on the distance to the camera (1=linear, 2=quadratic).\n@param        overrideColor                           Overrides the point cloud colors with the given colormap." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_overallColouring;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_cloudScaling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_splatSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distanceScaling;
	static void NewProp_overrideColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_overrideColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_overallColouring = { "overallColouring", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetDynamicProperties_Parms, overallColouring), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_cloudScaling = { "cloudScaling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetDynamicProperties_Parms, cloudScaling), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_splatSize = { "splatSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetDynamicProperties_Parms, splatSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_distanceScaling = { "distanceScaling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetDynamicProperties_Parms, distanceScaling), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_overrideColor_SetBit(void* Obj)
{
	((GPUPointCloudRendererComponent_eventSetDynamicProperties_Parms*)Obj)->overrideColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_overrideColor = { "overrideColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GPUPointCloudRendererComponent_eventSetDynamicProperties_Parms), &Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_overrideColor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_overallColouring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_cloudScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_splatSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_distanceScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::NewProp_overrideColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPUPointCloudRendererComponent, nullptr, "SetDynamicProperties", nullptr, nullptr, Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::GPUPointCloudRendererComponent_eventSetDynamicProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::GPUPointCloudRendererComponent_eventSetDynamicProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPUPointCloudRendererComponent::execSetDynamicProperties)
{
	P_GET_STRUCT(FLinearColor,Z_Param_overallColouring);
	P_GET_PROPERTY(FFloatProperty,Z_Param_cloudScaling);
	P_GET_PROPERTY(FFloatProperty,Z_Param_splatSize);
	P_GET_PROPERTY(FFloatProperty,Z_Param_distanceScaling);
	P_GET_UBOOL(Z_Param_overrideColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDynamicProperties(Z_Param_overallColouring,Z_Param_cloudScaling,Z_Param_splatSize,Z_Param_distanceScaling,Z_Param_overrideColor);
	P_NATIVE_END;
}
// End Class UGPUPointCloudRendererComponent Function SetDynamicProperties

// Begin Class UGPUPointCloudRendererComponent Function SetExtent
struct Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics
{
	struct GPUPointCloudRendererComponent_eventSetExtent_Parms
	{
		FBox extent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GPUPointCloudRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the extents of the point cloud. Needed for proper coloring with a gradient.\n\x09*\n\x09* @param\x09""extent\x09\x09\x09\x09\x09\x09The extent of the cloud.\n\x09*/" },
#endif
		{ "DisplayName", "PCR Set Extent" },
		{ "Keywords", "set extent point cloud" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the extents of the point cloud. Needed for proper coloring with a gradient.\n\n@param        extent                                          The extent of the cloud." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_extent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::NewProp_extent = { "extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetExtent_Parms, extent), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::NewProp_extent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPUPointCloudRendererComponent, nullptr, "SetExtent", nullptr, nullptr, Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::GPUPointCloudRendererComponent_eventSetExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::GPUPointCloudRendererComponent_eventSetExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPUPointCloudRendererComponent::execSetExtent)
{
	P_GET_STRUCT(FBox,Z_Param_extent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtent(Z_Param_extent);
	P_NATIVE_END;
}
// End Class UGPUPointCloudRendererComponent Function SetExtent

// Begin Class UGPUPointCloudRendererComponent Function SetInput
struct Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics
{
	struct GPUPointCloudRendererComponent_eventSetInput_Parms
	{
		TArray<FLinearColor> pointPositions;
		TArray<uint8> pointColors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GPUPointCloudRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Send your own, custom point data stream to the renderer. Could be used for a kinect point stream or similar. Can be called every frame. Point positions have to be encoded as a array of LinearColors with the following mapping:\n\x09""Alpha Channel : Z-values;\n\x09Green Channel : X-values;\n\x09""Blue Channel : Y-values;\n\x09Red Channel : Z-values;\n\x09*\n\x09* @param\x09pointPositions\x09\x09\x09\x09""Array of your point positions. Please mind the mapping: Alpha Channel : Z-values, Green Channel : X-values, Blue Channel : Y-values, Red Channel : Z-values.\n\x09* @param\x09pointColors\x09\x09\x09\x09\x09""Array of your point colors (BGRA-encoded).\n\x09*/" },
#endif
		{ "DisplayName", "PCR Set/Stream Input FAST" },
		{ "Keywords", "set kinect custom own dynamic point cloud streaming input" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send your own, custom point data stream to the renderer. Could be used for a kinect point stream or similar. Can be called every frame. Point positions have to be encoded as a array of LinearColors with the following mapping:\n       Alpha Channel : Z-values;\n       Green Channel : X-values;\n       Blue Channel : Y-values;\n       Red Channel : Z-values;\n\n@param        pointPositions                          Array of your point positions. Please mind the mapping: Alpha Channel : Z-values, Green Channel : X-values, Blue Channel : Y-values, Red Channel : Z-values.\n@param        pointColors                                     Array of your point colors (BGRA-encoded)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pointPositions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_pointColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pointColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::NewProp_pointPositions_Inner = { "pointPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::NewProp_pointPositions = { "pointPositions", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetInput_Parms, pointPositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::NewProp_pointColors_Inner = { "pointColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::NewProp_pointColors = { "pointColors", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetInput_Parms, pointColors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::NewProp_pointPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::NewProp_pointPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::NewProp_pointColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::NewProp_pointColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPUPointCloudRendererComponent, nullptr, "SetInput", nullptr, nullptr, Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::GPUPointCloudRendererComponent_eventSetInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::GPUPointCloudRendererComponent_eventSetInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPUPointCloudRendererComponent::execSetInput)
{
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_pointPositions);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_pointColors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInput(Z_Param_Out_pointPositions,Z_Param_Out_pointColors);
	P_NATIVE_END;
}
// End Class UGPUPointCloudRendererComponent Function SetInput

// Begin Class UGPUPointCloudRendererComponent Function SetInputAndConvert1
struct Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics
{
	struct GPUPointCloudRendererComponent_eventSetInputAndConvert1_Parms
	{
		TArray<FLinearColor> pointPositions;
		TArray<FColor> pointColors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GPUPointCloudRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Send your own, custom point data stream to the renderer. Could be used for a kinect point stream or similar. Can be called every frame. Point positions have to be encoded as a array of LinearColors with the following mapping:\n\x09\x09""Alpha Channel : Z-values;\n\x09\x09Green Channel : X-values;\n\x09\x09""Blue Channel : Y-values;\n\x09\x09Red Channel : Z-values;\n\x09*\n\x09* @param\x09pointPositions\x09\x09\x09\x09""Array of your point positions. Please mind the mapping: Alpha Channel : Z-values, Green Channel : X-values, Blue Channel : Y-values, Red Channel : Z-values.\n\x09* @param\x09pointColors\x09\x09\x09\x09\x09""Array of your point colors.\n\x09*/" },
#endif
		{ "DisplayName", "PCR Set/Stream Input (FLinearColor/FColor)" },
		{ "Keywords", "set kinect custom own dynamic point cloud streaming input" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send your own, custom point data stream to the renderer. Could be used for a kinect point stream or similar. Can be called every frame. Point positions have to be encoded as a array of LinearColors with the following mapping:\n               Alpha Channel : Z-values;\n               Green Channel : X-values;\n               Blue Channel : Y-values;\n               Red Channel : Z-values;\n\n@param        pointPositions                          Array of your point positions. Please mind the mapping: Alpha Channel : Z-values, Green Channel : X-values, Blue Channel : Y-values, Red Channel : Z-values.\n@param        pointColors                                     Array of your point colors." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pointPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pointColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::NewProp_pointPositions_Inner = { "pointPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::NewProp_pointPositions = { "pointPositions", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetInputAndConvert1_Parms, pointPositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::NewProp_pointColors_Inner = { "pointColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::NewProp_pointColors = { "pointColors", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetInputAndConvert1_Parms, pointColors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::NewProp_pointPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::NewProp_pointPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::NewProp_pointColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::NewProp_pointColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPUPointCloudRendererComponent, nullptr, "SetInputAndConvert1", nullptr, nullptr, Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::GPUPointCloudRendererComponent_eventSetInputAndConvert1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::GPUPointCloudRendererComponent_eventSetInputAndConvert1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPUPointCloudRendererComponent::execSetInputAndConvert1)
{
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_pointPositions);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_pointColors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputAndConvert1(Z_Param_Out_pointPositions,Z_Param_Out_pointColors);
	P_NATIVE_END;
}
// End Class UGPUPointCloudRendererComponent Function SetInputAndConvert1

// Begin Class UGPUPointCloudRendererComponent Function SetInputAndConvert2
struct Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics
{
	struct GPUPointCloudRendererComponent_eventSetInputAndConvert2_Parms
	{
		TArray<FVector> pointPositions;
		TArray<FColor> pointColors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GPUPointCloudRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Send your own, custom point data stream to the renderer. Could be used for a kinect point stream or similar. Can be called every frame.\n\x09*\n\x09* @param\x09pointPositions\x09\x09\x09\x09""Array of your point positions.\n\x09* @param\x09pointColors\x09\x09\x09\x09\x09""Array of your point colors.\n\x09*/" },
#endif
		{ "DisplayName", "PCR Set/Stream Input (FVector/FColor)" },
		{ "Keywords", "set kinect custom own dynamic point cloud streaming input" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send your own, custom point data stream to the renderer. Could be used for a kinect point stream or similar. Can be called every frame.\n\n@param        pointPositions                          Array of your point positions.\n@param        pointColors                                     Array of your point colors." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pointPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pointColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::NewProp_pointPositions_Inner = { "pointPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::NewProp_pointPositions = { "pointPositions", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetInputAndConvert2_Parms, pointPositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::NewProp_pointColors_Inner = { "pointColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::NewProp_pointColors = { "pointColors", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GPUPointCloudRendererComponent_eventSetInputAndConvert2_Parms, pointColors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::NewProp_pointPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::NewProp_pointPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::NewProp_pointColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::NewProp_pointColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPUPointCloudRendererComponent, nullptr, "SetInputAndConvert2", nullptr, nullptr, Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::GPUPointCloudRendererComponent_eventSetInputAndConvert2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::GPUPointCloudRendererComponent_eventSetInputAndConvert2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGPUPointCloudRendererComponent::execSetInputAndConvert2)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_pointPositions);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_pointColors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputAndConvert2(Z_Param_Out_pointPositions,Z_Param_Out_pointColors);
	P_NATIVE_END;
}
// End Class UGPUPointCloudRendererComponent Function SetInputAndConvert2

// Begin Class UGPUPointCloudRendererComponent
void UGPUPointCloudRendererComponent::StaticRegisterNativesUGPUPointCloudRendererComponent()
{
	UClass* Class = UGPUPointCloudRendererComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSnapshot", &UGPUPointCloudRendererComponent::execAddSnapshot },
		{ "SetDynamicProperties", &UGPUPointCloudRendererComponent::execSetDynamicProperties },
		{ "SetExtent", &UGPUPointCloudRendererComponent::execSetExtent },
		{ "SetInput", &UGPUPointCloudRendererComponent::execSetInput },
		{ "SetInputAndConvert1", &UGPUPointCloudRendererComponent::execSetInputAndConvert1 },
		{ "SetInputAndConvert2", &UGPUPointCloudRendererComponent::execSetInputAndConvert2 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPUPointCloudRendererComponent);
UClass* Z_Construct_UClass_UGPUPointCloudRendererComponent_NoRegister()
{
	return UGPUPointCloudRendererComponent::StaticClass();
}
struct Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object LOD Physics Collision Trigger PhysicsVolume" },
		{ "IncludePath", "GPUPointCloudRendererComponent.h" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mBaseMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mPointCount_MetaData[] = {
		{ "Category", "GPUPointCloudRenderer" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mExtent_MetaData[] = {
		{ "Category", "GPUPointCloudRenderer" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mPointCloudMaterial_MetaData[] = {
		{ "Category", "GPUPointCloudRenderer" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mSplatSize_MetaData[] = {
		{ "Category", "GPUPointCloudRenderer" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mCloudScaling_MetaData[] = {
		{ "Category", "GPUPointCloudRenderer" },
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mStreamingBaseMat_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Streaming-specific variables\n" },
#endif
		{ "ModuleRelativePath", "Public/GPUPointCloudRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Streaming-specific variables" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mBaseMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_mPointCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_mExtent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mPointCloudMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mSplatSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mCloudScaling;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mStreamingBaseMat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGPUPointCloudRendererComponent_AddSnapshot, "AddSnapshot" }, // 2929328290
		{ &Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetDynamicProperties, "SetDynamicProperties" }, // 1841021716
		{ &Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetExtent, "SetExtent" }, // 2459589765
		{ &Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInput, "SetInput" }, // 1930380046
		{ &Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert1, "SetInputAndConvert1" }, // 2355303109
		{ &Z_Construct_UFunction_UGPUPointCloudRendererComponent_SetInputAndConvert2, "SetInputAndConvert2" }, // 3518951762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPUPointCloudRendererComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mBaseMesh = { "mBaseMesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPUPointCloudRendererComponent, mBaseMesh), Z_Construct_UClass_UPointCloudMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mBaseMesh_MetaData), NewProp_mBaseMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mPointCount = { "mPointCount", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPUPointCloudRendererComponent, mPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mPointCount_MetaData), NewProp_mPointCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mExtent = { "mExtent", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPUPointCloudRendererComponent, mExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mExtent_MetaData), NewProp_mExtent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mPointCloudMaterial = { "mPointCloudMaterial", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPUPointCloudRendererComponent, mPointCloudMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mPointCloudMaterial_MetaData), NewProp_mPointCloudMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mSplatSize = { "mSplatSize", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPUPointCloudRendererComponent, mSplatSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mSplatSize_MetaData), NewProp_mSplatSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mCloudScaling = { "mCloudScaling", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPUPointCloudRendererComponent, mCloudScaling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mCloudScaling_MetaData), NewProp_mCloudScaling_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mStreamingBaseMat = { "mStreamingBaseMat", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGPUPointCloudRendererComponent, mStreamingBaseMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mStreamingBaseMat_MetaData), NewProp_mStreamingBaseMat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mBaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mPointCloudMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mSplatSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mCloudScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::NewProp_mStreamingBaseMat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GPUPointCloudRendererEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::ClassParams = {
	&UGPUPointCloudRendererComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPUPointCloudRendererComponent()
{
	if (!Z_Registration_Info_UClass_UGPUPointCloudRendererComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPUPointCloudRendererComponent.OuterSingleton, Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPUPointCloudRendererComponent.OuterSingleton;
}
template<> GPUPOINTCLOUDRENDEREREDITOR_API UClass* StaticClass<UGPUPointCloudRendererComponent>()
{
	return UGPUPointCloudRendererComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPUPointCloudRendererComponent);
// End Class UGPUPointCloudRendererComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudMeshComponent, UPointCloudMeshComponent::StaticClass, TEXT("UPointCloudMeshComponent"), &Z_Registration_Info_UClass_UPointCloudMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudMeshComponent), 1352535651U) },
		{ Z_Construct_UClass_UGPUPointCloudRendererComponent, UGPUPointCloudRendererComponent::StaticClass, TEXT("UGPUPointCloudRendererComponent"), &Z_Registration_Info_UClass_UGPUPointCloudRendererComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPUPointCloudRendererComponent), 3022189149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_768213915(TEXT("/Script/GPUPointCloudRendererEditor"),
	Z_CompiledInDeferFile_FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
