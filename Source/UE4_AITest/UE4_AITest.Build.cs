// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE4_AITest : ModuleRules
{
	public UE4_AITest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
