# TITLE OF THE PROJECT:
SOLAR TRACKING SYSTEM FOR AUTOMATED IRRIGATION

# ABSTRACT:
As the non-renewable energy resources are decreasing, use of renewable resources for producing electricity is increasing. Solar panels are becoming more popular day by day. Solar panel absorbs the energy from the Sun, converts it into electrical energy and stores the energy in a battery.
The position of the Sun with respect to the solar panel is not fixed due to the rotation of the Earth. For an efficient usage of the solar energy, the Solar panels should absorb energy to a maximum extent. This can be done only if the panels are continuously placed towards the direction of the Sun. So, solar panel should continuously rotate in the direction of Sun.
The stored energy can be utilized when required or can be used as a direct alternative to the grid supply. Utilization of the energy stored in batteries is use for irrigation for the forms, automatic light and in the fields where the application can be applied.
MOTIVATION BEHIND THE PROJECT:
In this advancing era of technology, we are more concerned about the advancements made in technology rather than thinking upon the alternative sources of energy.
Remote Villages Where the Facility of Power Connections are not Efficient and also to encourage the use of Renewable Energy sources to Produce Electricity, this motivates us to help them by utilizing the technology.
The Initial Capital Cost of Building Any Solar Power Plant, Operating Costs Are Extremely Low Compared to Existing Power Technologies and one time investable.
Solar Power Is Pollution-Free During Use. Production End-Wastes and Emissions Are Manageable Using Existing Pollution Controls which doesn’t affect the environment.

# OBJECTIVES
	Efficient Use of Solar Energy by Solar Tracking System.

	Power system and backup from solar.

	Sensor based irrigation which is directed by controller.

	Automated lights work during darkness.

	To minimize water waste from automated irrigation systems, we have improved irrigation controllers, which senses the soil.

	The overall system uses the energy from the stored solar power energy and acts power backup.

# METHODOLOGY
1.FLOW CHART
![image](https://user-images.githubusercontent.com/46984887/157263602-6ed60832-1870-4cf0-9025-0690b0ae0d06.png)


	To begin with turn on the power and check Arduino uno and initialize the Arduino uno, check all the port connection.
	Then it is applied to the solar panel where solar panel rotates depending on the LDR intensity. Here on two sides of solar panel LDR is connected that is LDR1 and LDR2, when lights fall on LDR1, it rotates towards LDR1 and when lights fall on LDR2, it rotates towards LDR2. When light fall equally on both the LDR’s then the rotation stops.
	The energy which is produced from the solar panel is stored in the battery and utilized wherever it is required.
	From battery, it is applied to Moisture sensor. Here sensor, solenoid valve and relay are connected. When soil is dry, valve turn on else states in the off state.
	From battery itself, the charge is given to automatic lights.
	When there is no light on the LDR the intensity drops and automatically lights get turn ON and when slowly lights start falling on LDR the lights get off.
 
                                   

# ADVANTAGES

1)	Energy output increases up to 30-40% than normal stationary arrangements.
2)	Ability to tracking the sunlight at any weather.
3)	High degree of accuracy.
4)	Less power consumption by internal circuit and motor.
5)	Reduce the usage of power from power grid.
6)	Installation is easy and operates automatically.


# APPLICATIONS

1)	Can be used for small & medium scale power generations.
2)	Remote Places.
3)	In Water treatment technologies.
4)	In forming lands.
5)	In home Appliances.
6)	In smart city projects.

#BLOCK DIAGRAM AND ITS DESCRIPTION

#Explanation for The Flow of Each Block

