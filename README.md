PATENT DOCUMENTATION
1) Title of the Invention
Wall-Mounted Ultrasonic Parking Assistance and Distance Warning System for Vehicles Without Rear Sensors
________________________________________
2) Field of the Invention 
The present invention relates to the field of automotive safety systems and smart parking assistance technologies. More specifically, the invention pertains to a wall-mounted ultrasonic sensor–based parking guidance system designed to assist drivers while reversing or parking vehicles in confined spaces. The system measures the real-time distance between the rear of a vehicle and a fixed structure such as a wall using ultrasonic sensing technology. It provides visual and audio warnings to the driver through LEDs, an LCD display, and a buzzer. This invention particularly benefits vehicles that are not equipped with factory-installed reverse sensors or cameras, thereby improving parking safety and reducing accidental damage.
________________________________________
3) Background of the Invention and Related Prior Art 
Parking a vehicle in confined spaces is a common task faced by drivers in residential garages, parking lots, and commercial complexes. Despite advancements in automotive technology, a large number of vehicles on the road still lack advanced parking assistance features such as reverse cameras, ultrasonic parking sensors, or automated parking systems. This is especially true for older vehicles and entry-level cars, which often rely solely on the driver's judgment and rear-view mirrors while reversing.
One of the primary challenges faced by drivers during parking is the limited visibility of the area behind the vehicle. Blind spots at the rear side make it difficult for drivers to accurately estimate the distance between the vehicle and obstacles such as walls, pillars, other vehicles, or objects placed in parking spaces. As a result, drivers frequently misjudge the distance and unintentionally collide with nearby obstacles. These minor collisions often lead to scratches, dents, and structural damage to the vehicle, as well as damage to surrounding property.
Various technologies have been developed to address this issue. Many modern vehicles are equipped with rear-view cameras, ultrasonic parking sensors, or 360-degree camera systems. These systems provide drivers with visual feedback or audible alerts when the vehicle approaches an obstacle. However, such systems are typically integrated into the vehicle during manufacturing and require specialized installation, wiring, and calibration. Retrofitting these systems into older vehicles can be expensive and technically complex.
Another limitation of existing solutions is that they are vehicle-mounted, meaning each individual vehicle must have its own sensors and monitoring system installed. In locations where multiple vehicles use the same parking area, installing parking assistance equipment on each vehicle becomes inefficient and costly. Furthermore, drivers of visiting vehicles or vehicles without installed systems continuse to face the same parking challenges.
Some garages use simple physical indicators such as hanging tennis balls or floor markings to guide drivers. However, these methods lack precision and cannot dynamically adapt to different vehicle sizes or distances.
The present invention addresses these limitations by introducing a wall-mounted parking assistance system that operates independently of the vehicle. Instead of installing sensors on the vehicle, the system is mounted on a wall or fixed structure near the parking space. The system uses an ultrasonic sensor to detect the distance of an approaching vehicle and provides immediate feedback to the driver.
The proposed system includes a microcontroller-based processing unit, an ultrasonic distance sensor, visual indicators using coloured LEDs, an audio warning system, and a real-time distance display using an LCD module. As the vehicle approaches the wall, the system automatically measures the distance and informs the driver whether the vehicle is at a safe distance, caution distance, or danger distance.
This approach makes the solution cost-effective, easy to install, and suitable for multiple vehicles, making it particularly useful in residential garages, apartment parking spaces, commercial parking areas, and educational institutions.
________________________________________
4) Summary of the Invention
The present invention provides a wall-mounted ultrasonic parking assistance system designed to prevent vehicle collisions while reversing or parking. The system utilizes an ultrasonic distance sensor connected to a microcontroller to measure the distance between the vehicle and a wall or obstacle.
As a vehicle approaches the wall, the ultrasonic sensor continuously measures the distance and sends the data to the microcontroller. The microcontroller processes the data and activates different warning mechanisms depending on the measured distance.
The system includes:
•	Green LED indicating a safe distance
•	Yellow LED indicating caution
•	Red LED indicating danger
•	Audio buzzer providing variable warning beeps
•	16×2 LCD display showing real-time distance information and safety status
When the vehicle is far from the wall, the system displays a safe message with a green indicator and no sound. As the vehicle gets closer, the yellow LED activates and the buzzer begins slow beeping. When the vehicle reaches a dangerous proximity, the red LED lights up, and a continuous alarm sound is produced.
The system is powered and controlled using an Arduino Uno microcontroller, making the design simple, cost-effective, and easily replicable.
________________________________________
5) Detailed Description of the Invention with Accompanying Drawings
System Overview
The invention consists of a wall-mounted electronic system that monitors the distance between a vehicle and a wall during parking. The system integrates sensing, processing, and output modules to provide real-time feedback to the driver.
Main Components
1.	Arduino Uno Microcontroller
2.	Ultrasonic Sensor (HC-SR04)
3.	16×2 LCD Display
4.	Three LEDs (Green, Yellow, Red)
5.	Buzzer for audio alerts
6.	220 Ohm resistors
7.	Potentiometer for LCD contrast adjustment
8.	Jumper wires for electrical connections
________________________________________
Working Principle
Distance Measurement
The HC-SR04 ultrasonic sensor measures distance by emitting ultrasonic sound waves and measuring the time taken for the echo to return after reflecting from the vehicle.
Distance is calculated using the formula:
Distance = (Speed of Sound × Time) / 2
The Arduino continuously receives this echo time and converts it into distance measurements.
________________________________________
Microcontroller Processing
The Arduino processes the measured distance and compares it with predefined threshold values. Based on these values, the system determines whether the vehicle is in:
1.	Safe zone
2.	Caution zone
3.	Danger zone
________________________________________
Visual Indication System
The system uses three coloured LEDs:
Green LED
•	Indicates safe distance
•	Vehicle is far from the wall
Yellow LED
•	Indicates caution
•	Vehicle is approaching the wall
Red LED
•	Indicates danger
•	Vehicle is very close to the wall
________________________________________
Audio Warning System
The buzzer produces different sound patterns:
Safe Distance
•	No sound
Caution Zone
•	Intermittent beeps
•	Beeping speed increases as distance decreases
Danger Zone
•	Continuous sharp beep
________________________________________
LCD Display Module
The 16×2 LCD display shows:
•	Real-time distance between vehicle and wall
•	Safety status (Safe / Caution / Danger)
Example display:
Distance: 50 cm
Status: SAFE 
________________________________________
Installation
The system is installed on a wall facing the parking area at an appropriate height so that the ultrasonic sensor directly faces the rear of the approaching vehicle.
When the driver reverses the vehicle toward the wall, the system automatically detects the vehicle and begins providing feedback.
________________________________________
Operational Flow
1.	System powers on.
2.	Ultrasonic sensor begins continuous distance measurement.
3.	Distance data is sent to the Arduino.
4.	Arduino processes distance values.
5.	Output devices activate according to predefined thresholds.
6.	LEDs, buzzer, and LCD display guide the driver during parking.
________________________________________
6) Advantages of the Invention 
The proposed invention offers several practical advantages over conventional parking assistance systems.
One of the major advantages is that the system is vehicle independent. Unlike traditional parking sensors that must be installed on each vehicle, the proposed system is mounted on the wall of a parking space. This allows multiple vehicles to benefit from the system without requiring modifications to individual vehicles.
Another important advantage is cost effectiveness. The system uses widely available electronic components such as an Arduino microcontroller and ultrasonic sensors, making it affordable and accessible for residential and commercial use.
The system also provides real-time feedback through multiple output methods including visual indicators, audio alerts, and an LCD display. This multi-layer feedback ensures that drivers receive clear guidance while parking.
Additionally, the system helps reduce accidental damage to vehicles, walls, and surrounding objects by providing early warnings before a collision occurs.
The design is also easy to install and maintain, requiring minimal wiring and no complex calibration procedures. This makes it suitable for homes, apartment complexes, offices, and parking garages.
Furthermore, the invention improves parking safety and driver confidence, particularly for inexperienced drivers or drivers operating vehicles without modern parking assistance technologies.
________________________________________
7) Claims
1.	A wall-mounted parking assistance system comprising an ultrasonic sensor configured to measure the distance between a vehicle and a fixed obstacle.
2.	The system according to claim 1, wherein the ultrasonic sensor transmits distance data to a microcontroller for processing.
3.	The system according to claim 2, wherein the microcontroller evaluates the measured distance and categorizes it into predefined safety zones.
4.	The system according to claim 3, wherein a green LED is activated when the measured distance corresponds to a safe parking distance.
5.	The system according to claim 3, wherein a yellow LED and intermittent audio beeps are activated when the vehicle enters a caution zone.
6.	The system according to claim 3, wherein a red LED and continuous audio alarm are activated when the vehicle reaches a danger zone.
7.	The system according to claim 2 further includes a liquid crystal display configured to show real-time distance and safety status.
8.	The system according to claim 1 wherein the system is mounted on a fixed wall or structure facing a parking area.
9.	The system according to claim 1 wherein the system operates independently of vehicle-mounted sensors.
10.	The system according to claim 1 wherein the system improves parking safety by providing real-time visual and audio feedback to drivers.
________________________________________
8) Abstract 
The present invention relates to a wall-mounted parking assistance system designed to improve vehicle parking safety, particularly for vehicles that lack built-in reverse sensors or cameras. The system utilizes an ultrasonic sensor to measure the distance between a vehicle and a wall or obstacle during the parking process. The sensor continuously transmits distance data to a microcontroller which processes the information and determines the proximity of the vehicle.
Based on the calculated distance, the system activates different warning mechanisms to guide the driver. These include a green LED indicating a safe distance, a yellow LED with intermittent beeping sounds indicating caution, and a red LED with continuous audio alarms indicating dangerous proximity. Additionally, a 16×2 LCD display provides real-time distance readings and safety status messages to the driver.
The system is mounted on a wall facing the parking space, making it independent of vehicle-mounted sensors. This allows multiple vehicles to benefit from the same system without requiring modifications to individual vehicles.
The invention provides a cost-effective, easy-to-install, and reliable solution to reduce parking-related collisions and improve driver awareness during vehicle parking operations.
________________________________________
