

#include "stm8s.h"
#include "GpioOutput.h"

int main( void )
{
  GpioOutputDriver.Initialize(GPIOA,GPIO_PIN_0,GPIO_MODE_OUT_PP_LOW_FAST);
  GpioOutputDriver.On(GPIOA,GPIO_PIN_0);
  GpioOutputDriver.Off(GPIOA,GPIO_PIN_0);
  GpioOutputDriver.Toggle(GPIOA,GPIO_PIN_0);
  GpioOutputDriver.ReadOutput(GPIOA,GPIO_PIN_0);
  return 0;
}
