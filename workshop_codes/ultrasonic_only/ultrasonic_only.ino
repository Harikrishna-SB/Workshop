
const int trigPin = 7;         // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6;         // Echo Pin of Ultrasonic Sensor
const int right_clk = 12;      //For rotating Right Motor in Clockwise Direction
const int right_aclk = 13;     //For rotating Right Motor in Anti-Clockwise Direction
const int left_clk = 8 ;       //For rotating Left Motor in Clockwise Direction
const int left_aclk = 10;       //For rotating Left Motor in Anti-Clockwise Direction
const int right_enable = 11;   //For Enabling Right Motor
const int left_enable =  3;    //For Enabling Left Motor
long duration;
int distance;
void forward()                 //Function to move forward
{
  digitalWrite(right_clk, 1);
  digitalWrite(right_aclk, 0);
  digitalWrite(left_clk, 1);
  digitalWrite(left_aclk, 0);
  delay(100);

}
void right()                   //Function to move forward
{
  digitalWrite(right_clk, 0);
  digitalWrite(right_aclk, 0);
  digitalWrite(left_clk, 1);
  digitalWrite(left_aclk, 0);
  delay(100);
}
void left()                    //Function to move Left
{
  digitalWrite(right_clk, 1);
  digitalWrite(right_aclk, 0);
  digitalWrite(left_clk, 0);
  digitalWrite(left_aclk, 0);
  delay(100);
}
void uturn()                   //Function to move Around
{
  digitalWrite(right_clk, 0);
  digitalWrite(right_aclk, 0);
  digitalWrite(left_clk, 1);
  digitalWrite(left_aclk, 0);
  delay(400);
}
void setup() {
  Serial.begin(9600);//For starting Serial Communication
  pinMode(right_clk, OUTPUT);
  pinMode(right_aclk, OUTPUT);
  pinMode(left_clk, OUTPUT);
  pinMode(left_aclk, OUTPUT);
  pinMode(right_enable, OUTPUT);
  pinMode(left_enable, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  digitalWrite(right_enable, 1);
  digitalWrite(left_enable, 1);
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > 15)
  {
    forward();
  }
  else
  {
    right();
  }
}
