#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H
/* Here is a good place to include header files that are required across
your application. */
#include <avr/io.h>
#define configUSE_PREEMPTION			1
#define configUSE_IDLE_HOOK				1
#define configCPU_CLOCK_HZ				( ( unsigned long ) 8000000 )
#define configTICK_RATE_HZ				( ( unsigned long ) 250 )
#define configMAX_PRIORITIES			5
#define configMINIMAL_STACK_SIZE		128
#define configTOTAL_HEAP_SIZE			10240
#define configMAX_TASK_NAME_LEN			16
#define configUSE_TRACE_FACILITY		0
#define configUSE_16_BIT_TICKS			1
#define configIDLE_SHOULD_YIELD			1
#define configUSE_TICK_HOOK				0
#define configUSE_CO_ROUTINES			0
#define configUSE_TIMERS				0
#define INCLUDE_vTaskPrioritySet		1
#define INCLUDE_uxTaskPriorityGet		1
#define INCLUDE_vTaskDelete				1
#define INCLUDE_vTaskCleanUpResources	0
#define INCLUDE_vTaskSuspend			1
#define INCLUDE_vTaskDelayUntil			1
#define INCLUDE_vTaskDelay				1
#endif /* FREERTOS_CONFIG_H */