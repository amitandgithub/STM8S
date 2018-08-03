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

typedef GPIO_TypeDef*       Port_t;
typedef GPIO_Pin_TypeDef    Pin_t ;
typedef GPIO_Mode_TypeDef   Mode_t ;



typedef struct 
{
  void                  (*Initialize)            (Port_t port, Pin_t pin, Mode_t Mode);
  void                  (*UnInitialize)          (Port_t port);
  uint8_t               (*On)                    (Port_t port, Pin_t pin);
  uint8_t               (*Off)                   (Port_t port, Pin_t pin);
  uint8_t               (*Toggle)                (Port_t port, Pin_t pin);
  uint8_t               (*ReadOutput)            (Port_t port, Pin_t pin);

}GpioOutput;

extern GpioOutput GpioOutputDriver;















#endif //GpioOutput_h
