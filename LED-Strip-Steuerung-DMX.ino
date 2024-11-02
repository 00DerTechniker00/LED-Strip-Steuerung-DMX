#include <Arduino.h>
#include <ESPDMX.h>
#include <FastLED.h>

#define anzahlLEDs 100
#define channelProLED 3
#define firstLEDChannel 120
#define LED_Chipset NEOPIXEL //https://github.com/FastLED/FastLED?tab=readme-ov-file#supported-led-chipsets
#define LED_PIN 16

DMXESPSerial dmx;

byte gainChannel;
CRGB leds[anzahlLEDs];


void setup()
{
  Serial.begin(9600);
  dmx.init(anzahlLEDs);
  FastLED.addLeds<LED_Chipset, LED_PIN>(leds, anzahlLEDs);
  gainChannel = firstLEDChannel + (channelProLED * anzahlLEDs);
}
void loop()
{
  dmx.update();
  size_t j = firstLEDChannel;
  for (size_t i = 0; i < gainChannel; i++)
  {
    leds[i].r = dmx.read(j);
    j++;
    leds[i].g = dmx.read(j);
    j++;
    leds[i].b = dmx.read(j);
    j++;
  }
  FastLED.show();
}