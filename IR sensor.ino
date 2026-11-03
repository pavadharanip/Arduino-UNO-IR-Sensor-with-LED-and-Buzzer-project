int ir = 5;
int buzz = 7;
void setup() {
  pinMode(ir,INPUT);
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int val = digitalRead(ir);
  if(val== LOW){
   Serial.println(val);
   digitalWrite(buzz,HIGH);
  }else{
    Serial.println(val);
   digitalWrite(buzz,LOW);
   }
   delay(1000);
  
}









      
