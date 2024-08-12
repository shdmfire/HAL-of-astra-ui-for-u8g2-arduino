#include "MyHAL.h"
//#include "Arduino.h"

void MyHAL::_screenOn()
{
    u8g2.setPowerSave(0);
}

void MyHAL::_screenOff()
{
    u8g2.setPowerSave(1);
}

void MyHAL::_canvasUpdate()
{
    u8g2.sendBuffer();
}

void MyHAL::_canvasClear()
{
    u8g2.clearBuffer();
}

void MyHAL::_setFont(const uint8_t *_font)
{
    u8g2.setFont(_font);
}

uint8_t MyHAL::_getFontWidth(std::string &_text)
{
    return u8g2.getUTF8Width(_text.c_str());
}

uint8_t MyHAL::_getFontHeight()
{
    return u8g2.getMaxCharHeight();
}

void MyHAL::_setDrawType(uint8_t _type)
{
    u8g2.setDrawColor(_type);
}

void MyHAL::_drawPixel(float _x, float _y)
{
    u8g2.drawPixel((int16_t)std::round(_x), (int16_t)std::round(_y));
}

void MyHAL::_drawEnglish(float _x, float _y, const std::string &_text)
{
    u8g2.drawStr((int16_t)std::round(_x), (int16_t)std::round(_y), _text.c_str());
}

void MyHAL::_drawChinese(float _x, float _y, const std::string &_text)
{
    u8g2.drawUTF8((int16_t)std::round(_x), (int16_t)std::round(_y), _text.c_str());
}

void MyHAL::_drawVDottedLine(float _x, float _y, float _h)
{
    for (unsigned char i = 0; i < (unsigned char)std::round(_h); i++)
    {
        if (i % 8 == 0 | (i - 1) % 8 == 0 | (i - 2) % 8 == 0)
            continue;
        u8g2.drawPixel((int16_t)std::round(_x), (int16_t)std::round(_y) + i);
    }
}

void MyHAL::_drawHDottedLine(float _x, float _y, float _l)
{
    for (unsigned char i = 0; i < _l; i++)
    {
        if (i % 8 == 0 | (i - 1) % 8 == 0 | (i - 2) % 8 == 0)
            continue;
        u8g2.drawPixel((int16_t)std::round(_x) + i, (int16_t)std::round(_y));
    }
}

void MyHAL::_drawVLine(float _x, float _y, float _h)
{
    u8g2.drawVLine((int16_t)std::round(_x), (int16_t)std::round(_y), (int16_t)std::round(_h));
}

void MyHAL::_drawHLine(float _x, float _y, float _l)
{
    u8g2.drawHLine((int16_t)std::round(_x), (int16_t)std::round(_y), (int16_t)std::round(_l));
}

void MyHAL::_drawBMP(float _x, float _y, float _w, float _h, const unsigned char *_bitMap)
{
    u8g2.drawXBMP((int16_t)std::round(_x), (int16_t)std::round(_y), (int16_t)std::round(_w), (int16_t)std::round(_h), _bitMap);
}

void MyHAL::_drawBox(float _x, float _y, float _w, float _h)
{
    u8g2.drawBox((int16_t)std::round(_x), (int16_t)std::round(_y), (int16_t)std::round(_w), (int16_t)std::round(_h));
}

void MyHAL::_drawRBox(float _x, float _y, float _w, float _h, float _r)
{
    u8g2.drawRBox((int16_t)std::round(_x), (int16_t)std::round(_y), (int16_t)std::round(_w), (int16_t)std::round(_h), (int16_t)std::round(_r));
}

void MyHAL::_drawFrame(float _x, float _y, float _w, float _h)
{
    u8g2.drawFrame((int16_t)std::round(_x), (int16_t)std::round(_y), (int16_t)std::round(_w), (int16_t)std::round(_h));
}

void MyHAL::_drawRFrame(float _x, float _y, float _w, float _h, float _r)
{
    u8g2.drawRFrame((int16_t)std::round(_x), (int16_t)std::round(_y), (int16_t)std::round(_w), (int16_t)std::round(_h), (int16_t)std::round(_r));
}

void MyHAL::_delay(unsigned long _mill)
{
    delay(_mill);
}