# Description of software services required for the balloon test

Complex software systems are described abstractly as a set of services, tasks
that need to be accomplished by the processor. In this system, defining
real-time requirements for the services would be prudent.

Real-time services are requested with periodic scheduling. 

## Required Services

- Read from CRP camera sensor
- Communicate with MDE
- Read from telemetry sensors
- Send updates to ground

## Service Request Rates

### CRP

The goal is to collect as much data as possible, so it would ideally be reading
from the sensor nonstop. But this may be unnecessarily fast. I do not believe
the uCAM-III supports configurable integration time for the images, so it would
then be in our best interest to take as many images as we can, without starving
the system completely of course. This would resemble video capture.

According to the camera sensor
[datasheet](https://www.4dsystems.com.au/productpages/uCAM-III/downloads/uCAM-III_datasheet_R_1_0.pdf),
if the camera doesn't receive a command from the controller for a 15 second
period, it will enter low-power sleep mode. It is recommended that the
controller send a sync command at least every 10 seconds, or disable sleep, but
0.1Hz can be used as a lower bound for the request frequency. However, to best
service the mission, a much higher frequency will most likely be used. 

Frequency: >0.1Hz

### MDE

MDE will produce data slowly. Status information collection could have a period
as slow as minutes, while science data collected could be even slower. It may be
more appropriate to have the MDE payload controller send requests to the main
OBC rather than the other way around.

Frequency: 0.1Hz

### Telemetry

The telemetry instruments are not complicated compared to many other systems
that require interfacing. They may be read as often as their values are expected
to change, so at cruising altitude, quite slowly. 

There is potential that the service frequency may be dynamic based on modes of
operation at different stages in the flight. Perhaps at ascent and descent, it
is much more critical for lots of data from the pressure and temperature sensors
to be collected quickly, potentially multiple times a second. 

At ascent/descent: 10Hz  
At cruising altitude: 1Hz

### COMMS

Dependent on how often status information from the balloon is desired.
Potentially a second-cadence ping would be appropriate, with more status
information at a harmonic frequency which may be much slower.

Frequency: 1Hz

## Contact

David Stockhouse, On-Board Computer Subsystem Lead  
[stockhod@my.erau.edu](mailto:stockhod@my.erau.edu)

Connect on [Facebook](https://www.facebook.com/eaglesaterau/).


