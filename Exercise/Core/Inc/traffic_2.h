/*
 * traffic_2.h
 *
 *  Created on: Sep 12, 2024
 *      Author: PC
 */

#ifndef INC_TRAFFIC_2_H_
#define INC_TRAFFIC_2_H_

void LED_RED_2(void) {  // Added parentheses here
    HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);
}

void LED_GREEN_2(void) {  // Added parentheses here
    HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
}

void LED_YELLOW_2(void){
	HAL_GPIO_WritePin ( LED_RED_2_GPIO_Port , LED_RED_2_Pin , GPIO_PIN_RESET );
	HAL_GPIO_WritePin ( LED_YELLOW_2_GPIO_Port , LED_YELLOW_2_Pin , GPIO_PIN_SET );
    HAL_GPIO_WritePin ( LED_GREEN_2_GPIO_Port , LED_GREEN_2_Pin , GPIO_PIN_RESET );
}

#endif /* INC_TRAFFIC_2_H_ */
