unsigned long forSend;

void serialSend() { //Time different sending times
  if (forSend < millis()) {
    forSend = millis() + 2000;
    /*
        Serial.print("waterLevel ");
        Serial.print(levelOf(Watering));
        Serial.println(";");

        Serial.print("bufferLevel ");
        Serial.print(levelOf(Buffer));
        Serial.println(";");

        Serial.print("bufferTemp ");
        Serial.print((int)(bufferTemp * 100));
        Serial.println(";\n");

      Serial.print("garAknTemp ");
      Serial.print((garAknTemp * 100), 0);
      Serial.println(";");

      Serial.print("garAknHum ");
      Serial.print((garAknHum * 100), 0);
      Serial.println(";");

      Serial.print("udvarTemp ");
      Serial.print((udvarTemp * 100), 0);
      Serial.println(";");

      Serial.print("udvarHum ");
      Serial.print((udvarHum * 100), 0);
      Serial.println(";\n");
    */
  }
}
