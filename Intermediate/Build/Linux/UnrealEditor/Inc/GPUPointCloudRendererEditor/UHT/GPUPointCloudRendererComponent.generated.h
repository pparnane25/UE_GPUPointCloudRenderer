// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GPUPointCloudRendererComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FLinearColor;
#ifdef GPUPOINTCLOUDRENDEREREDITOR_GPUPointCloudRendererComponent_generated_h
#error "GPUPointCloudRendererComponent.generated.h already included, missing '#pragma once' in GPUPointCloudRendererComponent.h"
#endif
#define GPUPOINTCLOUDRENDEREREDITOR_GPUPointCloudRendererComponent_generated_h

#define FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloudMeshComponent(); \
	friend struct Z_Construct_UClass_UPointCloudMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UPointCloudMeshComponent, UCustomMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GPUPointCloudRendererEditor"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudMeshComponent)


#define FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPointCloudMeshComponent(UPointCloudMeshComponent&&); \
	UPointCloudMeshComponent(const UPointCloudMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudMeshComponent) \
	NO_API virtual ~UPointCloudMeshComponent();


#define FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_15_PROLOG
#define FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPUPOINTCLOUDRENDEREREDITOR_API UClass* StaticClass<class UPointCloudMeshComponent>();

#define FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddSnapshot); \
	DECLARE_FUNCTION(execSetExtent); \
	DECLARE_FUNCTION(execSetInputAndConvert2); \
	DECLARE_FUNCTION(execSetInput); \
	DECLARE_FUNCTION(execSetInputAndConvert1); \
	DECLARE_FUNCTION(execSetDynamicProperties);


#define FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGPUPointCloudRendererComponent(); \
	friend struct Z_Construct_UClass_UGPUPointCloudRendererComponent_Statics; \
public: \
	DECLARE_CLASS(UGPUPointCloudRendererComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GPUPointCloudRendererEditor"), NO_API) \
	DECLARE_SERIALIZER(UGPUPointCloudRendererComponent)


#define FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGPUPointCloudRendererComponent(UGPUPointCloudRendererComponent&&); \
	UGPUPointCloudRendererComponent(const UGPUPointCloudRendererComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGPUPointCloudRendererComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGPUPointCloudRendererComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGPUPointCloudRendererComponent)


#define FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_58_PROLOG
#define FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_61_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPUPOINTCLOUDRENDEREREDITOR_API UClass* StaticClass<class UGPUPointCloudRendererComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_VrPointCloudGPU_Plugins_UE_GPUPointCloudRenderer_Source_GPUPointCloudRendererEditor_Public_GPUPointCloudRendererComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
