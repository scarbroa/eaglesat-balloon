# Description of MDE for the balloon test

The Memory Degradation Experiment (MDE) is running on a dedicated TI TM4C123G
development board (ARM Cortex-M4F). The TM4C will interface to all of its memory
chips, perform its own read and write operations, and communicate any science
data generated to the OBC through UART at 115200 baud (baud rate isn't yet set
in stone, just convenient.)

## Needs from OBC

The OBC just needs to communicate with MDE to send limited control information
and receive all status information science data generated by the experiment. The
interfacing software protocol is as yet undecided. All data received by MDE will
be stored in the Linux filesystem on the Raspberry Pi's SD card and retrieved
for analysis with the recovery of the balloon. 

## Contact

David Stockhouse, On-Board Computer Subsystem Lead  
[stockhod@my.erau.edu](mailto:stockhod@my.erau.edu)

Connect on [Facebook](https://www.facebook.com/eaglesaterau/).

