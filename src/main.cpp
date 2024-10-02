#include <Arduino.h>
#include <OneButton.h>
#include "C:\Users\quan8\OneDrive\Documents\PlatformIO\Projects\ESP32\lib\LED.h"

#define BUTTON_PIN 15U   
#define LED_PIN 23U      

OneButton button(BUTTON_PIN, true, true); // Khởi tạo đối tượng OneButton

bool ledState = false;    // Trạng thái LED
bool blinkMode = false;   // Trạng thái chế độ nháy

void singleClick(void);
void doubleClick(void);

void setup() {
  Serial.begin(115200); // Khởi tạo Serial Monitor
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, ledState);

  // Gán sự kiện cho nút nhấn
  button.attachClick(singleClick);
  button.attachDoubleClick(doubleClick);

  Serial.println("Chuong trinh bat dau.");
}

void loop() {
  button.tick(); // Xử lý sự kiện nút nhấn

  if (blinkMode) {
    static unsigned long previousMillis = 0;
    unsigned long currentMillis = millis();

    if (currentMillis - previousMillis >= 500) { // Nháy LED mỗi 500ms
      previousMillis = currentMillis;
      ledState = !ledState;
      digitalWrite(LED_PIN, ledState);
    }
  }
}

void singleClick() {
  if (!blinkMode) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    Serial.println(ledState ? "LED ON" : "LED OFF");
  }
}

void doubleClick() {
  blinkMode = !blinkMode;
  if (blinkMode) {
    Serial.println("Bat che do nhay LED.");
  } else {
    // Tắt LED khi thoát chế độ nháy
    ledState = false;
    digitalWrite(LED_PIN, ledState);
    Serial.println("Tat che do nhay LED.");
  }
}
