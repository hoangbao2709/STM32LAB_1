/*
 * component_1.c
 *
 *  Created on: Sep 12, 2024
 *      Author: PC
 */
#include "main.h"


static void Khong_1(void) {
    HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
}

static void Mot_1(void) {
    HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
}

static void Hai_1(void) {
    HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
}

static void Ba_1(void) {
    HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
}

static void Bon_1(void) {
    HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
}

static void Nam_1(void) {
    HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
}

static void Sau_1(void) {
    HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
}

static void Bay_1(void) {
    HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
}

static void Tam_1(void) {
    HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
}

static void Chin_1(void) {
    HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
}

static void display7SEG_1(int num) {
    switch(num) {
        case 0: Khong_1(); break;
        case 1: Mot_1(); break;
        case 2: Hai_1(); break;
        case 3: Ba_1(); break;
        case 4: Bon_1(); break;
        case 5: Nam_1(); break;
        case 6: Sau_1(); break;
        case 7: Bay_1(); break;
        case 8: Tam_1(); break;
        case 9: Chin_1(); break;
    }
}
