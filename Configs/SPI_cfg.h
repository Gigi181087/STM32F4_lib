/*
 * Spi_cgf.h
 *
 *  Created on: 30.03.2023
 *      Author: GPCec
 */

#ifndef LIBRS_STM32_F4XX_CONFIGS_SPICGF_H_
#define LIBRS_STM32_F4XX_CONFIGS_SPICGF_H_

#include "../Makros/Spi_makros.h"

#undef SPI_CHANNEL1_USED
#ifdef SPI_CHANNEL1_USED

/*
 * NSS Pin
 * Pin PA5									PIN_PA4
 * Pin PA15									PIN_PA15
 * Unused									UNUSED
 */
#	define SPI_CHANNEL1_NSS					UNUSED

/*
 * SCK Pin
 * Pin PA5									PIN_PA5
 * Pin PB3									PIN_PB3
 */
#	define SPI_CHANNEL1_SCK					PIN_PA5

/*
 * MISO Pin
 * Pin PA6									PIN_PA6
 * Pin PB4									PIN_PB4
 */
#	define SPI_CHANNEL1_MISO				PIN_PA6

/*
 * MOSI Pin
 * Pin PA7									PIN_PA7
 * Pin PB5									PIN_PB5
 */
#	define SPI_CHANNEL1_MOSI				PIN_PA7

/*
 * CPHA
 * Rising									SPI_CPHA_RISING				(0)
 * Falling									SPI_CPHA_FALLING			(1)
 */
#	define SPI_CHANNEL1_CPHA				SPI_CPHA_RISING

/*
 * CPOL
 * Idle low									SPI_CPOL_IDLELOW			(0)
 * Idle high								SPI_CPOL_IDLEHIGH			(1)
 */
#	define SPI_CHANNEL1_CPOL				SPI_CPOL_IDLELOW

/*
 * Master/ Slave
 * Slave									SPI_MASTERSEL_SLAVE			(0)
 * Master									SPI_MASTERSEL_MASTER		(1)
 */
#	define SPI_CHANNEL1_MASTERSEL			SPI_MASTERSEL_MASTER

/*
 * Baudrate
 * 84 MHz									SPI_BAUDRATE_84000KHZ		(0)
 * 42 MHz									SPI_BAUDRATE_42000KHZ		(1)
 * 21 MHz									SPI_BAUDRATE_21000KHZ		(2)
 * 10 MHz									SPI_BAUDRATE_10500KHZ		(3)
 * 5 MHz									SPI_BAUDRATE_5250KHZ		(4)
 * 2 MHz									SPI_BAUDRATE_2625KHZ		(5)
 * 1 MHz									SPI_BAUDRATE_1313KHZ		(6)
 * 650 KHz									SPI_BAUDRATE_656KHZ			(7)
 */
#	define SPI_CHANNEL1_BAUDRATE			SPI_BAUDRATE_84000KHZ

/*
 * SPE
 * Disabled 								SPI_SPE_DISABLED			(0)
 * Enabled									SPI_SPE_ENABLED				(1)
 */
#	define SPI_CHANNEL1_SPE					SPI_SPE_ENABLED

/*
 * SSI
 * Disabled									SPI_SSI_DISABLED			(0)
 * Enabled									SPI_SSI_ENABLED				(1)
 */
#define SPI_CHANNEL1_SSI					SPI_SSI_DISABLED

/*
 * SSM
 * Disabled									SPI_SSM_DISABLED			(0)
 * Enabled									SPI_SSM_ENABLED				(1)
 */
#define SPI_CHANNEL1_SSM					SPI_SSM_DISABLED

/* Rx Only
 * Disabled 								SPI_RXONLY_DISABLED			(0)
 * Enabled 									SPI_RXONLY_ENABLED			(1)
 */
#define SPI_CHANNEL1_RXONLY					SPI_RXONLY_DISABLED

/*
 * Dataframe Format
 * 8 Bit 									SPI_DATAFRAMEFORMAT_8BIT	(0)
 * 16 Bit									SPI_DATAFRAMEFORMAT_16BIT	(1)
 */
#define SPI_CHANNEL1_DATAFRAMEFORMAT		SPI_DATAFRAMEFORMAT_8BIT

/*
 * CRC Next
 * Disabled									SPI_CRCNEXT_DISABLED		(0)
 * Enabled									SPI_CRCNEXT_ENABLED			(1)
 */
#define SPI_CHANNEL1_CRCNEXT				SPI_CRCNEXTDISABLED

/*
 * CRC
 * Disabled									SPI_CRC_DISABLED			(0)
 * Enabled									SPI_CRC_ENABLED				(1)
 */
#define SPI_CHANNEL1_CRC					SPI_CRC_DISABLED

/*
 * BiDi Oe
 * Disabled									SPI_BIDIOE_DISABLED			(0)
 * Enabled									SPI_BIDIOE_ENABLED			(1)
 */
#define SPI_CHANNEL1_BIDIOE					SPI_BIDIOE_DISABLED

