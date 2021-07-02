// Prueba de Arduino en VSCode.

void setup()
{
	Serial.begin(9600);
}

void loop()
{

	String c = "Hola Mundo! desde VSCode";
	Serial.println(c);

	Serial.println("Cambio");
	Serial.println("Cambio desde GitHub");

    delay(1000);
}
