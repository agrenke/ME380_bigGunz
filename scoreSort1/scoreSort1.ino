int sortValues[13] = { 2, 7, 4, 6, 5, 3, 8, 10, 9, 11, 14, 12, 13 };
int times[10] = { 0 };
int t;
String valInput;   

void setup() {
  #include <Servo.h>
  #include <math.h>
  #include <MatrixMath.h>
  #include <Wire.h>
  #include <Adafruit_PWMServoDriver.h>

  Serial.begin(9600);
}

void loop() {


        
//   if (Serial.available() > 0) {
//   
//   sort(sortValues,10); //Pass in the values and the size.
//   valInput = Serial.readString();
//    
//    switch (valInput[0]) {
//      
//      case 'a':
//        break;
//        
//      default: Serial.println(" No action taken");
//  

//  Serial.print("Sorted Array: ");
//  for(int i=0; i<13; i++) {
//     Serial.print(sortValues[i]); 
//     Serial.print(",");
//  }
//  Serial.println("");
//  Serial.print("Max Number: ");
//  Serial.print(sortValues[12]);
//  Serial.println("");
//  Serial.print("Min Number: ");
//  Serial.print(sortValues[0]);
//  Serial.println("");
//  delay(1000); //Make sure we have enough time to see the output before starting the demo again.

//    }
//  }

  
}

void fileSave(){

  
  
}


void sort(int a[],int size) {
    for(int i=0; i<(size-1); i++) {
        for(int o=0; o<(size-(i+1)); o++) {
                if(a[o] > a[o+1]) {
                    int t = a[o];
                    a[o] = a[o+1];
                    a[o+1] = t;
                }
        }
    }
}