/*
 * BiDi Mode
 * Disabled									SPI_BIDIMODE_DISABLED		(0)
 * Enabled									SPI_BIDIMODE_ENABLED		(1)
 */
#define SPI_CHANNEL1_BIDIMODE				SPI_BIDIMODE_DISABLED

#endif // SPI_CHANNEL1_USED

#undef SPI_CHANNEL2_USED
#ifdef SPI_CHANNEL2_USED

/*
 * NSS Pin
 * Pin PA5									PIN_PA4
 * Pin PA15									PIN_PA15
 * Unused									UNUSED
 */
#	define SPI_CHANNEL2_NSS					UNUSED

/*
 * SCK Pin
 * Pin PA5									PIN_PA5
 * Pin PB3									PIN_PB3
 */
#	define SPI_CHANNEL2_SCK					PIN_PA5

/*
 * MISO Pin
 * Pin PA6									PIN_PA6
 * Pin PB4									PIN_PB4
 */
#	define SPI_CHANNEL2_MISO				PIN_PA6

/*
 * MOSI Pin
 * Pin PA7									PIN_PA7
 * Pin PB5									PIN_PB5
 */
#	define SPI_CHANNEL2_MOSI				PIN_PA7

/*
 * CPHA
 * Rising									SPI_CPHA_RISING				(0)
 * Falling									SPI_CPHA_FALLING			(1)
 */
#	define SPI_CHANNEL2_CPHA				SPI_CPHA_RISING

/*
 * CPOL
 * Idle low									SPI_CPOL_IDLELOW			(0)
 * Idle high								SPI_CPOL_IDLEHIGH			(1)
 */
#	define SPI_CHANNEL2_CPOL				SPI_CPOL_IDLELOW

/*
 * Master/ Slave
 * Slave									SPI_MASTERSEL_SLAVE			(0)
 * Master									SPI_MASTERSEL_MASTER		(1)
 */
#	define SPI_CHANNEL2_MASTERSEL			SPI_MASTERSEL_MASTER

/*
 * Baudrate
 * 84 MHz									SPI_BAUDRATE_84000KHZ		(0)
 * 42 MHz									SPI_BAUDRATE_42000KHZ		(1)
 * 21 MHz									SPI_BAUDRATE_21000KHZ		(2)
 * 10 MHz									SPI_BAUDRATE_10500KHZ		(3)
 * 5 MHz									SPI_BAUDRATE_5250KHZ		(4)
 * 2 MHz									SPI_BAUDRATE_2625KHZ		(5)
 * 1 MHz									SPI_BAUDRATE_1313KHZ		(6)
 * 650 KHz									SPI_BAUDRATE_656KHZ			(7)
 */
#	define SPI_CHANNEL2_BAUDRATE			SPI_BAUDRATE_84000KHZ

/*
 * SPE
 * Disabled 								SPI_SPE_DISABLED			(0)
 * Enabled									SPI_SPE_ENABLED				(1)
 */
#	define SPI_CHANNEL2_SPE					SPI_SPE_ENABLED

/*
 * SSI
 * Disabled									SPI_SSI_DISABLED			(0)
 * Enabled									SPI_SSI_ENABLED				(1)
 */
#define SPI_CHANNEL2_SSI					SPI_SSI_DISABLED

/*
 * SSM
 * Disabled									SPI_SSM_DISABLED			(0)
 * Enabled									SPI_SSM_ENABLED				(1)
 */
#define SPI_CHANNEL2_SSM					SPI_SSM_DISABLED

/* Rx Only
 * Disabled 								SPI_RXONLY_DISABLED			(0)
 * Enabled 									SPI_RXONLY_ENABLED			(1)
 */
#define SPI_CHANNEL2_RXONLY					SPI_RXONLY_DISABLED

/*
 * Dataframe Format
 * 8 Bit 									SPI_DATAFRAMEFORMAT_8BIT	(0)
 * 16 Bit									SPI_DATAFRAMEFORMAT_16BIT	(1)
 */
#define SPI_CHANNEL2_DATAFRAMEFORMAT		SPI_DATAFRAMEFORMAT_8BIT

/*
 * CRC Next
 * Disabled									SPI_CRCNEXT_DISABLED		(0)
 * Enabled									SPI_CRCNEXT_ENABLED			(1)
 */
#define SPI_CHANNEL2_CRCNEXT				SPI_CRCNEXTDISABLED

/*
 * CRC
 * Disabled									SPI_CRC_DISABLED			(0)
 * Enabled									SPI_CRC_ENABLED				(1)
 */
#define SPI_CHANNEL2_CRC					SPI_CRC_DISABLED

/*
 * BiDi Oe
 * Disabled									SPI_BIDIOE_DISABLED			(0)
 * Enabled									SPI_BIDIOE_ENABLED			(1)
 */
#define SPI_CHANNEL2_BIDIOE					SPI_BIDIOE_DISABLED

/*
 * BiDi Mode
 * Disabled									SPI_BIDIMODE_DISABLED		(0)
 * Enabled									SPI_BIDIMODE_ENABLED		(1)
 */
#define SPI_CHANNEL2_BIDIMODE				SPI_BIDIMODE_DISABLED

