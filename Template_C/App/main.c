

#include "stm8s.h"
#include "Gpio.h"
int main( void )
{
  uint16_t i =0;
  GpioDrv.Initialize(GPIOB,GPIO_PIN_5,GPIO_MODE_OUT_PP_LOW_FAST);
  while(1)
  {
  for(i = 0; i<0xffff;i++);
  GpioDrv.Toggle(GPIOB,GPIO_PIN_5);
  for(i = 0; i<0xffff;i++);
  }

}
