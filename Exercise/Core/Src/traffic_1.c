/*
 * trafic_1.c
 *
 *  Created on: Sep 17, 2024
 *      Author: PC
 */

#include "main.h"

static void LED_RED_1(void) {  // Added parentheses here
    HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_RESET);
}

static void LED_GREEN_1(void) {  // Added parentheses here
    HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
}

static void LED_YELLOW_1(void){
	HAL_GPIO_WritePin ( LED_RED_1_GPIO_Port , LED_RED_1_Pin , GPIO_PIN_RESET );
	HAL_GPIO_WritePin ( LED_YELLOW_1_GPIO_Port , LED_YELLOW_1_Pin , GPIO_PIN_SET );
    HAL_GPIO_WritePin ( LED_GREEN_1_GPIO_Port , LED_GREEN_1_Pin , GPIO_PIN_RESET );
}
