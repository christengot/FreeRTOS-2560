/* \file main
 * \brief Main task runner
 */

#include "FreeRTOSConfig.h"
#include "FreeRTOS.h"
#include "task.h"
#include "mytasks.h"

int main(void) {

	DDRB = 0xFF;
	
	/* Create ready light task */
	xTaskCreate( vLEDFlashTask, (signed char *) "LED", configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY, NULL );
	
	/* Start scheduler */
	vTaskStartScheduler();		// OC1A now toggles, at approximately 970 Hz.
	
	
	PORTA = 0xBC;	// Not reaching here, which is good
	
	return 0;
}