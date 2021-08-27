/*
 *  BASIC EXTERNAL INTERRUPT PROGRAM, REGISTER LEVEL PROGRAMMING
 * 
 *  REGISTERS USED: 
 *            
 *            SREG : STATUS REGISTER : TO CONTROL GLOBAL INTERRUPT FLAG
 *            
 *            EICRA :  EXTERNAL INTERRUPT CONTROL REGISTER A : TO CONTROL THE SENSE OF INTERRUPT (WHEN TO INTERRUPT)
 *                                                             EX: 0 1 ANY LOGICAL CHANGE GENERATES INTERRUPT IN INT1 PIN
 
 *            EIMSK : EXTERNAL INTERRUPT MASK REGISTER : ENABLES INTERRUPTS, INT1 & INT0 (PIN 2,3)
 *            
 *            ISR(INT1_vect) : INTERRUPT SERVICE ROUTINE : HANDLES THE INTERRUPTS ON INT1 (PIN 3)
 *                                                              
 *            DDRB : DATA DIRECTION REGISTER OF PORT B : SETTING PIN 8 AS OUTPUT PIN
 *            
 *            PORTB : PORT REGISTER OF PORT B : SETS 1 OR 0 IN PIN 8
 *            
 *            
 */
void setup() {
  // put your setup code here, to run once:

  //SETTING OUTPUT PIN, (EXTERNAL LED ON PIN 8)
  DDRB |= (1<<DDB0);

  //SETTING GLOBAL INTERRUPT PIN ENABLE, I-BIT 
  SREG |= (1<<7);

  //SETTING TYPE OF INTERRUPT
  EICRA &= (~(1<<ISC11)) | ((1<<ISC10));

  //ENABLE INT1 PIN
  EIMSK |= (1<<INT1);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  
  
}

//INTERRUPT SERVICE ROUTINE FOR INT1
ISR(INT1_vect){

    //TOGGLES THE PIN 8 VALUE 1/0
    PORTB ^= (1<<PB0);
    
}
