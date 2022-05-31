#include "mylk_include.h"

extern void SystemClock_Config(void);

int main(void)
{
  
  *(uint32_t*)(0xffffffff) = 0x55;
  HAL_Init();
  SystemClock_Config();
  HAL_SuspendTick();
  /* Enter the ThreadX kernel.  */
  tx_kernel_enter();
}


void tx_application_define(void *first_unused_memory)
{

}


