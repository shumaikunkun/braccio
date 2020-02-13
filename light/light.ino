void setup() {
  // put your setup code here, to run once:
 pinMode(10, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=0;i < 2; i++){
    if(i==0){
        digitalWrite(10, HIGH);
    }
    else{
      digitalWrite(10, LOW);
    }
  delay(1000);
  }
}
