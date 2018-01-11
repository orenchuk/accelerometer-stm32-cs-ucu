/*
 * gyro.c
 *
 *  Created on: Dec 26, 2017
 *      Author: orenchuk
 */
#include "gyro.h"
#include "stm32f3_discovery_gyroscope.h"

int gyro_init()
{
	if (BSP_GYRO_Init() != GYRO_OK)
	{
		/* Initialization Error */
		printf("Error initializing HAL.");
		while(1) {}
	}

	return 0;
}

int gyro_readXYZ(float* pfData) {
	BSP_GYRO_GetXYZ(pfData);
	return 0;
}
