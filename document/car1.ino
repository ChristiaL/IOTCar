// Motor A pins (enableA = enable motor, pinA1 = forward, pinA2 = backward)
int enableA = 7;
int pinA1 = 6;
int pinA2 = 5;

//Motor B pins (enabledB = enable motor, pinB2 = forward, pinB2 = backward)
int enableB = 10;
int pinB1 = 9;
int pinB2 = 8;

//blocker detect pin
int pingBlocker = 11;
int blockerState = 0;

// duration for output
int time = 800;
int time1 = 500;
// initial command
int command = 0;

void setup() {
 pinMode(enableA, OUTPUT);
 pinMode(pinA1, OUTPUT);
 pinMode(pinA2, OUTPUT);
 
 pinMode(enableB, OUTPUT);
 pinMode(pinB1, OUTPUT);
 pinMode(pinB2, OUTPUT);
 
 pinMode(pingBlocker, INPUT);
 
 Serial.begin(9600);
}

void loop() {
  //receive command
  blockerState = digitalRead(pingBlocker);
  if (Serial.available() > 0){
    command = Serial.read();
    Serial.print(command);
    enableMotors();
  }
  else{
    reset();
  }
  send_command(command,time);
  
}

void send_command(int command, int time){
  switch (command){

     //reset command
     case 0: reset(); break;

     // single command
     case 1: forward(time); break;
     case 2: backward(time); break;
     case 3: turnRight(time1); break;
     case 4: turnLeft(time1); break;

     default: Serial.print("Inalid Command\n");
    }
}

void reset() {
  brake(200);
  disableMotors();
}
 
//Define high-level H-bridge commands
 
void enableMotors()
{
 motorAOn();
 motorBOn();
}
 
void disableMotors()
{
 motorAOff();
 motorBOff();
}
 
void forward(int time)
{
 motorAForward();
 motorBForward();
 delay(time);
}
 
void backward(int time)
{
 motorABackward();
 motorBBackward();
 delay(time);
}
 
void turnLeft(int time)
{
 motorABackward();
 motorBForward();
 delay(time);
}
 
void turnRight(int time)
{
 motorAForward();
 motorBBackward();
 delay(time);
}
 
void coast(int time)
{
 motorACoast();
 motorBCoast();
 delay(time);
}
 
void brake(int time)
{
 motorABrake();
 motorBBrake();
 delay(time);
}
//Define low-level H-bridge commands
 
//enable motors
void motorAOn()
{
 digitalWrite(enableA, HIGH);
}
 
void motorBOn()
{
 digitalWrite(enableB, HIGH);
}
 
 //disable motors
void motorAOff()
{
 digitalWrite(enableB, LOW);
}
 
void motorBOff()
{
 digitalWrite(enableA, LOW);
}
 
 //motor A controls
void motorAForward()
{
 digitalWrite(pinA1, HIGH);
 digitalWrite(pinA2, LOW);
}
 
void motorABackward()
{
 digitalWrite(pinA1, LOW);
 digitalWrite(pinA2, HIGH);
}
 
//motor B controls
void motorBForward()
{
 digitalWrite(pinB1, HIGH);
 digitalWrite(pinB2, LOW);
}
 
void motorBBackward()
{
 digitalWrite(pinB1, LOW);
 digitalWrite(pinB2, HIGH);
}
 
//coasting and braking
void motorACoast()
{
 digitalWrite(pinA1, LOW);
 digitalWrite(pinA2, LOW);
}
 
void motorABrake()
{
 digitalWrite(pinA1, HIGH);
 digitalWrite(pinA2, HIGH);
}
 
void motorBCoast()
{
 digitalWrite(pinB1, LOW);
 digitalWrite(pinB2, LOW);
}
 
void motorBBrake()
{
 digitalWrite(pinB1, HIGH);
 digitalWrite(pinB2, HIGH);
}
