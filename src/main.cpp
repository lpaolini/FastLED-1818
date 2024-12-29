
#define FASTLED_USES_OBJECTFLED
#include <FastLED.h>
#include <Audio.h>

#define PIN 17
#define NUM_LEDS 192

CRGB leds[NUM_LEDS];
// AudioInputI2S audioInput;

void setup() {
    FastLED.addLeds<WS2812, PIN, GRB>(leds, NUM_LEDS);
    FastLED.setBrightness(8);
}

void loop() {
    FastLED.show();
    delay(10);
}
