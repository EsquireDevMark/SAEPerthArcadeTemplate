// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

using System;
using System.IO;
using UnrealBuildTool;

public class SimpleController : ModuleRules
{
    public SimpleController(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        string thirdParty = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Source/ThirdParty/"));
        string projectDir = "";
        if (Target.ProjectFile != null)
        {
            projectDir = Target.ProjectFile.ToString();
            projectDir = projectDir.Replace(".uproject", "");
        }

        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...
			}
            );


        PrivateIncludePaths.AddRange(
            new string[] {
				// ... add other private include paths required here ...
			}
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
            }
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
            );


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string dllPath = Path.Combine(thirdParty, "64", "SDL2.dll");
            string binaryPluginPathSDL = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/Win64/SDL2.dll"));
            string binaryPluginPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/Win64/"));
            string runtimeDependencyPath = Path.GetFullPath(Path.Combine(projectDir, "../Binaries/Win64/SDL2.dll"));

            //PublicLibraryPaths.Add(Path.Combine(thirdParty, "64"));
            PublicAdditionalLibraries.Add(Path.Combine(thirdParty, "64", "SDL2.lib"));
            PublicDelayLoadDLLs.Add(dllPath);

            if (!Directory.Exists(binaryPluginPath))
            {
                Console.WriteLine("SimpleControllerPlugin: Create Directory: " + binaryPluginPath);
                Directory.CreateDirectory(binaryPluginPath);
            }

            if (!File.Exists(binaryPluginPathSDL))
            {
                Console.WriteLine("SimpleControllerPlugin: Copy SDL2.dll into Plugin Binary Folder: " + dllPath + " -> " + binaryPluginPathSDL);
                File.Copy(dllPath, binaryPluginPathSDL, false);
            }

            if (File.Exists(runtimeDependencyPath))
            {
                Console.WriteLine("SimpleControllerPlugin: Load SDL2.dll from: " + runtimeDependencyPath);
                RuntimeDependencies.Add(runtimeDependencyPath);
            }
            else
            {
                Console.WriteLine("SimpleControllerPlugin: SDL2.dll not found (Only important on project cooking): " + runtimeDependencyPath);
            }



        }
        if (Target.Platform == UnrealTargetPlatform.Win32)
        {
            string dllPath = Path.Combine(thirdParty, "32", "SDL2.dll");
            string binaryPluginPathSDL = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/Win32/SDL2.dll"));
            string binaryPluginPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/Win32/"));
            string runtimeDependencyPath = Path.GetFullPath(Path.Combine(projectDir, "../Binaries/Win32/SDL2.dll"));

            //PublicLibraryPaths.Add(Path.Combine(thirdParty, "32"));
            PublicAdditionalLibraries.Add(Path.Combine(thirdParty, "32", "SDL2.lib"));
            PublicDelayLoadDLLs.Add(dllPath);

            if (!Directory.Exists(binaryPluginPath))
            {
                Console.WriteLine("SimpleControllerPlugin: Create Directory: " + binaryPluginPath);
                Directory.CreateDirectory(binaryPluginPath);
            }

            if (!File.Exists(binaryPluginPathSDL))
            {
                Console.WriteLine("SimpleControllerPlugin: Copy SDL2.dll into Plugin Binary Folder: " + dllPath + " -> " + binaryPluginPathSDL);
                File.Copy(dllPath, binaryPluginPathSDL, false);
            }

            if (File.Exists(runtimeDependencyPath))
            {
                Console.WriteLine("SimpleControllerPlugin: Load SDL2.dll from: " + runtimeDependencyPath);
                RuntimeDependencies.Add(runtimeDependencyPath);
            }
            else
            {
                Console.WriteLine("SimpleControllerPlugin: SDL2.dll not found (Only important on project cooking): " + runtimeDependencyPath);
            }
        }
        PublicIncludePaths.Add(Path.Combine(thirdParty, "include"));

    }
}
