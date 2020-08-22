/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdio.h>
#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#define RCC			0x40023800
#define GPIOD		0x40020C00

#define RCC_AHB1ENR		(RCC + 0x30)
#define GPIOD_MODER		(GPIOD + 0x00)
#define GPIOD_ODR		(GPIOD + 0x14)

int main(void)
{
	uint32_t* pRCC_AHB1EnrReg = (uint32_t*) RCC_AHB1ENR;
	uint32_t* pGPIOD_ModeReg = (uint32_t*) GPIOD_MODER;
	uint32_t* pGPIOD_OutputDataDReg	= (uint32_t*) GPIOD_ODR;

	printf("Program starting:\n");
	printf("\t- LEDs OFF\n");
	// enable the peripheral D clock
	*pRCC_AHB1EnrReg |= ( 1 << 3 );

	// set the mode - MODER15-MODER12 (LED3-LED6) Output (01)
	*pGPIOD_ModeReg &= ~( 0xFF << 24 ); 	// 0x00FFFFFF;
	*pGPIOD_ModeReg |=  ( 0x55 << 24 ); 	// 0x55000000;

	// turn on led - ODR15-ODR12 = 1
	*pGPIOD_OutputDataDReg |= ( 0xF << 12 );	// 0xF000;


	printf("\t- LEDs On\n");

	/* Loop forever */
	while( 1 )
	{
		long long delay = 1000000;
		for ( int i=0; i<delay; i++ );

		*pGPIOD_OutputDataDReg &= ( 0x0 << 12 );
		printf("\t- LEDs OFF\n");

		for ( int i=0; i<delay; i++ );

		*pGPIOD_OutputDataDReg |= ( 0xF << 12 );
		printf("\t- LEDs ON\n");

	}

}