#endif // SPI_CHANNEL2_USED

#undef SPI_CHANNEL3_USED
#ifdef SPI_CHANNEL3_USED

/*
 * NSS Pin
 * Pin PA5									PIN_PA4
 * Pin PA15									PIN_PA15
 * Unused									UNUSED
 */
#	define SPI_CHANNEL3_NSS					UNUSED

/*
 * SCK Pin
 * Pin PA5									PIN_PA5
 * Pin PB3									PIN_PB3
 */
#	define SPI_CHANNEL3_SCK					PIN_PA5

/*
 * MISO Pin
 * Pin PA6									PIN_PA6
 * Pin PB4									PIN_PB4
 */
#	define SPI_CHANNEL3_MISO				PIN_PA6

/*
 * MOSI Pin
 * Pin PA7									PIN_PA7
 * Pin PB5									PIN_PB5
 */
#	define SPI_CHANNEL3_MOSI				PIN_PA7

/*
 * CPHA
 * Rising									SPI_CPHA_RISING				(0)
 * Falling									SPI_CPHA_FALLING			(1)
 */
#	define SPI_CHANNEL3_CPHA				SPI_CPHA_RISING

/*
 * CPOL
 * Idle low									SPI_CPOL_IDLELOW			(0)
 * Idle high								SPI_CPOL_IDLEHIGH			(1)
 */
#	define SPI_CHANNEL3_CPOL				SPI_CPOL_IDLELOW

/*
 * Master/ Slave
 * Slave									SPI_MASTERSEL_SLAVE			(0)
 * Master									SPI_MASTERSEL_MASTER		(1)
 */
#	define SPI_CHANNEL3_MASTERSEL			SPI_MASTERSEL_MASTER

/*
 * Baudrate
 * 84 MHz									SPI_BAUDRATE_84000KHZ		(0)
 * 42 MHz									SPI_BAUDRATE_42000KHZ		(1)
 * 21 MHz									SPI_BAUDRATE_21000KHZ		(2)
 * 10 MHz									SPI_BAUDRATE_10500KHZ		(3)
 * 5 MHz									SPI_BAUDRATE_5250KHZ		(4)
 * 2 MHz									SPI_BAUDRATE_2625KHZ		(5)
 * 1 MHz									SPI_BAUDRATE_1313KHZ		(6)
 * 650 KHz									SPI_BAUDRATE_656KHZ			(7)
 */
#	define SPI_CHANNEL3_BAUDRATE			SPI_BAUDRATE_84000KHZ

/*
 * SPE
 * Disabled 								SPI_SPE_DISABLED			(0)
 * Enabled									SPI_SPE_ENABLED				(1)
 */
#	define SPI_CHANNEL3_SPE					SPI_SPE_ENABLED

/*
 * SSI
 * Disabled									SPI_SSI_DISABLED			(0)
 * Enabled									SPI_SSI_ENABLED				(1)
 */
#define SPI_CHANNEL3_SSI					SPI_SSI_DISABLED

/*
 * SSM
 * Disabled									SPI_SSM_DISABLED			(0)
 * Enabled									SPI_SSM_ENABLED				(1)
 */
#define SPI_CHANNEL3_SSM					SPI_SSM_DISABLED

/* Rx Only
 * Disabled 								SPI_RXONLY_DISABLED			(0)
 * Enabled 									SPI_RXONLY_ENABLED			(1)
 */
#define SPI_CHANNEL3_RXONLY					SPI_RXONLY_DISABLED

/*
 * Dataframe Format
 * 8 Bit 									SPI_DATAFRAMEFORMAT_8BIT	(0)
 * 16 Bit									SPI_DATAFRAMEFORMAT_16BIT	(1)
 */
#define SPI_CHANNEL3_DATAFRAMEFORMAT		SPI_DATAFRAMEFORMAT_8BIT

/*
 * CRC Next
 * Disabled									SPI_CRCNEXT_DISABLED		(0)
 * Enabled									SPI_CRCNEXT_ENABLED			(1)
 */
#define SPI_CHANNEL3_CRCNEXT				SPI_CRCNEXTDISABLED

/*
 * CRC
 * Disabled									SPI_CRC_DISABLED			(0)
 * Enabled									SPI_CRC_ENABLED				(1)
 */
#define SPI_CHANNEL3_CRC					SPI_CRC_DISABLED

/*
 * BiDi Oe
 * Disabled									SPI_BIDIOE_DISABLED			(0)
 * Enabled									SPI_BIDIOE_ENABLED			(1)
 */
#define SPI_CHANNEL3_BIDIOE					SPI_BIDIOE_DISABLED

/*
 * BiDi Mode
 * Disabled									SPI_BIDIMODE_DISABLED		(0)
 * Enabled									SPI_BIDIMODE_ENABLED		(1)
 */
#define SPI_CHANNEL3_BIDIMODE				SPI_BIDIMODE_DISABLED

#endif // SPI_CHANNEL3_USED

#endif /* LIBRS_STM32_F4XX_CONFIGS_SPICGF_H_ */

