///////////////////////////////////////////////////
//Blink: our first project for the Arno
int LED1 = 13;
int LED2 = 12;
void setup(){
  pinMode(LED1,OUTPUT);
  pinMode(LED1,OUTPUT);
}
void loop(){    
  digitalWrite(LED1,HIGH); 
  digitalWrite(LED2,LOW);
  delay(500);  
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);   
  delay(500); 
} 
///////////////////////////////////////////////////
