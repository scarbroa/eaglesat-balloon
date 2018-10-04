# Description of COMMS for the balloon test

The COMMS system will be responsible for communicating telemetry and status
information to the ground, but no science data will be generated.

## Needs from OBC

It is possible that COMMS will not be receiving any commands from the ground, so
that the balloon only needs to transmit, not receive. That is something I still
need to double check with Austin. The interface to COMMS is a UART at 1200 baud.
Because the Raspberry Pi only has two hardware UARTs, it is possible that this
UART will need to be created in software, especially since it is running at such
a slow baud rate.

To terminate a packet to be sent, I believe only a carriage return '\r'
character is needed. In PuTTY, the radio seems to send a '\n\r' whenever it
echoes back to the terminal or sends a any other data. No other delimiters are
necessary for the protocol, but it would be useful for understanding data on the
ground if packets included delimiters between unrelated data components. Austin
has recommended using a comma. 

## Contact

David Stockhouse, On-Board Computer Subsystem Lead  
[stockhod@my.erau.edu](mailto:stockhod@my.erau.edu)

Connect on [Facebook](https://www.facebook.com/eaglesaterau/).