The block diagram of solar tracking system for automated irrigation using microcontroller (Arduino uno) is shown in the Figure when power supply is turned on, the controller initializes.
  
  ![image](https://user-images.githubusercontent.com/46984887/157263783-a4acc4e9-ec8a-4c2a-a17f-a1c8fc0cb58d.png)
                                  
                                    
                    
The processor checks for the availability of the solar energy with the help of LDR which is used for sensing the sunlight. Solar panel is mounted on dc motor to expose to light according to sun movement. When no solar energy is available, the system runs on a battery.
The block consists of a moisture sensor which is used to sense soil of the farm field. Relay is connected to the solenoid valve which starts pumping water when the moisture sensor senses the land as dry. Moisture sensor is used for sensing the soil moisture of the crop land to feed them water with the help of 3-phase power unit, whenever the land gets dried below the threshold level of moisture of land which is suitable for the growth of crops.
The temperature sensor senses the surrounding temperature of the farm. When it starts raining, the pump motor will stop pumping the water to the field.
Using the stored energy, automatic lights are turned on and off. When there is no light on LDR, LED'S glow and when light fall on LDR, LED’S gets turned off. It can be installed near farm, house etc.
# WORKING
•	Solar panel is used to track the sunlight, by means of LDR where LDR is connected to the solar panel, depending on the intensity of LDR it rotates. Solar panel is rotated from the DC motor which is initialized from the Arduino uno through motor module driver.
•	It rotates both clockwise and anticlockwise. The energy generated from the solar is stored in the battery and it utilizes it wherever energy is required.
•	Moisture sensor is used to sense the soil, which is connected to the solenoid valve. Valve will turn on when the soil is dry and remains off when soil is wet.
•	For solenoid valve, the supply is given from the charge stored in the battery from solar panel.
•	The charge which is stored in the battery is also given to the automatic lights that is to the LED. It is turned on, when it is dark that is when the intensity drops and LED remains off when light fall on LDR.


# RESULTS
This model involves solar panel, Arduino uno, moisture sensor, solenoid valve, battery, relay, motor module driver, DC motor, LDR, led, resistor and sun light as source. Here dc motor is attached to the solar panel, to rotate the panel in clockwise and anticlockwise it is driven by motor module driver that is IC l293d is as shown. The rotation solar panel takes place depending on the intensity of LDR as there are two LDR, it rotates towards on which LDR intensity drops. The energy collected from solar panel is stored into the battery and utilized wherever it required like for moisture sensor, for automated lights, relay etc.
The moisture sensor will sense the soil condition that is soil is dry or wet. If soil is wet, the solenoid valve will be in off state and if soil is dry, it senses the level and turns the valve where the solenoid valve is connected to tank through pipe and water flow through it. As and when soil gets wet the valve will turn off. For this connections power supply is given from battery. When there is no sun light fall or light fall on LDR it becomes darker and the automated lights gets turn on.The turn on of lamp, as it gets darker the lamp utilizes the solar energy and makes light to turn on.

            


# STEP 1: Connection of solar panel to dc motor and battery
![image](https://user-images.githubusercontent.com/46984887/157263955-7c98b629-8286-4973-a4bc-92756bece448.png)

Solar panel is connected to the dc motor and to the battery. Here 200 rpm dc motor is 
used and 12v battery is used.

# STEP 2: LDR connection to solar panel
![image](https://user-images.githubusercontent.com/46984887/157264068-3fca7c09-07da-4761-b7d0-cbd856412204.png)

LDR is connected to solar panel on both sides of panel when light fall on the LDR, the motor rotates towards that LDR that is clockwise and when light fall other LDR it rotates in anticlockwise.

# STEP 3: Moisture sensor to Arduino uno and to valve
![image](https://user-images.githubusercontent.com/46984887/157264130-d49fcf40-1394-4ac0-8832-e1a1787a3ab9.png)

Moisture sensor is connected to Arduino uno and required is dumped into it. A connection from water tank is given to the solenoid valve and relay is connected to the solenoid valve to turn on and off the valve.
Here Moisture sensor is kept in wet place that time valve will in off. As and when moisture sensor is dry or taken out from the wet place, the valve will be turned on and water flows through the pipe until it is required and as it reaches maximum the solenoid valve will be off.

#STEP 4: Automated lights
![image](https://user-images.githubusercontent.com/46984887/157264215-78921c84-69d8-458a-9f4d-07357a35abec.png)
![image](https://user-images.githubusercontent.com/46984887/157264264-f79ce890-0922-459c-accd-53aed872f868.png)

In automated lights, LDR is used and here LED is used as light automation purpose.

# CONCLUSION AND FUTURE SCOPE

	The project is carried out using Arduino uno. This project finds application in rural areas and domestic agricultural field.
	Solar energy can be utilized efficiently and to save the renewable resources. By this people will be benefited as it is one time investment.
	Solar panel tracks the sun light by the rotation of Dc motor in clockwise and anticlockwise. It rotates depending the intensity of LDR.
	In civilian domain, this can be used to ensure faithful irrigation of farm field, since we have the option of finding out moisture level of soil in a particular area.
	The automated irrigation system implemented was found to be feasible and cost effective for optimizing water resources for agricultural production. This irrigation system allows cultivation in places with water scarcity thereby improving sustainability.
	Here moisture sensor senses the soil and depending soil condition the solenoid valve gets turned on or off.
	In automated lights, we are using LED’S for demo purpose where solar energy will be utilized to glow the lights and the energy will be stored in the battery.
	It can be installed near farm, house, streets…. Etc.

# FUTURE SCOPE

	Solar panel can be operated in double axis for better utilization.
	The farmer can monitor from any place, and also can protect his crop. The user can send a SMS message from anywhere in the world to operate this equipment.
	It can be set to 2 modes that is manual mode and automatic mode.
	Unlike most automated irrigation systems which result in leaching and run-off, our system had very little or no wastage of water.
	Regardless of the time of the day, the system irrigated the plants when the substrate moisture fell below the target level. This irrigation approach can easily be scaled up for use in greenhouses or nurseries.
	Lights will be turned on based on intensity that as it is getting dark slowly lights should and vice versa.

# REFERENCES

	Aditya Mukherjee, Nirmalya Roy, Aditya Kumar, Chandra Prakash, Sanskriti, Nirmal Kumar Rout, "Maximum Utilisation of Solar Energy for Smart Home Lighting System", Recent Innovations in Electrical Electronics & Communication Engineering (ICRIEECE) 2018 International Conference on, pp. 3286-3290, 2018.
	Christian, M. "The history of the invention of the solar panel summary". Engergymatters.com. Energymatters.com. Retrieved 25 January 2019.
	"Arduino UNO for beginners - Projects, Programming and Parts". makerspaces.com. Retrieved 4 February 2018
	"Photo resistor - Light Dependent Resistor (LDR) » Resistor Guide". resistorguide.com. Retrieved 19 April 2018
	Gaikwad, Pramod. "Galvanic Cell Type Sensor for Soil Moisture
Analysis". Analytical Chemistry. 87: 7439–7445. doi:10.1021/acs.analchem.5b01653
	"April 25, 1954: Bell Labs Demonstrates the First Practical Silicon Solar Cell". APS News. American Physical Society. 18 (4). April 2009.


