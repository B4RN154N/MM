// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DeleteMe.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeleteMe() {}
// Cross Module References
	MURDEROUSMUSK_API UClass* Z_Construct_UClass_UDeleteMe_NoRegister();
	MURDEROUSMUSK_API UClass* Z_Construct_UClass_UDeleteMe();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MurderousMusk();
// End Cross Module References
	void UDeleteMe::StaticRegisterNativesUDeleteMe()
	{
	}
	UClass* Z_Construct_UClass_UDeleteMe_NoRegister()
	{
		return UDeleteMe::StaticClass();
	}
	UClass* Z_Construct_UClass_UDeleteMe()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_MurderousMusk();
			OuterClass = UDeleteMe::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UDeleteMe> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DeleteMe.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("DeleteMe.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeleteMe, 2848514877);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeleteMe(Z_Construct_UClass_UDeleteMe, &UDeleteMe::StaticClass, TEXT("/Script/MurderousMusk"), TEXT("UDeleteMe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeleteMe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
