---
layout: default
title: "Setup"
---

# Project Setup from Scratch

Setup for this project comes with a few distinct _required and **chronological**_ steps if you wish to replicate the results of the study.
1. Setting up development environment prerequisites
2. Downloading Unreal Engine 4.27
3. Building and Integrate AirSim into Unreal Project
4. Integrated Simulation Setup

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
To run the flight controller Software-in-the-Loop, you must do so through WSL.\

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

## Unreal Engine Setup

## AirSim Setup

## Integrated Simulation Setup