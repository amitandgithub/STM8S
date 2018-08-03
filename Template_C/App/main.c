

#include "stm8s.h"
#include "Gpio.h"
int main( void )
{
  GpioDrv.Initialize(GPIOB,GPIO_PIN_5,GPIO_MODE_OUT_PP_LOW_FAST);
  GpioDrv.On(GPIOB,GPIO_PIN_5);
  GpioDrv.Off(GPIOB,GPIO_PIN_5);
  GpioDrv.Toggle(GPIOB,GPIO_PIN_5);
  GpioDrv.ReadOutput(GPIOB,GPIO_PIN_5);
  GpioDrv.ReadInput(GPIOB,GPIO_PIN_5);

  return 0;
}
