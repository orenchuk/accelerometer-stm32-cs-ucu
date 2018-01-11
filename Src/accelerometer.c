/*
 * accelerometer.c
 *
 *  Created on: Dec 9, 2017
 *      Author: orenchuk
 */
#include "accelerometer.h"
#include "stm32f3_discovery_accelerometer.h"

int accelerometer_init()
{

	if (BSP_ACCELERO_Init() != ACCELERO_OK)
	{
	      /* Initialization Error */
		  printf("Error initializing HAL.");
	      while(1) {}
	}

	return 0;
}

int accelerometer_readXYZ(int16_t *pDataXYZ)
{
	BSP_ACCELERO_GetXYZ(pDataXYZ);
	return 0;
}
