// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LearningUE4Youtube : ModuleRules
{
	public LearningUE4Youtube(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
