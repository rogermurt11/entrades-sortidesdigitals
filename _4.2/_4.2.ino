/********************************************************************************
**                                                                             **
**                         4.2 Dau de leds                                     **
**                                                                             **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int ledVermell1 = 5;
int ledVermell2 = 6;
int ledVermell3 = 7;
int ledVermell4 = 8;
int ledVermell5 = 9;
int ledVermell6 = 10;
int ledVermell7 = 11;
int ledVermell8 = 12;
int polsador = 2;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
    // Configració del pins de sortida  
  pinMode(ledVermell1, OUTPUT); 
  pinMode(ledVermell2, OUTPUT);
  pinMode(ledVermell3, OUTPUT);
  pinMode(ledVermell4, OUTPUT);
  pinMode(ledVermell5, OUTPUT);
  pinMode(ledVermell6, OUTPUT);
  pinMode(ledVermell7, OUTPUT);
  pinMode(ledVermell8, OUTPUT); 
     
  // Configració del pin d'entrada  
  pinMode(polsador, INPUT); 
}

// La funció Loop es va repetin cada cop.
void loop() 
{
    // Si el polasdor esta apretat
  if (digitalRead(polsador) == LOW)
  {// Esta apretat
    // Actuem sobre els Led's

    rand( ledVerell1 to 
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);
   
    delay(500);

}

