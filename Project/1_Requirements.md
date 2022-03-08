# Introduction

As the non-renewable energy resources are decreasing, use of renewable resources for producing electricity is increasing. 
Solar panels are becoming more popular day by day. Solar panel absorbs the energy from the Sun, converts it into electrical energy and stores the energy in a battery.

The position of the Sun with respect to the solar panel is not fixed due to the rotation of the Earth. For an efficient usage of the solar energy, the Solar panels should absorb energy to a maximum extent. 
This can be done only if the panels are continuously placed towards the direction of the Sun. So, solar panel should continuously rotate in the direction of Sun.

The stored energy can be utilized when required or can be used as a direct alternative to the grid supply. 
Utilization of the energy stored in batteries is use for irrigation for the forms, automatic light and in the fields where the application can be applied.

# Requirements

# High Level Requirements

|ID|Description|Catogary|
|-----|--------|---------|
|HL01 |The rotation of panel takes place depending on the intensity of LDR,it rotates(clockwise&anti-clockwise) towards on which LDR intensity drops|Technical|
|HL02|The moisture sensor will be able to sense the soil condition that is soil is dry or wet|Technical|
|HL03|panel when light fall on the LDR, the motor rotates towards that LDR that is clockwise and when light fall other LDR it rotates in anticlockwise|Technical|



# Low Level Requirements

|ID|Description|Catogary|
|-----|--------|---------|
|LL01|The energy collected from solar panel is stored into the battery|Technical|
|LL02|utilized wherever it required like for moisture sensor, for automated lights, relay etc|Technical|
|LL03|When there is no sun light fall or light fall on LDR it becomes darker and the automated lights gets turn on|Technical|

# Objectives

	Efficient Use of Solar Energy by Solar Tracking System.

	Power system and backup from solar.

	Sensor based irrigation which is directed by controller.

	Automated lights work during darkness.

	To minimize water waste from automated irrigation systems, we have improved irrigation controllers, which senses the soil.

	The overall system uses the energy from the stored solar power energy and acts power backup.

# SWOT Analysis

# S-Strength
Efficient Use of Solar Energy by Solar Tracking System.

# W-Weakness
Sensor based irrigation which is directed by controller.

# O-Oppturnity
The stored energy can be utilized when required or can be used as a direct alternative to the grid supply. Utilization of the energy stored in batteries is use for irrigation for the forms, automatic light and in the fields where the application can be applied.

# T-Threats
The Initial Capital Cost of Building Any Solar Power Plant, Operating Costs Are Extremely Low Compared to Existing Power Technologies and one time investable.

# 4 W's And 1H

# Who
In civilian domain, this can be used to ensure faithful irrigation of farm field, since we have the option of finding out moisture level of soil in a particular area.

# Why
* To minimize water waste from automated irrigation systems
* As the non-renewable energy resources are decreasing

# What
Solar panel is used to track the sunlight with respect to rotation of sunlight,the energy generated from the solar is stored in the battery and it utilizes it wherever energy is required.

# Where
This project finds application in rural areas and domestic agricultural field.

# How
* Solar panel is used to track the sunlight, by means of LDR where LDR is connected to the solar panel, depending on the intensity of LDR it rotates.
* Solar panel is rotated from the DC motor which is initialized from the Arduino uno through motor module driver.
* Moisture sensor is used to sense the soil, which is connected to the solenoid valve. Valve will turn on when the soil is dry and remains off when soil is wet.
* •	For solenoid valve, the supply is given from the charge stored in the battery from solar panel.
