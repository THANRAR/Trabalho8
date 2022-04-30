const int pinoPIR = 2; //PINO D0IGITAL UTILIZADO PELO SENSOR DE PRESENÇA
const int pinoLED = 7; //PINO DIGITAL UTILIZADO PELO LED
const int buzzer = 8; //PINO DIGITAL UTILIZADO PELO BUZZER

void setup(){
  pinMode(pinoLED, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoPIR, INPUT); //DEFINE O PINO COMO ENTRADA
}
void loop(){
  

      
 if(digitalRead(pinoPIR) == HIGH){ //SE A LEITURA DO PINO FOR IGUAL A HIGH, FAZ
      tone(buzzer, 300); // FAZ BEEP
      digitalWrite(pinoLED, HIGH); //ACENDE O LED
      delay(100);
       noTone(buzzer);
      digitalWrite(pinoLED, LOW);
      delay(100);
 } else {
   noTone(buzzer);
 }
}
