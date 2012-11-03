/*
 * \file mytasks.h
 * \brief Header for FreeRTOS custom task file
 */
#ifndef MYTASKS_H
#define MYTASKS_H
#endif

void vLEDInit(void);
void vLEDToggle(void);
void vLEDFlashTask(void *pvParamaters);
void vApplicationIdleHook(void);