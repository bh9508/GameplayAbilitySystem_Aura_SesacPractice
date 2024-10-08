// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/AuraGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraGameplayAbility() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UAuraGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraGameplayAbility::StaticRegisterNativesUAuraGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraGameplayAbility);
	UClass* Z_Construct_UClass_UAuraGameplayAbility_NoRegister()
	{
		return UAuraGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UAuraGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraGameplayAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraGameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/AuraGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraGameplayAbility_Statics::ClassParams = {
		&UAuraGameplayAbility::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraGameplayAbility_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UAuraGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraGameplayAbility.OuterSingleton, Z_Construct_UClass_UAuraGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraGameplayAbility.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraGameplayAbility>()
	{
		return UAuraGameplayAbility::StaticClass();
	}
	UAuraGameplayAbility::UAuraGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraGameplayAbility);
	UAuraGameplayAbility::~UAuraGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraGameplayAbility, UAuraGameplayAbility::StaticClass, TEXT("UAuraGameplayAbility"), &Z_Registration_Info_UClass_UAuraGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraGameplayAbility), 4233463852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraGameplayAbility_h_3417806342(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_byunghoon_Unreal_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
