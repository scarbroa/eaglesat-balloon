import serial

# Open device
port = serial.Serial("/dev/serial0", baudrate=115200, timeout=3.0)

# Infinite loop to echo user input
while True:

	port.write("\n\rSay something:")
	rcv = port.read(10)
	port.write("\r\nYou sent:" + repr(rcv))

