// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetController/AuraWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraWidgetController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
	AURA_API UClass* Z_Construct_UClass_UAuraWidgetController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraWidgetController::StaticRegisterNativesUAuraWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraWidgetController);
	UClass* Z_Construct_UClass_UAuraWidgetController_NoRegister()
	{
		return UAuraWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UAuraWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgetController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/AuraWidgetController.h" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgetController, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerController_MetaData), Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerState_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgetController, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerState_MetaData), Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgetController, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgetController, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AttributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AttributeSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraWidgetController_Statics::ClassParams = {
		&UAuraWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAuraWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraWidgetController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAuraWidgetController()
	{
		if (!Z_Registration_Info_UClass_UAuraWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraWidgetController.OuterSingleton, Z_Construct_UClass_UAuraWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraWidgetController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraWidgetController>()
	{
		return UAuraWidgetController::StaticClass();
	}
	UAuraWidgetController::UAuraWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraWidgetController);
	UAuraWidgetController::~UAuraWidgetController() {}
	struct Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraWidgetController, UAuraWidgetController::StaticClass, TEXT("UAuraWidgetController"), &Z_Registration_Info_UClass_UAuraWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraWidgetController), 3196469834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgetController_h_1819537559(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
