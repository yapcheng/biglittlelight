 void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int abc = analogRead(A0);
int def ;
Serial.println(abc);
if(abc<=100)abc=100;
if(abc>=500)abc=500;
def = map(abc, 100, 500, 0, 255);
analogWrite(9,def);
delay(1);
}
