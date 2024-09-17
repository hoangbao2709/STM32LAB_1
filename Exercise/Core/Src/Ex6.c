/*
 * Ex6.c
 *
 *  Created on: Sep 17, 2024
 *      Author: PC
 */

#include "main.h"

static void init_Exercise_6(int counter){
	switch (counter) {
		case 0:
			HAL_GPIO_WritePin(o0_GPIO_Port, o0_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(o1_GPIO_Port, o1_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(o2_GPIO_Port, o2_Pin, 1);
			break;
		case 3:
			HAL_GPIO_WritePin(o3_GPIO_Port, o3_Pin, 1);
			break;
		case 4:
			HAL_GPIO_WritePin(o4_GPIO_Port, o4_Pin, 1);
			break;
		case 5:
			HAL_GPIO_WritePin(o5_GPIO_Port, o5_Pin, 1);
			break;
		case 6:
			HAL_GPIO_WritePin(o6_GPIO_Port, o6_Pin, 1);
			break;
		case 7:
			HAL_GPIO_WritePin(o7_GPIO_Port, o7_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(o8_GPIO_Port, o8_Pin, 1);
			break;
		case 9:
			HAL_GPIO_WritePin(o9_GPIO_Port, o9_Pin, 1);
			break;
		case 10:
			HAL_GPIO_WritePin(o10_GPIO_Port, o10_Pin, 1);
			break;
		case 11:
			HAL_GPIO_WritePin(o11_GPIO_Port, o11_Pin, 1);
			break;
	}
}

static void clearAllClock(){
	HAL_GPIO_WritePin(o0_GPIO_Port, o0_Pin, 0);
	HAL_GPIO_WritePin(o1_GPIO_Port, o1_Pin, 0);
	HAL_GPIO_WritePin(o2_GPIO_Port, o2_Pin, 0);
	HAL_GPIO_WritePin(o3_GPIO_Port, o3_Pin, 0);
	HAL_GPIO_WritePin(o4_GPIO_Port, o4_Pin, 0);
	HAL_GPIO_WritePin(o5_GPIO_Port, o5_Pin, 0);
	HAL_GPIO_WritePin(o6_GPIO_Port, o6_Pin, 0);
	HAL_GPIO_WritePin(o7_GPIO_Port, o7_Pin, 0);
	HAL_GPIO_WritePin(o8_GPIO_Port, o8_Pin, 0);
	HAL_GPIO_WritePin(o9_GPIO_Port, o9_Pin, 0);
	HAL_GPIO_WritePin(o10_GPIO_Port, o10_Pin, 0);
	HAL_GPIO_WritePin(o11_GPIO_Port, o11_Pin, 0);
}
