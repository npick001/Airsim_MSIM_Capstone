---
layout: default
title: "Setup"
---

# Project Setup from Scratch

Setup for this project comes with a few distinct _required and **chronological**_ steps if you wish to replicate the results of the study.
1. [Setting up development environment prerequisites](#environment-prequisites)
2. [Downloading Unreal Engine 4.27](#unreal-engine-setup)
3. [Build and Integrate AirSim into Unreal Project](#airsim-setup)
4. [Integrated Simulation Setup](#integrated-simulation-setup)

## Environment Prequisites
The setup for this project requires background knowledge in computer directory and file structure, building software packages from source code, basic operating system emulation (WSL on Windows), computer networking and port configuration, and version control. I have already done most of the setup if you fork from my [capstone repository](https://github.com/npick001/Airsim_MSIM_Capstone), but this documentation will take you through the steps I used to build this project from scratch.

### **_Integrated Development Environments_**
This project requires the use of 2 IDE's:
- [Visual Studio 2022 Community](https://visualstudio.microsoft.com/vs/community/)
- [Visual Studio Code](https://code.visualstudio.com/download)

The beauty of these are in the customization and integratibility of the environments with source control and the OS emulator running the in-the-loop components.

#### _Visual Studio 2022_
If you have Visual Studio 2019 or previous versions installed, you **must** remove them from your system for this process to work.
Once you download Visual Studio 2022, you must modify the IDE with at least the following packages:
- Desktop Development with C++
- Game Development with C++

Within the installation details on the right, click the drop downs for the packages and you must make sure you have the correct software development kits (SDKs).
The SDK required to build AirSim correctly is at *least* **Windows 10 SDK 10.0.18362.0**. If this (or a newer version) is already selected, feel free to continue. You **must** use Windows 10 SDKs or else you will encounter build errors.

#### _Visual Studio Code_
Once you download Visual Studio Code, you must install a few extensions. At minimum, you will need:
- [Python](https://marketplace.visualstudio.com/items?itemName=ms-python.python)
- [Python Extension Pack](https://marketplace.visualstudio.com/items?itemName=donjayamanne.python-extension-pack)
- [WSL](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-wsl) (if on windows)

#### _Windows Subsystem For Linux_
To run the flight controller Software-in-the-Loop, you must do so through WSL.

[Installing WSL](https://learn.microsoft.com/en-us/windows/wsl/install) requires entering the following command from an elevated command prompt (run as administrator).\
```wsl --install```
If you encounter issues with this command, like I did, then manually install the correct linux distribution with the following command.
```wsl --install Ubuntu```

WSL can be linked with Visual Studio Code by clicking the Remote Window button on the bottom left of the IDE and selecting WSL. Once connected to WSL, you can then open a new terminal and it will show the files you have connected to your WSL environment.

### **_Software-in-the-Loop Environments_**
#### _Ground Control Stations_
Running in-the-loop can be aided by a ground control station, the few that I have used for this project are:
- [MAVProxy](https://firmware.ardupilot.org/Tools/MAVProxy/)
- [QGroundControl](https://docs.qgroundcontrol.com/master/en/qgc-user-guide/getting_started/download_and_install.html)
- [MissionPlanner](https://ardupilot.org/planner/docs/mission-planner-installation.html)

#### _Flight Controller Software_
Building and Installing the flight controller software is **required** for all who wish to run Software-in-the-Loop on their machine. Whether you decide to use Ardupilot or PX4 flight control software, the steps are the same. If you run into issues with any of these steps, especially starting Software-in-the-Loop, consider checking your ground control station downloads.
1. Open Visual Studio Code or Ubuntu.
2. Clone the repository hosting the flight controller software.
3. Download prequisites.
4. Make the SITL package provided by the control software.

Documentation for what I am showing you can be found here:
- [Ardupilot SITL](https://ardupilot.org/dev/docs/sitl-simulator-software-in-the-loop.html)
- [PX4 Simulation](https://docs.px4.io/main/en/simulation/)

Basic examples for this process are:
- [Ardupilot](https://github.com/ArduPilot/ardupilot.git)
```
git clone https://github.com/ArduPilot/ardupilot.git --recursive
cd ardupilot/ArduCopter/
sim_vehicle.py --map --console
```
- [PX4](https://github.com/PX4/PX4-Autopilot)
```
git clone https://github.com/PX4/PX4-Autopilot --recursive
cd PX4-Autopilot/
make px4_sitl_default
```
*For WSL users*
  By default, PX4 SITL outputs data to a localhost IP. Since we are using WSL, you need to retarget this IP to the address windows uses to communicate with WSL.
  1. Open a command prompt as an administrator.
  2. Enter "ipconfig"
  3. Find "Ethernet adapter vEthernet (WSL)"
  4. Copy the listed IPv4 address.
  5. In the WSL terminal, navigate to the PX4-Autopilot/ directory.
  6. Create a new file called run.sh and open it with your text editor of choice.
  7. Edit the contents to say
  ```
    #!/bin/sh
    export PX4_HOME_LAT=
    export PX4_HOME_LON=
    export PX4_HOME_ALT=0
    export PX4_SIM_HOST_ADDR=
    make px4_sitl_default
 ```
  9. Set the PX4_SIM_HOST_ADDR to the copied IP, and the lat and lon to the local coordinates of your test site.
  10. In WSL, type "sh ./run.sh" and the file will launch.

## Unreal Engine Setup
Setting up the Unreal Engine environment is probably the easiest part of this whole process. The steps are:
- Download the [Epic Games Launcher](https://store.epicgames.com/en-US/download)
- Open the Launcher and navigate to the **Unreal Engine** tab in the sidebar
- Go to Library and click the "+" icon by engine versions
- Select UE 4.27 and download it into an SSD location (preferably), if you choose an external storage or a hard drive that is not an SSD it will severely slow down the editor.
- Set the UE 4.27 editor as _current_ if you have other versions installed already.

Make sure you are familiar with the [Unreal Engine Project Structure](https://docs.unrealengine.com/4.27/en-US/Basics/DirectoryStructure/) before trying to _use_ the engine.

## AirSim Setup
Setting up AirSim is easy once you have the correct environment prerequisites satisified. The steps for building AirSim are:
- Open Visual Studio 2022
- Open the _Developer PowerShell_
- Navigate to your C:\Users\"{User}"\source\repos folder
- run the commands:
```
git clone https://github.com/microsoft/AirSim.git --recursive
cd AirSim
build.cmd
```

This will create a folder in your AirSim repo called **Unreal**. This folder will contain a folder called **Plugins**. Once you have created an Unreal Project, copy the entire Plugins folder into the Unreal project directory.

AirSim uses a file called _settings.json_ to specify the simulation environment settings. By default, settings.json is created in C:\Documents\Airsim\settings.json. Personally, I have moved my settings.json file to my Unreal Engine location because I have multiple Unreal Engine versions for separate projects and want the extra control. This location to put the settings.json file is ...\"{UE_4.27}"\Engine\Binaries\Win64\settings.json.

## Integrated Simulation Setup
Setting up the integrated simulation environment should have been done in the environment prerequisites. Therefore, this section will talk about setting up the networking requirements and settings for AirSim to accomplish integrated simulation through Software-in-the-Loop and Hardware-in-the-Loop.

### **_Software-in-the-Loop_**
Software applications open:
- Visual Studio Code running WSL
- Unreal Engine project hosting built AirSim
- QGroundControl for mission planning

Networking Requirements (must allow through firewall):
- TCP Port: 4560
- UDP Control Ports: 14540, 14580
- Get your WSL IP from an elevated command prompt by ```ipconfig``` looking for ipv4 for Windows Subsystem for Linux. Replace the LocalHostIp with this Ip address or else windows will not know where to listen for the SITL data.

Example PX4 SITL _settings.json_ file:
```
{
  "SeeDocsAt": "https://github.com/Microsoft/AirSim/blob/main/docs/settings.md",
  "SettingsVersion": 1.2,
  "SimMode": "Multirotor",
  "ClockType": "SteppableClock",
  "Vehicles": {
    "PX4Drone": {
      "VehicleType": "PX4Multirotor",
      "UseSerial": false,
      "LockStep": true,
      "UseTcp": true,
      "TcpPort": 4560,
      "LocalHostIp": "172.22.240.1",
      "ControlPortLocal": 14540,
      "ControlPortRemote": 14580,
      "Sensors":{
        "Barometer":{
            "SensorType": 1,
            "Enabled": true,
            "PressureFactorSigma": 0.0001825
        }
      },
      "Parameters": {
        "NAV_RCL_ACT": 0,
        "NAV_DLL_ACT": 0,
        "COM_OBL_ACT": 1,
        "LPE_LAT": 47.641468,
        "LPE_LON": -122.140165
      }
    }
  }
}
```

Example Ardupilot SITL _settings.json_ file:
```
REMEMBER TO CREATE AND ADD AN ARDUPILOT SITL FILE TOO
```

### **_Hardware-in-the-Loop_**
Hardware-in-the-Loop is a little more involved. This is not within the scope of our capstone project timeline, so I hope that future iterations of this project can figure that out and fill in this section.
