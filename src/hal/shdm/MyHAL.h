#include "../hal.h"
#include "u8g2/U8g2lib.h"
#include "u8g2/clib/u8g2.h"


class MyHAL : public HAL {
public:
    MyHAL() = default;

public:
    //MyHAL(){
    //}

    inline void init() override {
        //u8g2 = U8G2_SSD1306_128X64_NONAME_F_HW_I2C(U8G2_R0, U8X8_PIN_NONE);
        u8g2.begin();
    }

protected:
  //U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2 = u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* clock=*/ 16, /* data=*/ 17);
    U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2 = U8G2_SSD1306_128X64_NONAME_F_HW_I2C(U8G2_R0, U8X8_PIN_NONE);
    
public:
  void _screenOn() override;
  void _screenOff() override;

public:
//  void* _getCanvasBuffer() override;
//  uint8_t _getBufferTileHeight() override;
//  uint8_t _getBufferTileWidth() override;
  void _canvasUpdate() override;
  void _canvasClear() override;
  void _setFont(const uint8_t * _font) override;
  uint8_t _getFontWidth(std::string& _text) override;
  uint8_t _getFontHeight() override;
  void _setDrawType(uint8_t _type) override;
  void _drawPixel(float _x, float _y) override;
  void _drawEnglish(float _x, float _y, const std::string& _text) override;
  void _drawChinese(float _x, float _y, const std::string& _text) override;
  void _drawVDottedLine(float _x, float _y, float _h) override;
  void _drawHDottedLine(float _x, float _y, float _l) override;
  void _drawVLine(float _x, float _y, float _h) override;
  void _drawHLine(float _x, float _y, float _l) override;
  void _drawBMP(float _x, float _y, float _w, float _h, const uint8_t* _bitMap) override;
  void _drawBox(float _x, float _y, float _w, float _h) override;
  void _drawRBox(float _x, float _y, float _w, float _h, float _r) override;
  void _drawFrame(float _x, float _y, float _w, float _h) override;
  void _drawRFrame(float _x, float _y, float _w, float _h, float _r) override;

public:
  void _delay(unsigned long _mill) override;
//  unsigned long _millis() override;
//  unsigned long _getTick() override;
//  unsigned long _getRandomSeed() override;

//public:
//  void _beep(float _freq) override;
//  void _beepStop() override;
//  void _setBeepVol(uint8_t _vol) override;

//public:
//  bool _getKey(key::KEY_INDEX _keyIndex) override;

//public:
//  void _updateConfig() override;
};