int VRX = 0;
int VRY = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  VRX = analogRead(A0);
  VRY = analogRead(A1);

  //-----------------VRX
  if(VRX > 800)
  {
    digitalWrite(13, 1);
    digitalWrite(12, 0);
  }
  else if (VRX < 200)
  {
    digitalWrite(13, 0);
    digitalWrite(12, 1);
  }
  else
  {
    digitalWrite(13, 0);
    digitalWrite(12, 0);
  }
  //----------------

  //-----------------VRY
  if(VRY > 800)
  {
    digitalWrite(11, 1);
    digitalWrite(10, 0);
  }
  else if (VRY < 200)
  {
    digitalWrite(11, 0);
    digitalWrite(10, 1);
  }
  else
  {
    digitalWrite(11, 0);
    digitalWrite(10, 0);
  }
  //---------------------
}
