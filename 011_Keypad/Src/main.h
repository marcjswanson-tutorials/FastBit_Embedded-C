/*
 * main.h
 *
 *  Created on: Aug 29, 2020
 *      Author: marc
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

typedef struct
{
	uint32_t gpioa_en 		: 1;
	uint32_t gpiob_en 		: 1;
	uint32_t gpioc_en 		: 1;
	uint32_t gpiod_en 		: 1;
	uint32_t gpioe_en 		: 1;
	uint32_t gpiof_en 		: 1;
	uint32_t gpiog_en 		: 1;
	uint32_t gpioh_en 		: 1;
	uint32_t gpioi_en 		: 1;
	uint32_t reserved_1		: 3;
	uint32_t crc_en			: 1;
	uint32_t reserved_2		: 5;
	uint32_t bkpsram_en		: 1;
	uint32_t reserved_3		: 1;
	uint32_t ccmdataram_en	: 1;
	uint32_t dma1_en		: 1;
	uint32_t dma2_en		: 1;
	uint32_t dma2d_en		: 1;
	uint32_t reserved_4		: 1;
	uint32_t ethmac_en		: 1;
	uint32_t ethmactx_en	: 1;
	uint32_t ethmacrx_en	: 1;
	uint32_t ethmacptp_en	: 1;
	uint32_t otghs_en		: 1;
	uint32_t otghsulpi_en	: 1;
	uint32_t reserved_5		: 1;

} RCC_AHB1ENR_t;

typedef struct
{
	uint32_t mode_r0	: 2;
	uint32_t mode_r1	: 2;
	uint32_t mode_r2	: 2;
	uint32_t mode_r3	: 2;
	uint32_t mode_r4	: 2;
	uint32_t mode_r5	: 2;
	uint32_t mode_r6	: 2;
	uint32_t mode_r7	: 2;
	uint32_t mode_r8	: 2;
	uint32_t mode_r9	: 2;
	uint32_t mode_r10	: 2;
	uint32_t mode_r11	: 2;
	uint32_t mode_r12	: 2;
	uint32_t mode_r13	: 2;
	uint32_t mode_r14	: 2;
	uint32_t mode_r15	: 2;

} GPIOx_MODER_t;

typedef struct
{
	uint32_t id_r0	: 1;
	uint32_t id_r1	: 1;
	uint32_t id_r2	: 1;
	uint32_t id_r3	: 1;
	uint32_t id_r4	: 1;
	uint32_t id_r5	: 1;
	uint32_t id_r6	: 1;
	uint32_t id_r7	: 1;
	uint32_t id_r8	: 1;
	uint32_t id_r9	: 1;
	uint32_t id_r10	: 1;
	uint32_t id_r11	: 1;
	uint32_t id_r12	: 1;
	uint32_t id_r13	: 1;
	uint32_t id_r14	: 1;
	uint32_t id_r15	: 1;
	uint32_t reserved : 16;

} GPIOx_IDR_t;

typedef struct
{
	uint32_t od_r0	: 1;
	uint32_t od_r1	: 1;
	uint32_t od_r2	: 1;
	uint32_t od_r3	: 1;
	uint32_t od_r4	: 1;
	uint32_t od_r5	: 1;
	uint32_t od_r6	: 1;
	uint32_t od_r7	: 1;
	uint32_t od_r8	: 1;
	uint32_t od_r9	: 1;
	uint32_t od_r10	: 1;
	uint32_t od_r11	: 1;
	uint32_t od_r12	: 1;
	uint32_t od_r13	: 1;
	uint32_t od_r14	: 1;
	uint32_t od_r15	: 1;
	uint32_t reserved : 16;

} GPIOx_ODR_t;

typedef struct
{
	uint32_t pupd_r0	: 2;
	uint32_t pupd_r1	: 2;
	uint32_t pupd_r2	: 2;
	uint32_t pupd_r3	: 2;
	uint32_t pupd_r4	: 2;
	uint32_t pupd_r5	: 2;
	uint32_t pupd_r6	: 2;
	uint32_t pupd_r7	: 2;
	uint32_t pupd_r8	: 2;
	uint32_t pupd_r9	: 2;
	uint32_t pupd_r10	: 2;
	uint32_t pupd_r11	: 2;
	uint32_t pupd_r12	: 2;
	uint32_t pupd_r13	: 2;
	uint32_t pupd_r14	: 2;
	uint32_t pupd_r15	: 2;

} GPIOx_PUPDR_t;

#endif /* MAIN_H_ */
