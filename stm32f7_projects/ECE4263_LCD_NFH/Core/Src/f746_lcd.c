/*
 * f746_lcd.c
 *
 *  Created on: Oct 4, 2021
 *      Author: NFH
 */


#include "string.h"
#include "stdlib.h"
#include "stdbool.h"
#include "stdio.h"
#include "memory.h"
#include "stdint.h"
#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_exti.h"
#include "stm32f7xx_hal_flash_ex.h"
#include "stm32f7xx_hal_flash.h"
#include "stm32f7xx_hal_gpio.h"

void screenClear(UART_HandleTypeDef arg0){
	uint8_t clearInstruction[]={0x7C, 0x2D};
	HAL_UART_Transmit(&arg0, (uint8_t *) clearInstruction, sizeof(clearInstruction), HAL_MAX_DELAY);

}

void printLCD(UART_HandleTypeDef arg0, char *arg1){
	HAL_UART_Transmit(&arg0, (uint8_t *) arg1, strlen(arg1), HAL_MAX_DELAY);
}

