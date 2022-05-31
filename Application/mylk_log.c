#include "mylk_include.h"

//struct
//{
//  uint16_t adc1;
//  uint16_t adc2;
//}ADC_Value[6];

//void HAL_WWDG_EarlyWakeupCallback(WWDG_HandleTypeDef *hwwdg)
//{
//  HAL_WWDG_Refresh(hwwdg);
//}


static TX_MUTEX logMut;

uint32_t LOG_Init(void)
{
	return tx_mutex_create(&logMut, "logMut", TX_NO_INHERIT);
}

int32_t LOG(const char *sFormat, ...)
{
  int32_t r;
  va_list ParamList;

  va_start(ParamList, sFormat);
  tx_mutex_get(&logMut, TX_WAIT_FOREVER);
  r = vprintf(sFormat, ParamList);
  tx_mutex_put(&logMut);
  va_end(ParamList);

  return r;
}




#ifdef __GNUC__
/* With GCC, small printf (option LD Linker->Libraries->Small printf
   set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */
PUTCHAR_PROTOTYPE
{
  SEGGER_RTT_PutChar(0, ch);
  return ch;
}

