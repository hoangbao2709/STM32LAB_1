/*
 * Ex4.c
 *
 *  Created on: Sep 17, 2024
 *      Author: PC
 */
#include "main.h"

static void Khong() {
    HAL_GPIO_WritePin(a4_GPIO_Port, a4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b4_GPIO_Port, b4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d4_GPIO_Port, d4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e4_GPIO_Port, e4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f4_GPIO_Port, f4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g4_GPIO_Port, g4_Pin, GPIO_PIN_SET);
}

static  void Mot() {
    HAL_GPIO_WritePin(a4_GPIO_Port, a4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(b4_GPIO_Port, b4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d4_GPIO_Port, d4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(e4_GPIO_Port, e4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f4_GPIO_Port, f4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g4_GPIO_Port, g4_Pin, GPIO_PIN_SET);
}

static void Hai() {
    HAL_GPIO_WritePin(a4_GPIO_Port, a4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b4_GPIO_Port, b4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(d4_GPIO_Port, d4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e4_GPIO_Port, e4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f4_GPIO_Port, f4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g4_GPIO_Port, g4_Pin, GPIO_PIN_RESET);
}

static void Ba() {
    HAL_GPIO_WritePin(a4_GPIO_Port, a4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b4_GPIO_Port, b4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d4_GPIO_Port, d4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e4_GPIO_Port, e4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f4_GPIO_Port, f4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g4_GPIO_Port, g4_Pin, GPIO_PIN_RESET);
}

static void Bon() {
    HAL_GPIO_WritePin(a4_GPIO_Port, a4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(b4_GPIO_Port, b4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d4_GPIO_Port, d4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(e4_GPIO_Port, e4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f4_GPIO_Port, f4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g4_GPIO_Port, g4_Pin, GPIO_PIN_RESET);
}

static void Nam() {
    HAL_GPIO_WritePin(a4_GPIO_Port, a4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b4_GPIO_Port, b4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d4_GPIO_Port, d4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e4_GPIO_Port, e4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f4_GPIO_Port, f4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g4_GPIO_Port, g4_Pin, GPIO_PIN_RESET);
}

static void Sau() {
    HAL_GPIO_WritePin(a4_GPIO_Port, a4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b4_GPIO_Port, b4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d4_GPIO_Port, d4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e4_GPIO_Port, e4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f4_GPIO_Port, f4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g4_GPIO_Port, g4_Pin, GPIO_PIN_RESET);
}

static void Bay() {
    HAL_GPIO_WritePin(a4_GPIO_Port, a4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b4_GPIO_Port, b4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d4_GPIO_Port, d4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(e4_GPIO_Port, e4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f4_GPIO_Port, f4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g4_GPIO_Port, g4_Pin, GPIO_PIN_SET);
}

static void Tam() {
    HAL_GPIO_WritePin(a4_GPIO_Port, a4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b4_GPIO_Port, b4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d4_GPIO_Port, d4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e4_GPIO_Port, e4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f4_GPIO_Port, f4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g4_GPIO_Port, g4_Pin, GPIO_PIN_RESET);
}

static void Chin() {
    HAL_GPIO_WritePin(a4_GPIO_Port, a4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b4_GPIO_Port, b4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d4_GPIO_Port, d4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e4_GPIO_Port, e4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f4_GPIO_Port, f4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g4_GPIO_Port, g4_Pin, GPIO_PIN_RESET);
}

static void display7SEG(int num) {
    switch(num) {
        case 0: Khong(); break;
        case 1: Mot(); break;
        case 2: Hai(); break;
        case 3: Ba(); break;
        case 4: Bon(); break;
        case 5: Nam(); break;
        case 6: Sau(); break;
        case 7: Bay(); break;
        case 8: Tam(); break;
        case 9: Chin(); break;
        default: Tam(); // Display nothing for invalid numbers
    }
}
