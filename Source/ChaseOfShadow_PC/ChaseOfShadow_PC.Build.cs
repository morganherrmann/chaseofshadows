// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ChaseOfShadow_PC : ModuleRules
{
	public ChaseOfShadow_PC(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
