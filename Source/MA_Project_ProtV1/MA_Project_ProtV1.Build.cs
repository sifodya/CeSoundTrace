// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.IO;

public class MA_Project_ProtV1 : ModuleRules
{
	public MA_Project_ProtV1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "PhysicsCore", "AkAudio", "WwiseSoundEngine", "Wwise", "WP_CeSoundFIRTraceConv_24"});

		PrivateDependencyModuleNames.AddRange(new string[] {"AkAudio", "WwiseSoundEngine", "Projects", "Wwise", "WP_CeSoundFIRTraceConv_24"});	


	

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
