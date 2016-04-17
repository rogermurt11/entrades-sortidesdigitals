/********************************************************************************
**                                                                             **
**                       2.1 Cruïlla de semàfor                                **
**                                                                             **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************


int ledVermell3 = 7;
int ledVermell4 = 8;
int ledVermell5 = 9;
int ledVermell6 = 10;
int ledVermell7 = 11;
int ledVermell8 = 12;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  // Configració del pins de sortida

  pinMode(ledVermell3, OUTPUT);
  pinMode(ledVermell4, OUTPUT);
  pinMode(ledVermell5, OUTPUT);
  pinMode(ledVermell6, OUTPUT);
  pinMode(ledVermell7, OUTPUT);
  pinMode(ledVermell8, OUTPUT);

  Serial.begin(9600);

}

// La funció Loop es va repetin cada cop.
void loop()

  // seqüència semàfor  A

 {
    digitalWrite(ledVermell3, HIGH);
    delay(21000);
    digitalWrite(ledVermell3, LOW);  
    digitalWrite(ledVermell5, HIGH);
    delay(12000);
    digitalWrite(ledVermell5, LOW);  
    digitalWrite(ledVermell4, HIGH);
    delay(3000);
    digitalWrite(ledVermell4, LOW);

    
   // seqüència semàfor B
    if (ledVermell3=HIGH) 
    digitalWrite(ledVermell6, HIGH);
    delay(3000);
    digitalWrite(ledVermell6, LOW);  
    digitalWrite(ledVermell8, HIGH);
    delay(12000);
    digitalWrite(ledVermell8, LOW);  
    digitalWrite(ledVermell7, HIGH);
    delay(3000);
    digitalWrite(ledVermell7, LOW);
    digitalWrite(ledVermell6, HIGH);
    delay(21000);
    
       
}    
