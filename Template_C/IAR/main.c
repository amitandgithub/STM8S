

#include "stm8s.h"
#include "Gpio.h"
int main( void )
{
  GpioDrv.Initialize(GPIOA,GPIO_PIN_0,GPIO_MODE_OUT_PP_LOW_FAST);
  GpioDrv.On(GPIOA,GPIO_PIN_0);
  GpioDrv.Off(GPIOA,GPIO_PIN_0);
  GpioDrv.Toggle(GPIOA,GPIO_PIN_0);
  GpioDrv.ReadOutput(GPIOA,GPIO_PIN_0);
  GpioDrv.ReadInput(GPIOA,GPIO_PIN_0);

  return 0;
}
