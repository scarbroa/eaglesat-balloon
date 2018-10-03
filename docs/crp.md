# Description of CRP for the balloon test

The Cosmic Ray Payload (CRP) is using the uCAM-III CMOS image sensor, which has
a UART interface and outputs data in raw or JPEG format. JPEG compression would
eliminate any useful information from the images collected, as JPEG operates on
the assumption that high frequency noise is undetectable to the human eye.
Cosmic particles would leave an effect on the sensor that is an imperfection, in
other words, high frequency noise, so JPEG compression would lose any particle
events. The maximum resolution from the sensor configured in raw image mode is
128x128 pixels, so images coming out will be much smaller than we were
originally planning for, which should make interfacing with the sensor and
handling the data much easier. 

The camera sensor's UART interface operates at 3.3V CMOS logic levels, which is
compatible with the Pi's hardware UART. The baud rate operates from 9600 to
3686400 (3.6M) baud. 

Information about the image sensor can be found at the
[product page](https://www.4dsystems.com.au/product/uCAM_III/) and
[datasheet](https://www.4dsystems.com.au/productpages/uCAM-III/downloads/uCAM-III_datasheet_R_1_0.pdf).

## Needs from OBC

The image sensor being used on the balloon test communicates using a UART 
interface. The datasheet describes the command and data protocol in depth, and a
driver of low complexity needs to be written in the software development to make
it easy to interface with. The images collected will be stored in the Linux
filesystem on the Raspberry Pi's SD card and retrieved for analysis with the
recovery of the balloon. Minimal processing on the data may also be completed to
allow reporting of the amount of useful data collected to the ground during
flight. 

## Contact

David Stockhouse, On-Board Computer Subsystem Lead  
[stockhod@my.erau.edu](mailto:stockhod@my.erau.edu)

Connect on [Facebook](https://www.facebook.com/eaglesaterau/).


