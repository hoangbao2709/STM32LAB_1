/*
 * traffic_1.h
 *
 *  Created on: Sep 12, 2024
 *      Author: PC
 */
#include "main.h"

#ifndef INC_TRAFFIC_1_H_
#define INC_TRAFFIC_1_H_

void LED_RED_1(void) {  // Added parentheses here
    HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_RESET);
}

void LED_GREEN_1(void) {  // Added parentheses here
    HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
}

void LED_YELLOW_1(void){
	HAL_GPIO_WritePin ( LED_RED_1_GPIO_Port , LED_RED_1_Pin , GPIO_PIN_RESET );
	HAL_GPIO_WritePin ( LED_YELLOW_1_GPIO_Port , LED_YELLOW_1_Pin , GPIO_PIN_SET );
    HAL_GPIO_WritePin ( LED_GREEN_1_GPIO_Port , LED_GREEN_1_Pin , GPIO_PIN_RESET );
}

#endif /* INC_TRAFFIC_1_H_ */
