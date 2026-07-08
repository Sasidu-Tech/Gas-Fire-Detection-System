```cpp
# Gas Detection System Arduino Code

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <ESP32Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo myServo;

#define servo    33 //Servo Motor
#define flame    13 //Flame Sensor
#define IN1      25 //Water Pump
#define IN2      27 //Fan
#define MQ2      34 //Analog Input
#define redLed    4  //Dangerous
#define greenLed 16 //No Dangerous
#define buzzer   15 //Buzzer Pin

unsigned long previouseMillis    = 0;
bool buzzerState                 = false;
const unsigned long beepInterval = 200;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  myServo.attach(servo);
  Wire.begin(21, 22);
  lcd.init();
  lcd.backlight();

  pinMode(flame,    INPUT);
  pinMode(IN1,      OUTPUT);
  pinMode(IN2,      OUTPUT);
  pinMode(MQ2,      INPUT);
  pinMode(redLed,   OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer,   OUTPUT);

  myServo.write(75);//Servo Nutral

}

void loop() {
  // put your main code here, to run repeatedly:

  float Gas_Value = analogRead(MQ2);
  Serial.print("Gas Value :-");
  Serial.println(Gas_Value);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Gas Value :");
  lcd.print(Gas_Value);


  if(Gas_Value > 175){

    lcd.setCursor(0, 1);
    lcd.print("DANGER!");

    digitalWrite(redLed,    HIGH);
    digitalWrite(greenLed, LOW);
    digitalWrite (IN2,      LOW);
  

    unsigned long currentMillis = millis();

    if(currentMillis - previouseMillis >= beepInterval){
      previouseMillis = currentMillis;

      buzzerState = !buzzerState;
      digitalWrite(buzzer, buzzerState);
    }

  }else{

    lcd.setCursor(0,1);
    lcd.print("NO_DANGER");

    digitalWrite(redLed,    LOW);
    digitalWrite(greenLed, HIGH);
    digitalWrite (IN2,      HIGH);

    digitalWrite(buzzer,LOW);
    buzzerState = false;
  }
  delay(500);

}


# Fire Detection System Arduino Code

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <ESP32Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo myServo;

#define servo    33 //Servo Motor
#define flame    13 //Flame Sensor
#define IN1      25 //Water Pump
#define IN2      27 //Fan
#define MQ2      34 //Analog Input
#define redLed    4  //Dangerous
#define greenLed 16 //No Dangerous
#define buzzer   15 //Buzzer Pin

unsigned long previouseMillis    = 0;
bool buzzerState                 = false;
const unsigned long beepInterval = 200;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  myServo.attach(servo);
  Wire.begin(21, 22);
  lcd.init();
  lcd.backlight();

  pinMode(flame,    INPUT);
  pinMode(IN1,      OUTPUT);
  pinMode(IN2,      OUTPUT);
  pinMode(MQ2,      INPUT);
  pinMode(redLed,   OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer,   OUTPUT);

  myServo.write(75);//Servo Nutral

}

void loop() {
  // put your main code here, to run repeatedly:

  float Flame_Value = digitalRead(flame);
  Serial.print("Flame Value :-");
  Serial.println(Flame_Value);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Flame Value :");
  lcd.print(Flame_Value);


  if(Flame_Value == HIGH){

    lcd.setCursor(0, 1);
    lcd.print("FIRE!");

    digitalWrite(redLed,    HIGH);
    digitalWrite(greenLed, LOW);
    digitalWrite (IN2,      LOW);
  

    unsigned long currentMillis = millis();

    if(currentMillis - previouseMillis >= beepInterval){
      previouseMillis = currentMillis;

      buzzerState = !buzzerState;
      digitalWrite(buzzer, buzzerState);
    }

  }else{

    lcd.setCursor(0,1);
    lcd.print("NO_FIRE");

    digitalWrite(redLed,    LOW);
    digitalWrite(greenLed, HIGH);
    digitalWrite (IN2,      HIGH);

    digitalWrite(buzzer,LOW);
    buzzerState = false;
  }
  delay(500);

}


```
