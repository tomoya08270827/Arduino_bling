void setup() { 
   // put your setup code here, to run once: 
   pinMode(13, OUTPUT); 
 } 
 
 
 void loop() { 
   int a;
   for(a=0;a<17;a++)
   { 
     digitalWrite(13, HIGH); 
     delay(10); 
     digitalWrite(13, LOW); 
     delay(100);
   }
   delay(11000); 
 } 

