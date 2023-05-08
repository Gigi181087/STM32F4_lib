#include <stdint.h>
#include "Driver.h"

static inline void SPI_Init(void);
static inline void GPIO_Init(void);
static inline void ResetClockControl_Init(void);


inline void STM32_Init(void) {
    SPI_Init();
	GPIO_Init();
	ResetClockControl_Init();

    return;
}


static inline void SPI_Init(void) {

#	ifdef SPI_CHANNEL1_USED
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
#	endif // SPI_CHANNEL1_USED

#	ifdef SPI_CHANNEL2_USED
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
#	endif // SPI_CHANNEL2_USED

#	ifdef SPI_CHANNEL3_USED
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
#	endif // SPI_CHANNEL3_USED

	return;
}

static inline void GPIO_Init(void) {

	return;
}

static inline void ResetClockControl_Init(void) {

/*
 * RCC_AHB1 Register
 */
	uint32_t rcc_ahb1 = 0x00100000;
#	ifdef PORTA_USED
	rcc_ahb1 |= 1;
#	endif
#	ifdef PORTB_USED
	rcc_ahb1 |= 1 << 1;
#	endif
#	ifdef PORTC_USED
	rcc_ahb1 |= 1 << 2;
#	endif
#	ifdef PORTD_USED
	rcc_ahb1 |= 1 << 3;
#	endif
#	ifdef PORTE_USED
	rcc_ahb1 |= 1 << 4;
#	endif
#	ifdef PORTF_USED
	rcc_ahb1 |= 1 << 5;
#	endif
#	ifdef PORTG_USED
	rcc_ahb1 |= 1 << 6;
#	endif
#	ifdef PORTH_USED
	rcc_ahb1 |= 1 << 7;
	endif
#	ifdef PORTI_USED
	rcc_ahb1 |= 1 << 8;
#	endif 
	0x00000030 = rcc_ahb1;

/*
 * RCC_APB1 Register
 */
	uint32_t rcc_apb1 = 0x00000000;
#	ifdef TIMCHANNEL2_USED
	rcc_apb1 |= 1 << 0;
#	endif // TIMCHANNEL2_USED
#	ifdef TIMCHANNEL3_USED
	rcc_apb1 |= 1 << 1;
#	endif // TIMCHANNEL3_USED
#	ifdef TIMCHANNEL4_USED
	rcc_apb1 |= 1 << 2;
#	endif // TIMCHANNEL4_USED
#	ifdef TIMCHANNEL5_USED
	rcc_apb1 |= 1 << 3;
#	endif // TIMCHANNEL5_USED
#	ifdef TIMCHANNEL6_USED
	rcc_apb1 |= 1 << 4;
#	endif // TIMCHANNEL6_USED
#	ifdef TIMCHANNEL7_USED
	rcc_apb1 |= 1 << 5;
#	endif // TIMCHANNEL7_USED
#	ifdef TIMCHANNEL12_USED
	rcc_apb1 |= 1 << 6;
#	endif // TIMCHANNEL12_USED
#	ifdef TIMCHANNEL13_USED
	rcc_apb1 |= 1 << 7;
#	endif // TIMCHANNEL13_USED
#	ifdef TIMCHANNEL14_USED
	rcc_apb1 |= 1 << 8;
#	endif // TIMCHANNEL14_USED
#	ifdef W_WATCHDOG_USED
	rcc_apb1 |= 1 << 11;
#	endif //W_WATCHDOG_USED
#	ifdef SPI_CHANNEL2_USED
	rcc_apb1 |= 1 << 14;
#	endif //SPI_CHANNEL2_USED
#	ifdef SPI_CHANNEL3_USED
	rcc_apb1 |= 1 << 15;
#	endif //SPI_CHANNEL3_USED
#	ifdef USART_CHANNEL2_USED
	rcc_apb1 |= 1 << 17;
#	endif //USART_CHANNEL2_USED
#	ifdef USART_CHANNEL3_USED
	rcc_apb1 |= 1 << 18;
#	endif //USART_CHANNEL3_USED
#	ifdef USART_CHANNEL4_USED
	rcc_apb1 |= 1 << 19;
#	endif //USART_CHANNEL4_USED
#	ifdef USART_CHANNEL5_USED
	rcc_apb1 |= 1 << 20;
#	endif //USART_CHANNEL5_USED
#	ifdef I2C_CHANNEL1_USED
	rcc_apb1 |= 1 << 21;
#	endif //I2C_CHANNEL1_USED
#	ifdef I2C_CHANNEL2_USED
	rcc_apb1 |= 1 << 22;
#	endif //I2C_CHANNEL2_USED
#	ifdef I2C_CHANNEL3_USED
	rcc_apb1 |= 1 << 23;
#	endif //I2C_CHANNEL3_USED
#	ifdef CAN_CHANNEL1_USED
	rcc_apb1 |= 1 << 25;
#	endif //CAN_CHANNEL1_USED
#	ifdef CAN_CHANNEL2_USED
	rcc_apb1 |= 1 << 26;
#	endif //CAN_CHANNEL2_USED
	0x00000040 = rcc_apb1;

/*
 * RCC_APB2 Register
 */
	uint32_t rcc_apb2 = 0x00000000;
#	ifdef TIM_CHANNEL1_USED
	rcc_apb2 |= 1 << 0;
#	endif //TIM_CHANNEL1_USED	
#	ifdef TIM_CHANNEL8_USED
	rcc_apb2 |= 1 << 1;
#	endif //TIM_CHANNEL8_USED
#	ifdef USART_CHANNEL1_USED
	rcc_apb1 |= 1 << 4;
#	endif //USART_CHANNEL1_USED
#	ifdef USART_CHANNEL6_USED
	rcc_apb1 |= 1 << 5;
#	endif //USART_CHANNEL6_USED
#	ifdef ADC_CHANNEL1_USED
	rcc_apb1 |= 1 << 8;
#	endif //ADC_CHANNEL1_USED
#	ifdef ADC_CHANNEL2_USED
	rcc_apb1 |= 1 << 9;
#	endif //ADC_CHANNEL2_USED
#	ifdef ADC_CHANNEL3_USED
	rcc_apb1 |= 1 << 10;
#	endif //ADC_CHANNEL3_USED
#	ifdef SPI_CHANNEL1_USED
	rcc_apb2 |= 1 << 12;
#	endif //SPI_CHANNEL1_USED
#	ifdef TIM_CHANNEL9_USED
	rcc_apb2 |= 1 << 16;
#	endif //SPI_CHANNEL9_USED
#	ifdef TIM_CHANNEL10_USED
	rcc_apb2 |= 1 << 17;
#	endif //SPI_CHANNEL10_USED
#	ifdef TIM_CHANNEL11_USED
	rcc_apb2 |= 1 << 18;
#	endif //SPI_CHANNEL11_USED
	0x00000044 = rcc_apb2;

	return;
}
