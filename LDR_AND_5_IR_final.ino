int led = 3;
int led1 = 10;
int led2 = 5;
int led3 = 6;
int led4 = 9;

int ldr = A0;

int ir = A1;
int ir1 = A2;
int ir2 = A3;
int ir3 = A4;
int ir4 = A5;

void setup() 
{
  Serial.begin (9600);
  pinMode (led,OUTPUT);
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  
  pinMode (ldr,INPUT);
  
  pinMode (ir,INPUT);
  pinMode (ir1,INPUT);
  pinMode (ir2,INPUT);
  pinMode (ir3,INPUT);
  pinMode (ir4,INPUT);

}
void loop() 
{
 Serial.println(analogRead(A0));
  int ldrStatus = analogRead (ldr);
    if (ldrStatus <=300)
     {
       digitalWrite(led, HIGH);
       analogWrite(led,255/5);
       
       digitalWrite(led1, HIGH);
       analogWrite(led1,255/5); 
       
       digitalWrite(led2, HIGH);
       analogWrite(led2,255/5);
       
       digitalWrite(led3, HIGH);
       analogWrite(led3,255/5);
       
       digitalWrite(led4, HIGH);
       analogWrite(led4,255/5);
        
       
           if (analogRead(A1)<500)       // IR 1 CODE    
               {
                digitalWrite(led,HIGH);
                analogWrite(led,255/5);       
               } 
            else 
                {
                  digitalWrite(led,HIGH);
                  delay(1000);// micro second
                }      
          
          if (analogRead(A2)<500)           // IR 2 CODE
               {
                digitalWrite(led1,HIGH);
                analogWrite(led1,255/5); 
               } 
            else 
                {
                  digitalWrite(led1,HIGH);
                  delay(1000);// micro second
                }
           
           if (analogRead(A3)<500)           // IR 3 CODE
               {
                digitalWrite(led2,HIGH);
                analogWrite(led2,255/5); 
               } 
            else 
                {
                  digitalWrite(led2,HIGH);
                  delay(1000);// micro second
                } 
                
                if (analogRead(A4)<500)       // IR 4 CODE      
               {
                digitalWrite(led3,HIGH);
                analogWrite(led3,255/5); 
               } 
            else 
                {
                  digitalWrite(led3,HIGH);
                  delay(1000);// micro second
                }
                
                if (analogRead(A5)<500)        // IR 5 CODE    
               {
                digitalWrite(led4,HIGH);
                analogWrite(led4,255/5); 
               } 
            else 
                {
                  digitalWrite(led4,HIGH);
                  delay(1000);// micro second
                }
        }     
     else 
       {
         digitalWrite(led, LOW);
         digitalWrite(led1, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led4, LOW);
      }
}
