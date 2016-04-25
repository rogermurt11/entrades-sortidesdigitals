/********************************************************************************
**                                                                             **
**                          4.1 Dau de leds                                    **
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

// la funció setup s'executa una vegada al inici del programa o bé si es fa un reset
void setup()
{
  
     // configuració dels pins de sortida 
  pinMode(ledVermell1, OUTPUT);    
  pinMode(ledVermell2, OUTPUT);
  pinMode(ledVermell3, OUTPUT);
  pinMode(ledVermell4, OUTPUT);
  pinMode(ledVermell5, OUTPUT);
  pinMode(ledVermell6, OUTPUT);
  pinMode(ledVermell7, OUTPUT);

    
}

// void loop es repeteix constantment
void loop() // és repeteix constantment 
{
  
    // NUMERO 1
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      

   
    delay(2000);
    
    // NUMERO 2
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      


  delay(2000);

    // NUMERO 3
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);

    delay(2000);


    // NUMERO 4
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);

    delay(2000); 


    // NUMERO 5
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);

    delay(2000);      

    // NUMERO 6
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, HIGH);
    digitalWrite(ledVermell7, LOW);

    delay(2000);     
}



