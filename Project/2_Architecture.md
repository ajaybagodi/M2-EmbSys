# Design

# Structural Diagram(Circuit Diagram)

![ckt diagram](https://user-images.githubusercontent.com/46984887/157203237-0610a866-6fb9-4335-8348-48bebb4f74e7.png)

# Description
The Figure above is the circuit diagram of solar tracking system for automated irrigation.
It is rig upped in proteus tool, here in place solar and valve buzzer are used and all components and connected according to requirement and inputted to the Arduino uno.
In fig, there are 3 LDR’s which is connected in series with it, for automatic lights.Moisture sensor is used to sense the soil, here if soil is dry motor rotates or else the motor doesn’t ON.

In circuit diagram, solar tracking system is shown in form of Motor. When light fall on LDR towards that side motor rotates that is clockwise or anticlockwise.
The program for circuit is written and it will be dumped into Arduino uno.
When light fall on LDR, it rotates solar panel and charges the battery, and the charged battery is utilized everywhere that is for moisture sensors, automatic lights etc.




# Behavoiural Diagram(Block Diagram and Flow Chart)

# 1.Block Diagram
![image](https://user-images.githubusercontent.com/46984887/157201537-d5605ace-939e-4f10-8621-93c384f58431.png)

# Description
The processor checks for the availability of the solar energy with the help of LDR which is used for sensing the sunlight. Solar panel is mounted on dc motor to expose to light according to sun movement. When no solar energy is available, the system runs on a battery.
The block consists of a moisture sensor which is used to sense soil of the farm field. Relay is connected to the solenoid valve which starts pumping water when the moisture sensor senses the land as dry. 
Moisture sensor is used for sensing the soil moisture of the crop land to feed them water with the help of 3-phase power unit, whenever the land gets dried below the threshold level of moisture of land which is suitable for the growth of crops.
The temperature sensor senses the surrounding temperature of the farm. When it starts raining, the pump motor will stop pumping the water to the field.
Using the stored energy, automatic lights are turned on and off. When there is no light on LDR, LED'S glow and when light fall on LDR, LED’S gets turned off. It can be installed near farm, house etc.


# 2.Flow Chart
![image](https://user-images.githubusercontent.com/46984887/157202202-e6da906d-211a-4e6d-92ff-99213bae47c6.png)

# Description
	To begin with turn on the power and check Arduino uno and initialize the Arduino uno, check all the port connection.
	Then it is applied to the solar panel where solar panel rotates depending on the LDR intensity. Here on two sides of solar panel LDR is connected that is LDR1 and LDR2, when lights fall on LDR1, it rotates towards LDR1 and when lights fall on LDR2, it rotates towards LDR2. When light fall equally on both the LDR’s then the rotation stops.
	The energy which is produced from the solar panel is stored in the battery and utilized wherever it is required.
	From battery, it is applied to Moisture sensor. Here sensor, solenoid valve and relay are connected. When soil is dry, valve turn on else states in the off state.
	From battery itself, the charge is given to automatic lights.
	When there is no light on the LDR the intensity drops and automatically lights get turn ON and when slowly lights start falling on LDR the lights get off.


