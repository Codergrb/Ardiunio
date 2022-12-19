//CoderGrb@Github
//Transmitter Side:
#include <Keypad.h>
const byte ROW = 4;
const byte COL = 4;
char keyscode[ROW][COL] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPin[ROW] = {A5, A4, A3, A2};
byte colPin[COL] = {A1, A0, 12, 11};
Keypad customKeypad = Keypad( makeKeymap(keyscode), rowPin, colPin, ROW, COL);
char keycount = 0;
char code[5];
void setup() 
{
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  digitalWrite(8,LOW);
}
void loop()
{
  char customKey = customKeypad.getKey();
  if (customKey) {
    Serial.println(customKey);
   if (customKey == '1')
  {
    digitalWrite(8,HIGH);
    delay(10);
    digitalWrite(8,LOW);
  }
  else if (customKey == '2')
  {
    digitalWrite(8,HIGH);
    delay(20);
    digitalWrite(8,LOW);
  }
  else if (customKey == '3')
  {
    digitalWrite(8,HIGH);
    delay(30);
    digitalWrite(8,LOW);
  }
  else if (customKey == '4')
  {
    digitalWrite(8,HIGH);
    delay(40);
    digitalWrite(8,LOW);
  }
  else if (customKey == '5')
  {
    digitalWrite(8,HIGH);
    delay(50);
    digitalWrite(8,LOW);
  }
  else if (customKey == '6')
  {
    digitalWrite(8,HIGH);
    delay(60);
    digitalWrite(8,LOW);
  }
  else if (customKey == '7')
  {
    digitalWrite(8,HIGH);
    delay(70);
    digitalWrite(8,LOW);
  }
  else if (customKey == '8')
  {
    digitalWrite(8,HIGH);
    delay(80);
    digitalWrite(8,LOW);
  }
  else if (customKey == '9')
  {
    digitalWrite(8,HIGH);
    delay(90);
    digitalWrite(8,LOW);
  }
  else if (customKey == '*')
  {
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
  }
  else if (customKey == '0')
  {
    digitalWrite(8,HIGH);
    delay(110);
    digitalWrite(8,LOW);
  }
  else if (customKey == '#')
  {
    digitalWrite(8,HIGH);
    delay(120);
    digitalWrite(8,LOW);
  }
  else if (customKey == 'A')
  {
    digitalWrite(8,HIGH);
    delay(130);
    digitalWrite(8,LOW);
  }
  else if (customKey == 'B')
  {
    digitalWrite(8,HIGH);
    delay(140);
    digitalWrite(8,LOW);
  }
  else if (customKey == 'C')
  {
    digitalWrite(8,HIGH);
    delay(150);
    digitalWrite(8,LOW);
  }
  else if (customKey == 'D')
  {
    digitalWrite(8,HIGH);
    delay(160);
    digitalWrite(8,LOW);
  }
  else;
  } 
}
 
 
//Receiver Side:
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <SoftwareSerial.h>
#include <Keypad.h>
void setup()
{
  pinMode(8, INPUT);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  //lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("   WELCOME TO    ");
  lcd.setCursor(0, 1);
  lcd.print(" CIRCUIT DIGEST    ");
  delay(2000);
  lcd.clear();
}
void loop()
{
  unsigned long duration = pulseIn(8, HIGH);
  Serial.println(duration);
  if (duration > 10000 && duration < 17000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 1          ");
  }
  else if (duration > 20000 && duration < 27000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 2          ");
  }
  else if (duration > 30000 && duration < 37000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 3          ");
  }
  else if (duration > 40000 && duration < 47000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 4          ");
  }
  else if (duration > 50000 && duration < 57000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 5          ");
  }
  else if (duration > 60000 && duration < 67000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 6          ");
  }
  else if (duration > 70000 && duration < 77000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 7          ");
  }
  else if (duration > 80000 && duration < 87000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 8          ");
  }
  else if (duration > 90000 && duration < 97000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 9          ");
  }
  else if (duration > 100000 && duration < 107000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: *          ");
  }
  else if (duration > 110000 && duration < 117000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 0          ");
  }
  else if (duration > 120000 && duration < 127000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: #          ");
  }
  else if (duration > 130000 && duration < 137000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: A          ");
  }
  else if (duration > 140000 && duration < 147000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: B          ");
  }
  else if (duration > 150000 && duration < 157000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: C          ");
  }
  else if (duration > 160000 && duration < 167000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: D          ");
  }
}

