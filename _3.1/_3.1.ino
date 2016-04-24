/********************************************************************************
**    El projecte digital 3.1 cosisteix en un display de 7 segments.           **
**    Fa falta programació i muntatge físic.                                   **
**    Es tracta de un comptador decimal fins al nº9.                           **
********************************************************************************/

//*******  Includes  ************************************************************


//*******  Variables  ***********************************************************

int a = 7;
int b = 8;
int c = 9;
int d = 10;
int e = 11;
int f = 12;
int g = 13;
int p = 3;

// La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

// La funció Loop es va repetin cada cop.
void loop()
{

  // Nº0
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay (1000);


}
