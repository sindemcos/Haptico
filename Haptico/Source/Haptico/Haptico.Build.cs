using System.IO;
using System;

namespace UnrealBuildTool.Rules
{
    public class Haptico : ModuleRules
    {
        private string ModulePath
        {
            get { return ModuleDirectory; }
        }

        private string ThirdPartyPath
        {
            get { return Path.GetFullPath(Path.Combine(ModulePath, "../ThirdParty/")); }
        }

        private string BinariesPath
        {
            get { return Path.GetFullPath(Path.Combine(ModulePath, "../../Binaries/")); }
        }


        public Haptico(ReadOnlyTargetRules Target) : base(Target)
        {
            PrivateIncludePaths.Add("Haptico/Private");
            PublicIncludePaths.Add("Haptico/Public");

            PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HAP" });
            PrivateDependencyModuleNames.AddRange(new string[] { "Core" });
            bUseRTTI = true;
            bEnableExceptions = true;  
        }
    }
}
