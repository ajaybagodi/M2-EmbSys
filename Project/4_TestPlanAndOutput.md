# TEST PLAN

# HIGH LEVEL TEST PLAN

|TEST_ID|Description|I/P|Exp O/P|Actual Output|Type Of Test|
|-------|-----------|---|-------|-------------|------------|
|HL01|Solar panel trackS the sunlight, by means of LDR where LDR is connected to the solar panel, depending on the intensity of LDR it rotates|Valid|Correct|Correct|Technical|
|HL02|The energy generated from the solar is stored in the battery and it utilizes it wherever energy is required|Valid|Correct|Correct|Technical|
|HL03|Moisture sensor sense the soil, which is connected to the solenoid valve. Valve will turn on when the soil is dry and remains off when soil is wet|Valid|Correct|Correct|Technical|
|HL04|For solenoid valve, the supply is given from the charge stored in the battery from solar panel|Valid|Correct|Correct|Technical|


# LOW LEVEL TEST PLAN
|TEST_ID|Description|I/P|Exp O/P|Actual Output|Type Of Test|
|-------|-----------|---|-------|-------------|------------|
|LL01|The charge which is stored in the battery is also given to the automatic lights that is to the LED|Valid|Correct|Correct|Technical|
|LL02|It is turned on, when it is dark that is when the intensity drops and LED remains off when light fall on LDR|Valid|Correct|Correct|Technical|

# Above function have been tested and working accordingly






# OUTPUT

# Solar Tracking System For Automated Irrigation
![image](https://user-images.githubusercontent.com/46984887/157260582-bffd9b95-d485-4521-a14d-5f29e31916ed.png)

# Step1: Connection of solar panel to dc motor and Battery
![image](https://user-images.githubusercontent.com/46984887/157260899-58b5907e-9739-4674-8be8-fb105b181f02.png)
Solar panel is connected to the dc motor and to the battery. Here 200 rpm dc motor is used and 12v battery is used.

# Step 2: LDR connection to solar panel
![image](https://user-images.githubusercontent.com/46984887/157261216-2175cf2b-5c1d-4a30-8e4f-e03c1ca20f54.png)
LDR is connected to solar panel on both sides of panel when light fall on the LDR, the motor rotates towards that LDR that is clockwise and when light fall other LDR it rotates in anticlockwise.

# Step 3: Moisture sensor to Arduino uno and to valve
![image](https://user-images.githubusercontent.com/46984887/157261483-f4fbccd7-a211-4786-ac1c-03a1e95a49fd.png)
Moisture sensor is connected to Arduino uno and required is dumped into it. A connection from water tank is given to the solenoid valve and relay is connected to the solenoid valve to turn on and off the valve.
Here Moisture sensor is kept in wet place that time valve will in off. As and when moisture sensor is dry or taken out from the wet place, the valve will be turned on and water flows through the pipe until it is required and as it reaches maximum the solenoid valve will be off.

# Step 4: Automated lights
![image](https://user-images.githubusercontent.com/46984887/157261740-1662fae9-660b-453a-9b51-4501e8ed0f08.png)
![image](https://user-images.githubusercontent.com/46984887/157261805-2b772e93-f6ca-47f1-afa3-912939a3e0c9.png)
In automated lights, LDR is used and here LED is used as light automation purpose.
The Figure shows LED off because there is light fall on LDR and when there a shadow on LDR, LDR will glow that is when it becomes darker led will glow as shown.








