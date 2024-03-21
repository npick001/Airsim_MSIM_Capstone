---
layout: default
title: "Hardware Specifications"
---

## Drone Hardware Specifications
We have developed a simulation framework to allow for any drone hardware that meets the specifications to be quickly integrated for behavioral testing, reinforcement learning, or flight tuning to be done virtually. The goal is to reduce the cost and risk of testing these machines and to reduce the impact on the environment of crashes, mistuned flight controller settings, and speed up development.

### _Supported Hardware_
To my knowledge (limited as it may be), each drone that you want to do _Hardware-in-the-Loop_ with AirSim **must** be running the PX4 flight control software. If you find a way with Ardupilot, please let [me](contact.md#nicholas-pickering) know and I will update this documentation to reflect it. See [here](https://ardupilot.org/dev/docs/hitl-simulators.html) for why I believe Ardupilot does not support Hardware-in-the-Loop.

_Minimum Necessary Hardware_
- Barometer
- Magnetometer
- Accelerometer
- Pixhawk Flight Controller