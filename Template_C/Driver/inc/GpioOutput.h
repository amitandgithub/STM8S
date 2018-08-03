/******************
** FILE: GpioOutput.h
**
** DESCRIPTION:
**  Gpio Output related functionality
**
** CREATED: 8/3/2018, by Amit Chaudhary
******************/
#ifndef GpioOutput_h
#define GpioOutput_h


#include "stm8s.h"
#include "stm8s_gpio.h"

typedef uint8_t Port_t;
typedef uint8_t Pin_t ;
typedef uint8_t GpioStatus_t ;



typedef struct 
{
  uint8_t               (*Initialize)            (Port_t port, Pin_t pin);
  uint8_t               (*UnInitialize)          (Port_t port, Pin_t pin);
  uint8_t               (*On)                    (Port_t port, Pin_t pin);
  uint8_t               (*Off)                   (Port_t port, Pin_t pin);
  uint8_t               (*Toggle)                (Port_t port, Pin_t pin);
  uint8_t               (*ReadOutput)            (Port_t port, Pin_t pin);

}GpioOutput;

extern GpioOutput GpioOutputDriver;















#endif //GpioOutput_h
