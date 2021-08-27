# External-Interrupts-Atmega328P
This program introduces to basic external interrupts available on Atmega328P MCU

HardWare requirements :

1. Arduino development board with Atmega328P MCU
2. An external switch to provide interrupt (input) in PIN2/PIN3.
3. LED, Resistance (1 kOhm), few jumper wires, Bread board.

Software Requirements :

1. Arduino IDE


Connction steps :

1. Connect one termial of the switch to +5v of Arduino UNO board and other to GND with a resistance(ex. 1 KOhm).

2. Pull down the Interrupt PIN3 (INT1) by connecting it to GND terminal of the switch.

3. Connect anode of the LED to PIN8 of Arduino UNO and cathod to the GND with a resistance

4. Power up the Arduino UNO.

5. Push the switch to see the magic !!!
