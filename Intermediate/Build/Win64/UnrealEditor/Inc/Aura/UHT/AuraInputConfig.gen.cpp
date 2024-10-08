// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Input/AuraInputConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraInputConfig() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraInputConfig();
	AURA_API UClass* Z_Construct_UClass_UAuraInputConfig_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraInputAction();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuraInputAction;
class UScriptStruct* FAuraInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuraInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuraInputAction, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("AuraInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_AuraInputAction.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FAuraInputAction>()
{
	return FAuraInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAuraInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/AuraInputConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuraInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuraInputAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuraInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"AuraInputAction",
		nullptr,
		0,
		sizeof(FAuraInputAction),
		alignof(FAuraInputAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuraInputAction_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuraInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_AuraInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuraInputAction.InnerSingleton, Z_Construct_UScriptStruct_FAuraInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AuraInputAction.InnerSingleton;
	}
	void UAuraInputConfig::StaticRegisterNativesUAuraInputConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraInputConfig);
	UClass* Z_Construct_UClass_UAuraInputConfig_NoRegister()
	{
		return UAuraInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UAuraInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraInputConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraInputConfig_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Input/AuraInputConfig.h" },
		{ "ModuleRelativePath", "Public/Input/AuraInputConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraInputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraInputConfig_Statics::ClassParams = {
		&UAuraInputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraInputConfig_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraInputConfig()
	{
		if (!Z_Registration_Info_UClass_UAuraInputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraInputConfig.OuterSingleton, Z_Construct_UClass_UAuraInputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraInputConfig.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraInputConfig>()
	{
		return UAuraInputConfig::StaticClass();
	}
	UAuraInputConfig::UAuraInputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraInputConfig);
	UAuraInputConfig::~UAuraInputConfig() {}
	struct Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_Input_AuraInputConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_Input_AuraInputConfig_h_Statics::ScriptStructInfo[] = {
		{ FAuraInputAction::StaticStruct, Z_Construct_UScriptStruct_FAuraInputAction_Statics::NewStructOps, TEXT("AuraInputAction"), &Z_Registration_Info_UScriptStruct_AuraInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuraInputAction), 2354718894U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_Input_AuraInputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraInputConfig, UAuraInputConfig::StaticClass, TEXT("UAuraInputConfig"), &Z_Registration_Info_UClass_UAuraInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraInputConfig), 1816220412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_Input_AuraInputConfig_h_3870136331(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_Input_AuraInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_Input_AuraInputConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_Input_AuraInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_Input_AuraInputConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
