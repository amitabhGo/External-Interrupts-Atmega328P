/*
 * 
 * 
 */

void setup() {
  // put your setup code here, to run once:

    //SETTING OUTPUT PIN, PIN 8
    DDRB |= (1<<DDB0);

    //SETTING GLOBAL INTERRUPT REGISTER
    SREG |= (1<<7);

    //PIN CHANGE INTERRUPT CONTROL REGISTER, ENABLES ALL PINS FOR INTERRUPT
    PCICR |= (1<<PCIE2);

    //PCMSK2: PIN CHANGE MASK REGISTER 2
    
    PCMSK2 |= (1<<PCINT23);
    
    
  
}

void loop() {
  // put your main code here, to run repeatedly:

}

//INTERRUPT SERVICE ROUTINE
ISR(PCINT2_vect){

    PORTB ^= (1<<PB0);
  
}
