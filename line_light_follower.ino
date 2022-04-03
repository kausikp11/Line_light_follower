// C++ code
//
int sensor_left,sensor_right;
void setup()
{
  for(int i=2;i<=7;i++){
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop(){
  sensor_left = analogRead(A0);
  sensor_right = analogRead(A1);
  Serial.println();
  Serial.print("Left:\t");
  Serial.print(sensor_left);
  Serial.print("\tRight:\t");
  Serial.print(sensor_right);
  if(sensor_left>=0 && sensor_left<=400){
    left();
    //Serial.print("Left");
  }
  else if(sensor_right>=0 && sensor_right<=400){
      right();
      //Serial.print("Right");
    }
    else{
      front();
      //Serial.print("Front");
    }
  delay(1000);
}

void front(){
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  analogWrite(3,60);
  digitalWrite(5,LOW);
  digitalWrite(7,HIGH);
  analogWrite(6,60);
}
void left(){
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  analogWrite(3,60);
  digitalWrite(5,HIGH);
  digitalWrite(7,LOW);
  analogWrite(6,60);
}
void right(){
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  analogWrite(3,60);
  digitalWrite(5,LOW);
  digitalWrite(7,HIGH);
  analogWrite(6,60);
}
