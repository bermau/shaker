/* 
Moteur pas a pas (stepper)

Moteur noté MOTEUR_1 
Pour projet B_0105/agitateur

*/
void setup() {               
  pinMode(8, OUTPUT); /* Direction */
  pinMode(9, OUTPUT); /* pas */
  digitalWrite(8, LOW); /* Direction */
  digitalWrite(9, LOW); /* Step */

    // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(8, LOW); /* Direction */
  for (long i = 0; i<= 1000; i ++){
  
  digitalWrite(9, HIGH);
  /* delay(2);   */    /* ms */  
delayMicroseconds(1000);
  digitalWrite(9, LOW);
    delayMicroseconds(1000);

  }

 digitalWrite(8, HIGH); /* Direction */
 for (long i = 0; i<= 1000; i ++){
  
  digitalWrite(9, HIGH);
  /* delay(2);   */    /* ms */  
delayMicroseconds(1000);
  digitalWrite(9, LOW);
    delayMicroseconds(1000);

  }
 digitalWrite(9, HIGH);
 delay(5000);

  
}
