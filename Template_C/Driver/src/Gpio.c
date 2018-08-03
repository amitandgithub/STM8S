/******************
** FILE: Gpio.c
**
** DESCRIPTION:
**  Gpio Related Functionality
**
** CREATED: 8/3/2018, by Amit Chaudhary
******************/
#include "Gpio.h"


uint8_t Gpio_On(Port_t port, Pin_t pin)
{
  port->ODR |= (uint8_t)pin;
  return 0;
}

uint8_t Gpio_Off(Port_t port, Pin_t pin)
{
  port->ODR &= (uint8_t)(~pin);
  return 0;
}

uint8_t Gpio_Toggle(Port_t port, Pin_t pin)
{
  port->ODR ^= (uint8_t)pin;
  return 0;
}

uint8_t Gpio_ReadOutput(Port_t port, Pin_t pin)
{
  return ((uint8_t)port->ODR);
}

uint8_t Gpio_ReadInput(Port_t port, Pin_t pin)
{
  return (   ((uint8_t)port->IDR) & (pin) ? 1 : 0  );
}

Gpio GpioDrv = 
{
  GPIO_Init,
  GPIO_DeInit,
  Gpio_On,
  Gpio_Off,
  Gpio_Toggle,
  Gpio_ReadOutput,
  Gpio_ReadInput
};