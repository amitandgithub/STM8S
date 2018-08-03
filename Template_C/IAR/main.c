

#include "stm8s.h"
#include "GpioOutput.h"

int main( void )
{
  uint8_t Output;
  GpioOutputDriver.Initialize(1,1);
  GpioOutputDriver.On(1,1);
  GpioOutputDriver.Off(1,1);
  GpioOutputDriver.Toggle(1,1);
  Output = GpioOutputDriver.ReadOutput(1,1);
  return 0;
}
