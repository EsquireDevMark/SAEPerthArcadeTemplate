// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#include "SimpleController.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformFile.h"

#define LOCTEXT_NAMESPACE "FSimpleControllerModule"

void FSimpleControllerModule::StartupModule()
{
	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString dllSource = FPaths::ConvertRelativePathToFull(FPaths::ProjectPluginsDir()) + "SimpleController/Binaries/Win32/SDL2.dll";
	if (!FPaths::FileExists(dllSource)) {
		dllSource = FPaths::ConvertRelativePathToFull(FPaths::EnginePluginsDir()) + "Marketplace/SimpleController/Binaries/Win32/SDL2.dll";
	}

	if (FPaths::FileExists(dllSource)) {
		FString binPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() + "Binaries/Win32");
		if (!FPaths::DirectoryExists(binPath)) {
			platformFile.CreateDirectoryTree(*binPath);
		}
		FString dllTarget = binPath + "/SDL2.dll";
		if (!FPaths::FileExists(dllTarget)) {
			UE_LOG(LogTemp, Display, TEXT("SimpleControllerPlugin: Copy SDL2.dll into Project Binary: %s | %s"), *dllTarget, *dllSource);
			platformFile.CopyFile(*dllTarget, *dllSource);
		}
	}


	dllSource = FPaths::ConvertRelativePathToFull(FPaths::ProjectPluginsDir()) + "SimpleController/Binaries/Win64/SDL2.dll";
	if (!FPaths::FileExists(dllSource)) {
		dllSource = FPaths::ConvertRelativePathToFull(FPaths::EnginePluginsDir()) + "Marketplace/SimpleController/Binaries/Win64/SDL2.dll";
	}

	if (FPaths::FileExists(dllSource)) {
		FString binPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() + "Binaries/Win64");
		if (!FPaths::DirectoryExists(binPath)) {
			platformFile.CreateDirectoryTree(*binPath);
		}
		FString dllTarget = binPath + "/SDL2.dll";
		if (!FPaths::FileExists(dllTarget)) {
			UE_LOG(LogTemp, Display, TEXT("SimpleControllerPlugin: Copy SDL2.dll into Project Binary: %s | %s"), *dllTarget, *dllSource);
			platformFile.CopyFile(*dllTarget, *dllSource);
		}
	}
}

void FSimpleControllerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSimpleControllerModule, SimpleController)