/* 
Moteur pas a pas (stepper)

Moteur noté MOTEUR_1 
Pour projet B_0105/agitateur

Projet inspiré de http://www.schmalzhaus.com/EasyDriver/Examples/EasyDriverExamples.html


*/

// #define RPMS           104.0
//  On EasyDriver v4.4n one pin commands The direction of the stepper and an other commands the step.  
#define STEP_PIN           9
#define DIRECTION_PIN      8

#define DELAY_MICROSEC     1000
#define SLOW               5  // retour : N fois plus lent

void setup() {               
  pinMode(DIRECTION_PIN, OUTPUT); 
  pinMode(STEP_PIN, OUTPUT); 
  
  digitalWrite(DIRECTION_PIN, LOW); 
  digitalWrite(STEP_PIN, LOW); 

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(DIRECTION_PIN, LOW); 
  digitalWrite(LED_BUILTIN, HIGH);
  
  for (long i = 0; i<= 1000; i ++){
  
  digitalWrite(STEP_PIN, HIGH);
  /* delay(2);   */    /* ms */  
  delayMicroseconds(DELAY_MICROSEC);
  digitalWrite(STEP_PIN, LOW);
  delayMicroseconds(DELAY_MICROSEC);

  }

 /* retour 10 fois plus rapide */
 digitalWrite(LED_BUILTIN, LOW);
 digitalWrite(DIRECTION_PIN, HIGH); 
 for (long i = 0; i<= 1000; i ++){
  
  digitalWrite(STEP_PIN, HIGH);
  /* delay(2);   */    /* ms */  
  delayMicroseconds(DELAY_MICROSEC /SLOW); 
  digitalWrite(STEP_PIN, LOW);
  delayMicroseconds(DELAY_MICROSEC /SLOW);

  }
 digitalWrite(STEP_PIN, HIGH);
 delay(5000);

  
}
