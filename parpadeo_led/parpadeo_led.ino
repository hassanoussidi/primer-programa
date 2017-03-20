

/*************************************************            
              parpadeo  led pin13                 
   se enciende 1segundo y se apaga 1segundo   
                repetidamente                 
*************************************************/



//******  Variables  ****************************
int ledPin = 13;


void setup() {

  pinMode(ledPin, OUTPUT);
}


void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
