/******************
** FILE: GpioOutput.c
**
** DESCRIPTION:
**  Gpio Output Related Functionality
**
** CREATED: 8/3/2018, by Amit Chaudhary
******************/
#include "GpioOutput.h"


uint8_t GpioOutput_Initialize(Port_t port, Pin_t pin, Mode_t mode)
{
  GPIO_Init(port, pin, mode);
  return 0;
}

uint8_t GpioOutput_UnInitialize(Port_t port, Pin_t pin)
{

  return 0;
}

uint8_t GpioOutput_On(Port_t port, Pin_t pin)
{
  port->ODR |= (uint8_t)pin;
  return 0;
}

uint8_t GpioOutput_Off(Port_t port, Pin_t pin)
{
  port->ODR &= (uint8_t)(~pin);
  return 0;
}

uint8_t GpioOutput_Toggle(Port_t port, Pin_t pin)
{
  port->ODR ^= (uint8_t)pin;
  return 0;
}

uint8_t GpioOutput_ReadOutput(Port_t port, Pin_t pin)
{
  return ((uint8_t)port->ODR);
}

GpioOutput GpioOutputDriver = 
{
  GPIO_Init,
  //GpioOutput_Initialize,
  //GpioOutput_UnInitialize,
  GPIO_DeInit,
  GpioOutput_On,
  GpioOutput_Off,
  GpioOutput_Toggle,
  GpioOutput_ReadOutput  
};