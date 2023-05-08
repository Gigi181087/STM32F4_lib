#ifndef _STM32F4__SPI__MAKROS_CFG__H_
#define _STM32F4__SPI__MAKROS_CFG__H_

/*
 * Makros for CPHA
 */
#define RISING			0
#define FALLING			1

/*
 * Makros for CPOL
 */
#define IDLELOW			0
#define IDLEHIGH		1

/*
 * Makros for Master Select
 */
#define SPI_MASTERSEL_SLAVE			0
#define SPI_MASTERSEL_MASTER		1


/*
 * Makros for Baudrate STM32F4xx
 */
#define SPI_BAUDRATE_84000KHZ		0
#define SPI_BAUDRATE_42000KHZ		1
#define SPI_BAUDRATE_21000KHZ		2
#define SPI_BAUDRATE_10500KHZ		3
#define SPI_BAUDRATE_5250KHZ		4
#define SPI_BAUDRATE_2625KHZ		5
#define SPI_BAUDRATE_1313KHZ		6
#define SPI_BAUDRATE_656KHZ			7

/*
 * Makros for Master Select
 */
#define SPI_SPE_DISABLED			0
#define SPI_SPE_ENABLED				1
#endif //_STM32F4__SPI__MAKROS_CFG__H_
