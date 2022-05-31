/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RS485_DE_Pin GPIO_PIN_13
#define RS485_DE_GPIO_Port GPIOC
#define I2C_SDA_Pin GPIO_PIN_2
#define I2C_SDA_GPIO_Port GPIOA
#define I2C_SCL_Pin GPIO_PIN_3
#define I2C_SCL_GPIO_Port GPIOA
#define I2C_INT_Pin GPIO_PIN_6
#define I2C_INT_GPIO_Port GPIOA
#define CAT1_VBUS_INT_Pin GPIO_PIN_7
#define CAT1_VBUS_INT_GPIO_Port GPIOA
#define HIGH_LED_Pin GPIO_PIN_0
#define HIGH_LED_GPIO_Port GPIOB
#define LOW_LED_Pin GPIO_PIN_1
#define LOW_LED_GPIO_Port GPIOB
#define CAT1_POW_Pin GPIO_PIN_2
#define CAT1_POW_GPIO_Port GPIOB
#define CAT1_TX_Pin GPIO_PIN_10
#define CAT1_TX_GPIO_Port GPIOB
#define CAT1_RX_Pin GPIO_PIN_11
#define CAT1_RX_GPIO_Port GPIOB
#define DO_CAT1_INT_Pin GPIO_PIN_12
#define DO_CAT1_INT_GPIO_Port GPIOB
#define I2C_NRST_Pin GPIO_PIN_13
#define I2C_NRST_GPIO_Port GPIOB
#define ACC_EN_Pin GPIO_PIN_14
#define ACC_EN_GPIO_Port GPIOB
#define BK_LED_Pin GPIO_PIN_15
#define BK_LED_GPIO_Port GPIOB
#define GPS_32K_Pin GPIO_PIN_8
#define GPS_32K_GPIO_Port GPIOA
#define RS485_TX_Pin GPIO_PIN_9
#define RS485_TX_GPIO_Port GPIOA
#define RS485_RX_Pin GPIO_PIN_10
#define RS485_RX_GPIO_Port GPIOA
#define CAT1_DG_INT_Pin GPIO_PIN_15
#define CAT1_DG_INT_GPIO_Port GPIOA
#define CAT1_RST_Pin GPIO_PIN_3
#define CAT1_RST_GPIO_Port GPIOB
#define ALARM_MODE_Pin GPIO_PIN_4
#define ALARM_MODE_GPIO_Port GPIOB
#define LEFT_LED_Pin GPIO_PIN_5
#define LEFT_LED_GPIO_Port GPIOB
#define RIGHT_LED_Pin GPIO_PIN_6
#define RIGHT_LED_GPIO_Port GPIOB
#define BUZZER_CTRL0_Pin GPIO_PIN_7
#define BUZZER_CTRL0_GPIO_Port GPIOB
#define BUZZER_CTRL1_Pin GPIO_PIN_8
#define BUZZER_CTRL1_GPIO_Port GPIOB
#define CAT1_INT_Pin GPIO_PIN_9
#define CAT1_INT_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
