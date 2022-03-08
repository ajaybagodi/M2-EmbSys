# solar tracking.ino
#include <LiquidCrystal.h> //LCD Library
int Moisture=0; 
int rldr1=0;
int rldr2=0;
int rldr3=0;


void setup() {

  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(2,INPUT);
  pinMode(3,OUTPUT); 
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  rldr1=analogRead(A0);
  rldr2=analogRead(A1);
  Moisture = analogRead(A2);
  rldr3=analogRead(A3);
 
  

  rldr1/=150;
  rldr2/=150;
   
  
    if(rldr1<rldr2)
   {
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);    
   }
    if(rldr1>rldr2)
   {
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
   }
    if(rldr1==rldr2)
   {
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
   }
  if(rldr3>35)
  {
    digitalWrite(3,LOW);
  }
  if(rldr3<35)
  {
    digitalWrite(3,HIGH);
  }
  if(Moisture<800)  
  { 
    digitalWrite(13,HIGH);
  }
  if(Moisture>800)  
  { 
    digitalWrite(13, LOW);
  }
}


# autoirrigation.ino

#include <LiquidCrystal.h> //LCD Library
int M_Sensor = A0; //Moisture sensor input
int W_led = 7; // motor on off sensor
int P_led = 13; // motor pin
 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

void setup()
 {
    lcd.begin(16, 2);
    lcd.clear(); 
    pinMode(13,OUTPUT);
    pinMode(7,INPUT);
    pinMode(9,OUTPUT);
    
  
    lcd.setCursor(0,0);
    lcd.print("Project By");
    lcd.setCursor(0,1);
    lcd.print("G-35");
    delay(1000);
   
}

void loop()
{
  
  lcd.clear();
  int Moisture = analogRead(M_Sensor); //Read Moisture Sensor Value 

 
 if (Moisture> 700)   // for dry soil
  { 
        lcd.setCursor(0,0);
        lcd.print("DRY SOIL");
       if (digitalRead(W_led)==1) 
       {
         digitalWrite(13, HIGH);
         lcd.setCursor(0,1);
         lcd.print("PUMP:ON");
       }
       else
       {
         digitalWrite(13, LOW);
         lcd.setCursor(0,1);
         lcd.print("PUMP:OFF");
           

       }
    }
 
     if (Moisture>= 300 && Moisture<=700) //for Moist Soil
    { 
      lcd.setCursor(0,0);
     lcd.print("MOIST SOIL");
     digitalWrite(13,LOW);
     lcd.setCursor(0,1);
     lcd.print("PUMP:OFF");    
  }
 
  if (Moisture < 300)  // For Soggy soil
  { 
    lcd.setCursor(0,0);
     lcd.print("SOGGY SOIL");
     digitalWrite(13,LOW);
     lcd.setCursor(0,1);
     lcd.print("PUMP:OFF");
  }
 delay(1000);    
}  

