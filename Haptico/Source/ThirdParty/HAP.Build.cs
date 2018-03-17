using System.IO;
using System;

namespace UnrealBuildTool.Rules
{
    public class HAP : ModuleRules
    {
        private string ModulePath
        {
            get { return ModuleDirectory; }
        }

        private string BinariesPath
        {
            get { return Path.GetFullPath(Path.Combine(ModulePath, "../Binaries/")); }
        }
		
		private string ThirdPartyPath
        {
            get { return ModuleDirectory; }
        }

        public HAP(ReadOnlyTargetRules Target) : base(Target)
        {
            Type = ModuleType.External;
            LoadHAP(Target);
        }

        public bool LoadHAP(ReadOnlyTargetRules Target)
        {
            bool isLibrarySupported = false;
            bool bDebug = (Target.Configuration == UnrealTargetConfiguration.Debug && BuildConfiguration.bDebugBuildsActuallyUseDebugCRT);

            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                isLibrarySupported = true;
				PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyPath, "Chai/lib/chai3d.lib"));
            }

            if (isLibrarySupported)
            {
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/audio"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/collisions"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/devices"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/display"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/effects"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/files"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/forces"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/graphics"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/lighting"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/materials"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/math"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/resources"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/shaders"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/system"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/timers"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/tools"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/widgets"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Chai/include/world"));
				
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "glew/include"));
                PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "Eigen/eigen3"));
                Definitions.Add("_CRT_SECURE_NO_WARNINGS=1");
           
                bUseRTTI = true;
                bEnableExceptions = true;
            }
            return isLibrarySupported;
        }
    }
}
