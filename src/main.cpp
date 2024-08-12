#include <Arduino.h>
#include "hal/hal.h"
#include "hal/shdm/MyHAL.h"

void print();

void print2(std::string _msg);

void setup()
{
    HAL::inject(new MyHAL);
    //Serial.begin(9600);
    //Serial.println("0000001");
    //delay(3000);
    HAL::printInfo("loading...");
    //print();
}

void print() {
    HAL::setFont(u8g2_font_unifont_t_symbols);
    HAL::drawEnglish(0,45,"hello");
    HAL::canvasUpdate();
}

void loop()
{
  // put your main code here, to run repeatedly:
}