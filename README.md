# EagleSat-2 Balloon Test

This repository contains code for the Embry-Riddle Aeronautical University
EagleSat-2 Balloon test flight in October 2018.

Anyone in EagleSat contributing code on the project should follow the style
guide demonstrated in each of the template files. The comment header of each
source file contains the current revision with brief information about the
history of when/why it has been updated in the past. When you make changes,
submit a pull request using Git CLI or GitHub's GUI tools and I will try to make
sure the merge happens without issues arising.

Each directory contains files relevant to that system on the balloon and a main
with Makefile in the directory itself for testing. The working executable will
be built using main and the Makefile in the root directory. 

## Known Problems

- Hardware UART on the Raspberry Pi only operates at 3.3V logic levels, so to
  interface with 5V devices, a level converter will need to be bought or built
from discrete components. 
- The Pi only has 2 hardware UARTs, so to interface with 3+ UART accessible
  devices (COMMS, MDE, CRP sensor, opt. Linux terminal), either a more creative
hardware solution needs to be pursued or we can use a software bit-banged UART
interface, most likely for COMMS because 1200 baud is so slow.

## Contact

Hilly Paige, Project Manager  
[paigeh@my.erau.edu](mailto:paigeh@my.erau.edu)

David Stockhouse, On-Board Computer Subsystem Lead  
[stockhod@my.erau.edu](mailto:stockhod@my.erau.edu)

Connect on [Facebook](https://www.facebook.com/eaglesaterau/).

