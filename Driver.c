#include <stdint.h>
#include "Driver.h"

void SPI_Init(void);
void GPIO_Init(void);
void ResetClockControl_Init(void);


void STM32_Init(void) {
#ifdef _F4XX_
    inline SPI_Init(void);
#endif    

    return;
}


void SPI_Init(void) {

#ifdef SPI_CHANNEL1_USED
	uint16_t spi1_cr1 = 0;
	spi1_cr1 |= SPI_CHANNEL1_CPHA;
	spi1_cr1 |= SPI_CHANNEL1_CPOL << 1;
	spi1_cr1 |= SPI_CHANNEL1_MASTERSEL << 2;
	spi1_cr1 |= SPI_CHANNEL1_BAUDRATE << 3;
	spi1_cr1 |= SPI_CHANNEL1_SPE << 6;
	spi1_cr1 |= SPI_CHANNEL1_SSI << 8;
	spi1_cr1 |= SPI_CHANNEL1_SSM << 9;
	spi1_cr1 |= SPI_CHANNEL1_RXONLY << 10;
	spi1_cr1 |= SPI_CHANNEL1_DATAFRAMEFORMAT << 11;
	spi1_cr1 |= SPI_CHANNEL1_CRCNEXT << 12;
	spi1_cr1 |= SPI_CHANNEL1_CRC << 13;
	spi1_cr1 |= SPI_CHANNEL1_BIDIOE << 14;
	spi1_cr1 |= SPI_CHANNEL1_BIDIMODE << 15;
	SPI1->CR1 = spi1_cr1;

	uint16_t spi1_cr2 = 0;
	spi1_cr2 |= SPI_CHANNEL1_RXDMAEN;
	spi1_cr2 |= SPI_CHANNEL1_TXDMAEN << 1;
	spi1_cr2 |= SPI_CHANNEL1_SSOE << 2;
	spi1_cr2 |= SPI_CHANNEL1_RXNEIE << 6;
	spi1_cr2 |= SPI_CHANNEL1_TXEIE << 7;
	SPI1->CR2 = spi1_cr2;
#endif // SPI_CHANNEL1_USED

#ifdef SPI_CHANNEL2_USED
	uint16_t spi2_cr1 = 0;
	spi2_cr1 |= SPI_CHANNEL2_CPHA;
	spi2_cr1 |= SPI_CHANNEL2_CPOL << 1;
	spi2_cr1 |= SPI_CHANNEL2_MASTERSEL << 2;
	spi2_cr1 |= SPI_CHANNEL2_BAUDRATE << 3;
	spi2_cr1 |= SPI_CHANNEL2_SPE << 6;
	spi2_cr1 |= SPI_CHANNEL2_SSI << 8;
	spi2_cr1 |= SPI_CHANNEL2_SSM << 9;
	spi2_cr1 |= SPI_CHANNEL2_RXONLY << 10;
	spi2_cr1 |= SPI_CHANNEL2_DATAFRAMEFORMAT << 11;
	spi2_cr1 |= SPI_CHANNEL2_CRCNEXT << 12;
	spi2_cr1 |= SPI_CHANNEL2_CRC << 13;
	spi2_cr1 |= SPI_CHANNEL2_BIDIOE << 14;
	spi2_cr1 |= SPI_CHANNEL2_BIDIMODE << 15;
	spi2->CR1 = spi2_cr1;

	uint16_t spi2_cr2 = 0;
	spi2_cr2 |= SPI_CHANNEL2_RXDMAEN;
	spi2_cr2 |= SPI_CHANNEL2_TXDMAEN << 1;
	spi2_cr2 |= SPI_CHANNEL2_SSOE << 2;
	spi2_cr2 |= SPI_CHANNEL2_RXNEIE << 6;
	spi2_cr2 |= SPI_CHANNEL2_TXEIE << 7;
	SPI2->CR2 = spi2_cr2;
#endif // SPI_CHANNEL2_USED

#ifdef SPI_CHANNEL3_USED
	uint16_t spi3_cr1 = 0;
	spi3_cr1 |= SPI_CHANNEL3_CPHA;
	spi3_cr1 |= SPI_CHANNEL3_CPOL << 1;
	spi3_cr1 |= SPI_CHANNEL3_MASTERSEL << 2;
	spi3_cr1 |= SPI_CHANNEL3_BAUDRATE << 3;
	spi3_cr1 |= SPI_CHANNEL3_SPE << 6;
	spi3_cr1 |= SPI_CHANNEL3_SSI << 8;
	spi3_cr1 |= SPI_CHANNEL3_SSM << 9;
	spi3_cr1 |= SPI_CHANNEL3_RXONLY << 10;
	spi3_cr1 |= SPI_CHANNEL3_DATAFRAMEFORMAT << 11;
	spi3_cr1 |= SPI_CHANNEL3_CRCNEXT << 12;
	spi3_cr1 |= SPI_CHANNEL3_CRC << 13;
	spi3_cr1 |= SPI_CHANNEL3_BIDIOE << 14;
	spi3_cr1 |= SPI_CHANNEL3_BIDIMODE << 15;
	SPI3->CR1 = spi3_cr1;

	uint16_t spi3_cr2 = 0;
	spi3_cr2 |= SPI_CHANNEL3_RXDMAEN;
	spi3_cr2 |= SPI_CHANNEL3_TXDMAEN << 1;
	spi3_cr2 |= SPI_CHANNEL3_SSOE << 2;
	spi3_cr2 |= SPI_CHANNEL3_RXNEIE << 6;
	spi3_cr2 |= SPI_CHANNEL3_TXEIE << 7;
	SPI3->CR2 = spi3_cr2;
#endif // SPI_CHANNEL3_USED

	return;
}

void GPIO_Init(void) {

	return;
}

void ResetClockControl_Init(void) {

	/*
	 * RCC_AHB1 Register
	 */
	uint32_t rcc_ahb1 = 0;
#ifdef PORTA_USED
	rcc_ahb1 |= 1;
#endif
#ifdef PORTB_USED
	rcc_ahb1 |= 1 << 1;
#endif
#ifdef PORTC_USED
	rcc_ahb1 |= 1 << 2;
#endif
#ifdef PORTD_USED
	rcc_ahb1 |= 1 << 3;
#endif
#ifdef PORTE_USED
	rcc_ahb1 |= 1 << 4;
#endif
#ifdef PORTF_USED
	rcc_ahb1 |= 1 << 5;
#endif
#ifdef PORTG_USED
	rcc_ahb1 |= 1 << 6;
#endif
#ifdef PORTH_USED
	rcc_ahb1 |= 1 << 7;
#endif
#ifdef PORTI_USED
	rcc_ahb1 |= 1 << 8;
#endif
	RCC->AHB1ENR = rcc_ahb1;

	/*
	 * RCC_APB1 Register
	 */
	uint32_t rcc_apb1 = 0x00000000;
#ifdef SPI_CHANNEL2_USED
	rcc_apb1 |= 1 << 14;
#endif
#ifdef SPI_CHANNEL3_USED
	rcc_apb1 |= 1 << 15;
#endif
	0x40 = rcc_apb1;




	uint32_t rcc_apb2 = 0;
#ifdef SPI_CHANNEL1_USED
	rcc_apb1 |= 1 << 12;

	/*
	 * RCC_APB2 Register
	 */
	uint32_t rcc_apb2 = 0x00075F33;

	0x64 = rcc_apb2;

	return;
}
