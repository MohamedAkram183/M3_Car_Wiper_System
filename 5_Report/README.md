## ABSTRACT:
The automated rain wiper system is used to detect rainfall and activate automobile automatic rain wiper without driver interaction. The system is developed to mitigate driving distractions and allow drivers to focus on their primary task of driving. The distraction eliminated with the development of this product is the manual adjustment of windshield wipers when driving in precipitation. The few seconds that a driver takes their attention off the road to adjust a knob while driving in poor weather conditions could potentially lead to car accidents.The system uses a combination of impedance and rain sensor to detect rain and its intensity. The system contains a controller that takes in the input signals from the sensors and controls the operation of the windshield wipers based on those input signals The aim of this project is to help reduce accidents that happen as a result of the driver intending to clean the windscreen when rain is falling thereby taking the attention of the driver off the road when he or she is switching on and off the wiper. In rainy days we suffer from act of sprinkling of water on front glass of our wheeler. While driving car, driver cannot see on road vehicles. So he tries operating wiper on glass, for that he should often switch on for operating wiper and because of this it might cause vehicle accident. If we apply any kind of sensor on glass which senses the act of sprinkling water, by automation the wiper will be operating automatically. When the water hit the sensor, it will send signal to the system thus moving the wiper motor. Once the sensor did not detect any water, the wiper will stop. This will reduce the weaknesses which have been stated at beginning. Additional plan to this invention is to make the wiper automatically push up from the windscreen when the engine shut off.

## INTRODUCTION:

Wiper is an essential component that used to wipe the raindrops or any
water from the windscreen. Wipers are designed and made to clear the water
from a windscreen. Most of cars have two wipers on the windscreen, one on the
rear window and the other on each headlight. The wiper parts visible from
outside the car are the rubber blade, the wiper arm holding the blade, a spring
linkage, and parts of the wiper pivots. The wiper itself has about six parts called
pressure points or claws that are small arms under the wiper [1]. Figure 1 Basic
Wiper Mechanism Diagram [1] Existing system manually used control stalk to
activate wiper and the process of pulling up wiper is difficult to be handled. The
driver needs to switch on and off the control stalk and it will reduce the driver’s
concentration during the driving. Thus, this system is proposed to solve all these
problems. The concept of this wiper system is similar with other conventional wiper, yet this system will be upgraded to an automatic control system by using
a controller. Whenever the water hit a dedicated sensor that located on
windscreen, it will send a signal to move on the wiper motor. Once water is not
detected by sensor, the wiper will automatically stop. This will help the driver
to give more concentration and reduce the car accident probability. In this
project, there were two innovations reviewed as the literature review. The two
were designed with different concept and operating mechanism however with
same objective of working principle of the car wiper. The rain sensor was a
highly versatile device for automatic wiping of vehicle windscreen when it is
wet due to moisture, raindrops or even mud [2]. It worked by reflecting
harmonious light beams within the windscreen. When raindrops fall onto the
windscreen, this harmony light is been disturbed and creating a drop in the light
beam intensity. The system then activated the wipers to be operated in full
automatic mode. It has a response time at 0.1 seconds. It allowed for a quick
reaction when it is a sudden splashes of water that will make the driver totally
‘blinds’ when the situation happened. With the automatic wiper, the driver can
avert from the risk of an accident. The automatic wiper is important during the
heavy traffic e.g. in town, city, school zone and other public place. A driver
may be subjected to many distractions with bad weather, dangerous road
conditions and fatigue. The Rain Sensor reduced the driver’s burden by making
the driving more comfortable. Trailing a wet car is no longer a nuisance as
detection of even 0.005 milliliters of water is possible.
OBJECTIVE:
 The main objective of this project is through ARM microcontroller to design
a wiper control system. The project mainly insists on controlling the motion of
wiper based on frequency and time period (in seconds).
BENEFITS:
• It is used in automatic wind shield wipers.
• In real time, rather than switching automatically, hands free callings is userfriendly.
• It provides high accuracy since it depends on the frequency
• It is very quick to compute the detect the object.
• Safety of the user is ensure while driving and it is convenient to drive in any
seasonal changes.
• It has a quick response time(efficiency).

4 W’S AND 1H:
Who?

* With view of sensing the obstacle wiper is control system is being user by
all heavy vehicle/automobile user's (like car, truck, train, chopper).It can
help people driving vehicles in terrain, roads, hill station and highways.
What?
* 3 LEDS are used in the wiper system.

When?
* It is used when the key ignition is turned ON/OFF where three LED's are
turned ON/OFF depending the frequency.

Where?
* IT is used in heavy vehicle/automobile

How?
* IT can be achieved throught the analog to digital convertor, LEDS,
timer's and so on.

SWOT ANALYSIS:
STRENGTH:
a) Automatic control of wiper system.
b) Independancy by setting the frequency once, rather than relying on user’s
instruction.
c) operating principle is very easy
d) Can prevent faults, and can prevent accidents.
e) Easy to construct and cheaper in cost with long durability.
WEAKNESS:
a) May not detect all objects.
b) Can produce false reading at certain occasion.
c) Its has special physical limits (like covers only a certain range).
d) Qute high cost for operations.
e)Timing interval may vary(i.e., start time of wiper)

OPPORTUNITIES:
* Technology maturity can reduce the system cost and help the user to cope
with the real time environmental issues. The automobile to monitor if any
obstacle is to be detected in the travelling path is to be ensured to avoid
any accidents by turning on the wiper.

HIGH LEVEL REQUIREMENTS:

S.no High level requirement Description Status

| **High Level Requirement** | **Description** | **Status** |
| --- | --- | --- | --- | --- |
| TD\_01 | Button Press | Input = 2 sec | Red LED ON  | PASS |
| HLR\_01  STM32CubeIDE Implemented
2 HLR2 Cygwin Implemented
3 HLR3 Qemu Implemented
4 HLR4 OS Windows Implemented
5 HLR5 Hard-Disk Implemented
6 HLR6 4 GB RAM Implemented

LOW LEVEL REQUIREMENTS:
S.no Low level
requirements Description Status

1 LlR1 Red LED ON Implemented
2 LlR2 Blue LED frequency
1Hz Implemented
3 LlR3 Green LED frequency
4Hz Implemented
4 LLR4 Orange LED frequency
8Hz Implemented
5 LLR5 Red LED OFF Implemented


![Flowchart](https://user-images.githubusercontent.com/77711240/168219418-8b7c6ba0-7e5b-4cd1-9d2e-b7ab54f23022.jpeg)
![Block daigram](https://user-images.githubusercontent.com/77711240/168219472-addbf9c0-3d29-49d2-b5f4-8acf68b6a484.jpeg)

