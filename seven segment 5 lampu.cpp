#include <Arduino.h>

int a = 11; 
int b = 10; 
int c = 7; 
int d = 8; 
int e = 9; 
int f = 12; 
int g = 13; 
int lampu1 = 6; 
int lampu2 = 5; 
int lampu3 = 4; 
int lampu4 = 3; 
int lampu5 = 2; 


void setup() { 
    Serial.begin(9600); 
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(lampu1, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu4, OUTPUT);
    pinMode(lampu3, OUTPUT);
    pinMode(lampu5, OUTPUT);
} 

// CLear display
void clearDisplay(void) { 
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(lampu1, LOW);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, LOW);
    digitalWrite(lampu4, LOW);
    digitalWrite(lampu5, LOW);
}

// Display number 0
void display0(void) { 
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(lampu1, LOW);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, LOW);
    digitalWrite(lampu4, LOW);
    digitalWrite(lampu5, LOW);
    Serial.println ("Lampu 0");

}

// Display number 1
void display1(void) {  
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(lampu1, HIGH);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, LOW);
    digitalWrite(lampu4, LOW);
    digitalWrite(lampu5, LOW);
     Serial.println ("Lampu 1");
}

// Display number 2
void display2(void) { 
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(lampu1, HIGH);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, LOW);
    digitalWrite(lampu4, LOW);
    digitalWrite(lampu5, LOW);
     Serial.println ("Lampu 2");
}

// Display number 3
void display3(void) { 
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(lampu1, HIGH);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, HIGH);
    digitalWrite(lampu4, LOW);
    digitalWrite(lampu5, LOW);
     Serial.println ("Lampu 3");
}

// Display number 4
void display4(void) {  
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(lampu1, HIGH);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, HIGH);
    digitalWrite(lampu4, HIGH);
    digitalWrite(lampu5, LOW);
     Serial.println ("Lampu 4");
}

// Display number 5
void display5(void) { 
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(lampu1, HIGH);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, HIGH);
    digitalWrite(lampu4, HIGH);
    digitalWrite(lampu5, HIGH);
     Serial.println ("Lampu 5");
}

void loop() {     
    while (1) {   
        clearDisplay();
        display0(); 
        delay(2000); 
        
        clearDisplay();
        display1(); 
        delay(2000); 
        
        clearDisplay();
        display2();  
        delay(2000); 
        
        clearDisplay();
        display3(); 
        delay(2000);
        
        clearDisplay();
        display4(); 
        delay(2000);
        
        clearDisplay(); 
        display5(); 
        delay(2000);
        

    }
}
