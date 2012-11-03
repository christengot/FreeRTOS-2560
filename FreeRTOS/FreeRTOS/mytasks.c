/*
 * \file mytasks
 * \brief User made tasks for FreeRTOS
 */

#include <avr/io.h>
#include "FreeRTOS.h"
#include "task.h"

void vLEDInit(void) {
	DDRA = 0xFF;
	DDRB = 0xFF;		// OC1A pin output
	PORTA = 0b01011011;
}

void vLEDToggle(void) {
	PORTA = ~(PINA & (1<<PINA0));
}	

/* Task that simply blinks an LED every one second */
void vLEDFlashTask(void *pvParameters) {
	portTickType xLastWakeTime;
	const portTickType xFrequency = 2;
	vLEDInit();
	
	/* Get current time */
	xLastWakeTime = xTaskGetTickCount();
	
	for(;;) {
		/* Wait half a second */
		vTaskDelayUntil( &xLastWakeTime, 500);
		
		/* Toggle LED */
		vLEDToggle();
	}
}

void vApplicationIdleHook(void) {}