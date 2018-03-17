# The Haptico Plugin

The Haptico Plugin allows you to use three and six degree of freedom haptic devices directly in the Unreal Engine.
You can easily access your haptic device from Blueprint or C++ and retrieve the position, rotation, linear velocity, angular velocity and button clicks from the device and apply forces and torques to the device. This Plugin was tested with the PHANToM Omni from Sensable but should work with all of the following haptic devices that the internally used library CHAI3D supports: *delta.x*, *omega.x*, *sigma.x*, *Novint Falcon*, *Phantom Omni*, *Touch 3D*, *Razer Hydra*.

## Instalation
- Put the *Haptico* Folder into the *Plugins* folder in your project directory. If you don't have the folder, create it.
- If you want to use C++, add the following lines to your <your_project_name>.Build.cs :

    ```sh
    	PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Haptico"});
        PrivateDependencyModuleNames.AddRange(new string[] { "Haptico" });
        PrivateIncludePathModuleNames.AddRange(new string[] { "Haptico" });
        PublicIncludePathModuleNames.AddRange(new string[] { "Haptico" });
    ```

- Put your haptic device specific DLL into the projects *Binaries/Win64* folder next to the other DLL's.
  If you don't have one, create *Binarries/Win64/* in your project directory.
- Make sure that the plugin is enabled in the editor under *Edit->Plugins*.

## How to use
In the editor in the *Modes* tab search for a class named *Haptic Manager* and place it in your scene.
Now you can open your Blueprint and search for and use the following functions:
- *Set Force to Apply* 
- *Set Torque to Apply*
- *Get Haptic Device Position* (in Device Coordinates)
- *Get Haptic Device Position in Unreal Coordinates*
- *Get Haptic Device Rotation*  (in Device Rotation Matrix)
- *Get Haptic Device Rotation as Unreal Rotator*
- *Get Haptic Device Linear Velocity*
- *Get Haptic Device Angular Velocity*

You can access the same functions from C++ from the `AHapticManager` class.