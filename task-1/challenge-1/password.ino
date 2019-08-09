#include <stdio.h>

void setup() 
{
  Serial.begin(9600);
  String password= String ("whatisthematter");      

}


void loop() {
  Serial.println("Enter the password");    
  String password= String ("whatisthematter");      
  String a= Serial.readString();
  if (a!= password) 
    {
      Serial.println("Password is wrong."); 
    }
  else 
    {
      Serial.println("Password is correct.");
    }
}
