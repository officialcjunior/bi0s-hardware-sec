void setup() 	
	{

		Serial.begin(9600);

		pinMode(6,OUTPUT);

	}

int temperature;

void loop()

{

    temperature = analogRead(A3);
    temperature = temperature * 0.48828125;
    if (temperature >= 100)

	{

		digitalWrite(6, HIGH);

		delay(500);

		digitalWrite(6, LOW);

		delay(500);	

	}


}
