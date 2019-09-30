int sensor_pin = A0;
int val;
int tempPin=7;
int output_value ;

void setup() {

   Serial.begin(9600);

   Serial.println("Reading From the Sensor ...");

   delay(200);

   }

void loop() {

   output_value= analogRead(sensor_pin);
   val = analogRead(tempPin);
   float mv = ( val/1024.0)*5000; 
   float cel = mv/10;

   output_value = map(output_value,550,0,0,100);

   Serial.print("Mositure : ");

   Serial.print(output_value);

   Serial.println("%");

   delay(250);

   Serial.print("TEMPRATURE = ");
   Serial.print(cel);
   Serial.print("*C");
   Serial.println();
   delay(300);


   }
