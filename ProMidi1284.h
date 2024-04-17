/*

  Pins definitions addendum for ProMidi 1284P
  Guglielmo Braguglia - May 2019
  
*/

#ifndef Pins_ProMidi1284_h
#define Pins_ProMidi1284_h

#ifdef LED_BUILTIN
#undef LED_BUILTIN
#endif
#define LED_BUILTIN 13

#ifndef SWC_BUILTIN
#define SWC_BUILTIN 12
#endif

#ifndef NOT_AN_INTERRUPT
#define NOT_AN_INTERRUPT -1
#define digitalPinToInterrupt(p) ( (p) == 10 ? 0 : ( (p) == 11 ? 1 : ( (p) == 2 ? 2 : NOT_AN_INTERRUPT ) ) )
#endif

#define PIN_D0  (0)
#define PIN_D1  (1)
#define PIN_D2  (2)
#define PIN_D3  (3)
#define PIN_D4  (4)
#define PIN_D5  (5)
#define PIN_D6  (6)
#define PIN_D7  (7)
#define PIN_D8  (8)
#define PIN_D9  (9)
#define PIN_D10 (10)
#define PIN_D11 (11)
#define PIN_D12 (12)
#define PIN_D13 (13)
#define PIN_D14 (14)
#define PIN_D15 (15)
#define PIN_D16 (16)
#define PIN_D17 (17)
#define PIN_D18 (18)
#define PIN_D19 (19)
#define PIN_D20 (20)

#define PIN_INT0 (10)
#define PIN_INT1 (11)
#define PIN_INT2 (2)

static const uint8_t D0  = PIN_D0;
static const uint8_t D1  = PIN_D1;
static const uint8_t D2  = PIN_D2;
static const uint8_t D3  = PIN_D3;
static const uint8_t D4  = PIN_D4;
static const uint8_t D5  = PIN_D5;
static const uint8_t D6  = PIN_D6;
static const uint8_t D7  = PIN_D7;
static const uint8_t D8  = PIN_D8;
static const uint8_t D9  = PIN_D9;
static const uint8_t D10 = PIN_D10;
static const uint8_t D11 = PIN_D11;
static const uint8_t D12 = PIN_D12;
static const uint8_t D13 = PIN_D13;
static const uint8_t D14 = PIN_D14;
static const uint8_t D15 = PIN_D15;
static const uint8_t D16 = PIN_D16;
static const uint8_t D17 = PIN_D17;
static const uint8_t D18 = PIN_D18;
static const uint8_t D19 = PIN_D19;
static const uint8_t D20 = PIN_D20;

static const uint8_t PIN_RX0 = PIN_D8;
static const uint8_t PIN_TX0 = PIN_D9;
static const uint8_t PIN_RX1 = PIN_D10;
static const uint8_t PIN_TX1 = PIN_D11;

static const uint8_t PIN_SCL = PIN_D16;
static const uint8_t PIN_SDA = PIN_D17;

static const uint8_t PIN_SCK  = PIN_D7;
static const uint8_t PIN_MISO = PIN_D6;
static const uint8_t PIN_MOSI = PIN_D5;
static const uint8_t PIN_SS   = PIN_D4;

#endif