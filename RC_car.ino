//please subscribe and like 
#define rc3 A0 // receiver chanel 3 on pin 9
#define rc4 A1 // receiver chanel 4 on pin 10
#define spd 3 // PWM pin on L298N
#define spd1 11 // PWM pin on L298N
#define pin1 4 // in 1 pin on L298N to pin 4 on ARDUINO
#define pin2 5 // in 2 pin on L298N to pin 3 on ARDUINO
#define pin3 12 // in 3 pin on L298N to pin 12 on ARDUINO
#define pin4 13 // in 4 pin on L298N to pin 13 on ARDUINO
 
int ch3; // value of chanel 3 of the receiver
int ch4; // value of chanel 4 of the receiver
void setup() {

  pinMode (rc3, INPUT);
  pinMode (rc4, INPUT);
  pinMode (spd, OUTPUT);
  pinMode (spd1, OUTPUT);
  pinMode (pin1, OUTPUT);
  pinMode (pin2, OUTPUT);
  pinMode (pin3, OUTPUT);
  pinMode (pin4, OUTPUT);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  Serial.begin(115200);
}
  void loop(){
     ch3 = pulseIn(rc3, HIGH);
  ch4 = pulseIn(rc4, HIGH);
  if (ch3 > 1700)
  {
   digitalWrite(spd,HIGH);
   digitalWrite(spd1,HIGH);
   digitalWrite(pin1, LOW);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, HIGH);
  
  }
  
 else  if (ch3 < 1400)
  {
 


  digitalWrite(spd,HIGH);
   digitalWrite(spd1,HIGH);
   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);
  }


else if (ch4 < 1400)
  {
  digitalWrite(spd,HIGH);
   digitalWrite(spd1,HIGH);
   digitalWrite(pin1, LOW);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, LOW);
  
  }
  
 else  if (ch4 > 1700)
  {
  digitalWrite(spd,HIGH);
   digitalWrite(spd1,HIGH);
   digitalWrite(pin1, LOW);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, HIGH);
  
  }

  
  else 
  {digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
  }}

