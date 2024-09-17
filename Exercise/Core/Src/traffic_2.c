/*
 * traffic_2.c
 *
 *  Created on: Sep 17, 2024
 *      Author: PC
 */
#include "main.h"

static void LED_RED_2(void) {
    HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);
}

static void LED_GREEN_2(void) {
    HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
}

static void LED_YELLOW_2(void){
	HAL_GPIO_WritePin ( LED_RED_2_GPIO_Port , LED_RED_2_Pin , GPIO_PIN_RESET );
	HAL_GPIO_WritePin ( LED_YELLOW_2_GPIO_Port , LED_YELLOW_2_Pin , GPIO_PIN_SET );
    HAL_GPIO_WritePin ( LED_GREEN_2_GPIO_Port , LED_GREEN_2_Pin , GPIO_PIN_RESET );
}
