// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/OverlayWidgetController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUIWidgetRow;
#ifdef AURA_OverlayWidgetController_generated_h
#error "OverlayWidgetController.generated.h already included, missing '#pragma once' in OverlayWidgetController.h"
#endif
#define AURA_OverlayWidgetController_generated_h

#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIWidgetRow_Statics; \
	AURA_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> AURA_API UScriptStruct* StaticStruct<struct FUIWidgetRow>();

#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_31_DELEGATE \
AURA_API void FOnAttributeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChangedSignature, float NewValue);


#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_33_DELEGATE \
AURA_API void FMessageWidgetRowSignature_DelegateWrapper(const FMulticastScriptDelegate& MessageWidgetRowSignature, FUIWidgetRow Row);


#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_SPARSE_DATA
#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_ACCESSORS
#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOverlayWidgetController(); \
	friend struct Z_Construct_UClass_UOverlayWidgetController_Statics; \
public: \
	DECLARE_CLASS(UOverlayWidgetController, UAuraWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UOverlayWidgetController)


#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlayWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlayWidgetController(UOverlayWidgetController&&); \
	NO_API UOverlayWidgetController(const UOverlayWidgetController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlayWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlayWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlayWidgetController) \
	NO_API virtual ~UOverlayWidgetController();


#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_39_PROLOG
#define FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_SPARSE_DATA \
	FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_ACCESSORS \
	FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_INCLASS_NO_PURE_DECLS \
	FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UOverlayWidgetController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
