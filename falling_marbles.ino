#include <TFT_eSPI.h>
#include <SPI.h>

// display instance
TFT_eSPI tft = TFT_eSPI();

// set colors
#define BLACK TFT_BLACK
#define WHITE TFT_WHITE
#define RED TFT_RED

// fragmentation grid
struct Fragmentation {
  int16_t x;
  int16_t y;
  int16_t vx;
  int16_t vy;
  uint16_t color;
};

const int numFragments = 50;
Fragmentation fragments[numFragments];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  // display initialization
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(BLACK);

  // fragment initialization
  for (int i=0; i < numFragments; i++) {
    fragments[i].x = random(tft.width());
    fragments[i].y = random(tft.height());
    fragments[i].vx = random(-3, 4);
    fragments[i].vy = random(-3, 4);
    fragments[i].color = tft.color565(random(255), random(255), random(255));
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  static int stage = 0;
  static unsigned long mostRecentTransition = 0;

  switch(stage) {
    case 0:
      tft.fillScreen(BLACK);
      for (int i=0; i < numFragments; i++) {
        fragments[i].x += fragments[i].vx;
        fragments[i].y += fragments[i].vy;

        // edge bounces
        if (fragments[i].x < 0 || fragments[i].x >= tft.width()) fragments[i].vx *= 1;
        if (fragments[i].y < 0 || fragments[i].y >= tft.height()) fragments[i].vy *= 1;

        tft.fillCircle(fragments[i].x, fragments[i].y, 2, fragments[i].color);
      }

      if (millis() - mostRecentTransition > 5000) {
        stage = 1;
        mostRecentTransition = millis();
      }
      break;
    
    case 1:
      {
        static int radius = 0;
        tft.fillCircle(tft.width()/2, tft.height()/2, radius, WHITE);
        radius += 4;

        if (radius > tft.width() * 1.5) {
          stage = 0;
          radius = 0;
          mostRecentTransition = millis();

          for (int i = 0; i < numFragments; i++) {
            fragments[i].x = random(tft.width());
            fragments[i].y = random(tft.height());
            fragments[i].vx = random(-3, 4);
            fragments[i].vy = random(-3, 4);
            fragments[i].color = tft.color565(random(255), random(255), random(255));
          }
        }
      }
      break;
  }
  delay(20);

}
