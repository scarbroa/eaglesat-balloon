# Description of UARTs on the Raspberry Pi

There are three systems on the satellite which require communication through a
UART channel:

- CRP - requires interfacing with the [uCAM-III camera
  sensor](https://www.4dsystems.com.au/product/uCAM_III/). Configurable baud
rate up to 3.6M baud. 
- MDE - requires interfacing with the UART, and COMMS.

The Raspberry Pi has 2 hardware UARTs, one is the PL011, a seemingly very
capable peripheral, which can achieve a baud rate in the range of the max
possible by the camera sensor, and the other is the miniUART, which is much less
capable but still useful for lower-bandwidth communications, such as with MDE or
COMMS. Since we have

## Useful Sources

[Rasperry Pi Documentation on
UART](https://www.raspberrypi.org/documentation/configuration/uart.md)

[UART module on the ARM processor used in the
Pi](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.ddi0183g/index.html)

## Contact

David Stockhouse, On-Board Computer Subsystem Lead  
[stockhod@my.erau.edu](mailto:stockhod@my.erau.edu)

Connect on [Facebook](https://www.facebook.com/eaglesaterau/).

