#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "nbxfa2ouOQUA_EOvQC_q2-UMr0WWeE2c";

char ssid[] = "Test1";
char pass[] = "12345678";

void setup()
{
  pinMode(D2, OUTPUT); // ON/OFF
  pinMode(D3, OUTPUT); // Red  
  pinMode(D7, OUTPUT); // Green
  pinMode(D10, OUTPUT);// Blue
  digitalWrite(D3, 0);
  digitalWrite(D4, 0);
  digitalWrite(D7, 0);
  digitalWrite(D10, 0);
  Blynk.begin(auth, ssid, pass);
  analogWriteFreq(20000);
}

void loop()
{
  Blynk.run();
}
