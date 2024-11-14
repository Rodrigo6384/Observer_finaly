// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PROYECTO_DONKEY : ModuleRules
{
	public PROYECTO_DONKEY(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
