/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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

/* Includes ------------------------------------------------------------------*/
#include "main.h"

int main(void)
{
	//GPIO configuration
	RCC->IOPENR 	|= RCC_IOPENR_GPIOBEN;						//Enable GPIOB clock
	GPIOB->MODER 	= GPIO_MODER_MODE0_0 | GPIO_MODER_MODE1_0;	//Set GPIOB pin 0 and 1 as output
	GPIOB->BSRR 	|= GPIO_BSRR_BR_0 | GPIO_BSRR_BR_1;			//Set pin to low

	RCC->IOPENR 	|= RCC_IOPENR_GPIOAEN;						//Enable GPIOA clock
	GPIOA->MODER 	&= ~GPIO_MODER_MODE7_1;						//Set GPIOA pin 7
	GPIOA->BSRR 	|= GPIO_BSRR_BR_7;							//Set pin to low


	while(1)
	{

	}

	return 0;
}
