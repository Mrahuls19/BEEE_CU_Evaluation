int LDR = A0;            // LDR input at A0 pin.
int LED = 11;             // LED is connected to PWM Pin 3.
int LED = 9; 
int LED = 6; 
int LED = 5; 
int LDRReading = 0;      // to store input value of LDR
int lEDBrightness = 0;   // to store the value of LED Brightness
float threshold_val = 511.5; // Check your threshold and modify it.
int BUTTON = 2;

void setup(){
  Serial.begin(9600);     // initializing serail communication.
  pinMode(11, OUTPUT);   // Defining LED pin as output.
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop(){
  LDRReading = analogRead(LDR);    // Reading LDR Input.
  Serial.println(LDRReading);      // Printing LDR input value.
  if(digitalWrite(2,HIGH)){
  
  if (LDRReading >threshold_val){                   // Condition to make LED ON.
  digitalWrite(11,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  }
  }
  else{
  digitalWrite(11,HIGH);             // If LDR is below threshold make LED OFF.
  }
                     // delay to make output readable on serial monitor. 
}
