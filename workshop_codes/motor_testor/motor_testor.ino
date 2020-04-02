const int trigPin = 7;         // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6;         // Echo Pin of Ultrasonic Sensor
const int right_clk = 2;      //For rotating Right Motor in Clockwise Direction
const int right_aclk = 13;     //For rotating Right Motor in Anti-Clockwise Direction
const int left_clk = 8 ;       //For rotating Left Motor in Clockwise Direction
const int left_aclk = 10;       //For rotating Left Motor in Anti-Clockwise Direction
const int right_enable = 11;   //For Enabling Right Motor
const int left_enable =  3;    //For Enabling Left Motor
const int buzzer =  4;         //For controlling buzzer
int dist;
char ch;
bool flag;
long duration;
int distance;
void forward()                 //Function to move forward
{
  digitalWrite(right_clk, HIGH);
  digitalWrite(right_aclk, LOW);
  digitalWrite(left_clk, HIGH);
  digitalWrite(left_aclk, LOW);
  delay(100);

}
void right()                   //Function to move forward
{
  digitalWrite(right_clk, LOW);
  digitalWrite(right_aclk, LOW);
  digitalWrite(left_clk, HIGH);
  digitalWrite(left_aclk, LOW);
  delay(100);
}
void left()                    //Function to move Left
{
  digitalWrite(right_clk, HIGH);
  digitalWrite(right_aclk, LOW);
  digitalWrite(left_clk, LOW);
  digitalWrite(left_aclk, LOW);
  delay(100);
}
void uturn()                   //Function to move Around
{
  digitalWrite(right_clk, LOW);
  digitalWrite(right_aclk, LOW);
  digitalWrite(left_clk, HIGH);
  digitalWrite(left_aclk, LOW);
  delay(400);
}
void back()                   //Function to move Around
{
  digitalWrite(right_clk, LOW);
  digitalWrite(right_aclk, HIGH);
  digitalWrite(left_clk, LOW);
  digitalWrite(left_aclk, HIGH);
  delay(100);
}

void stopp()                   //Function to stop
{
  digitalWrite(right_clk, LOW);
  digitalWrite(right_aclk, LOW);
  digitalWrite(left_clk, LOW);
  digitalWrite(left_aclk, LOW);
  delay(400);
}
void setup() {
  pinMode(right_clk, OUTPUT);
  pinMode(right_aclk, OUTPUT);
  pinMode(left_clk, OUTPUT);
  pinMode(left_aclk, OUTPUT);
  pinMode(right_enable, OUTPUT);
  pinMode(left_enable, OUTPUT);
  digitalWrite(right_enable, 1);
  digitalWrite(left_enable, 1);
}
void loop()
{
 /* forward();
  delay(5000);
 right();
  delay(5000);
  left();
  delay(5000);
  stopp();
  delay(5000);



digitalWrite(right_clk, HIGH);
  digitalWrite(right_aclk, HIGH);
  digitalWrite(left_clk, HIGH);
  digitalWrite(left_aclk, HIGH);

*/forward();
  delay(5000);
  right();
  delay(5000);

  
}
