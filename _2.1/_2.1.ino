/********************************************************************************
**                                                                             **
**                       2.1 Cruïlla de semàfor                                **
**                                                                             **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************


int ledVermell3 = 7;
int ledTronja4 = 8;
int ledVerd5 = 9;
int ledVermell6 = 10;
int ledTronja7 = 11;
int ledVerd8 = 12;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  // Configració del pins de sortida

  pinMode(ledVermell3, OUTPUT);
  pinMode(ledTronja4, OUTPUT);
  pinMode(ledVerd5, OUTPUT);
  pinMode(ledVermell6, OUTPUT);
  pinMode(ledTronja7, OUTPUT);
  pinMode(ledVerd8, OUTPUT);

  Serial.begin(9600);

}

// La funció Loop es va repetin cada cop.
void loop()

  // seqüència semàfor  A

 {
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell6, HIGH);
    delay(3000);
    
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVerd8, HIGH);
    delay(6000);

  
    digitalWrite(ledVerd8, LOW);
    digitalWrite(ledTronja7, HIGH);
    digitalWrite(ledVermell3, HIGH);
    delay(3000);

    digitalWrite(ledTronja7, LOW);
    digitalWrite(ledVermell6, HIGH);
    digitalWrite(ledVermell3,HIGH);
    delay(3000);

    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVerd5, HIGH);
    digitalWrite(ledVermell6, HIGH);
    delay(6000); 

    digitalWrite(ledVerd5, LOW);
    digitalWrite(ledTronja4, HIGH);
    digitalWrite(ledVermell6, HIGH);
    delay(3000);

    digitalWrite(ledTronja4, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell6, HIGH);
    delay(3000);
    
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell6, LOW);
    






   
     
}    
