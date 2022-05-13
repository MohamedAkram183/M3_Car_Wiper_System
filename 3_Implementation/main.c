#include "stm32f4xx.h"
	//GPIOA->MODER = 0x00000000;
	//GPIOA->PUPDR = 0x00000001;
	//GPIOD->MODER = 0x00000055;
	//GPIOD->BSRR  = 0xFFFF0000;
	//#define RCC_AHB1ENR_GPIOAEN
	//#define GPIOA

static void toggle_led(void)
{
    //int B=0;
    int k=0;
	volatile long j;
	int delay = 0xFFFFFFF;
	int delay_orange = 0x5FFFFFF;
	int delay_blue = 0x25FFFFF;
	//if( ( GPIOA->IDR & 0x01) == 0 )
  	//{
      //Turn ON the LEDs
    //  B=1;
   // }

if(1==1)
{
 for(k=0;k<5;k++)
 {
	GPIOD->ODR = GPIOD->ODR | (1 << 12);
	for (j = delay; j--; );

	GPIOD->ODR = GPIOD->ODR & ~(1 << 12);
	for (i = delay; i--; );
 }
 for(k=0;k<5;k++)
 {
	GPIOD->ODR = GPIOD->ODR | (1 << 14);
	for (j = delay; j--; );

	GPIOD->ODR = GPIOD->ODR & ~(1 << 14);
	for (j = delay; j--; );
}
for(k=0;k<5;k++)
{
	GPIOD->ODR = GPIOD->ODR | (1 << 13);
	for (j = delay_orange; j--; );


	GPIOD->ODR = GPIOD->ODR & ~(1 << 13);
	for (j = delay_orange; j--; );
}
for(k=0;k<5;k++)
{
	GPIOD->ODR = GPIOD->ODR | (1 << 15);
	for (j = delay_blue; j--; );

	GPIOD->ODR = GPIOD->ODR & ~(1 << 15);
	for (j = delay_blue; j--; );
}
}
//#else
//	GPIOD->BSRR = (1 << 28);
//	for (j = 0xFFFFFFF; j--; );
//	GPIOD->BSRR = (1 << 12);
//	for (j = 0xFFFFFFF; j--; );
//#endif

}

static void init_config(void)
{
	/* Enable the GPIO Clock */
	RCC->AHB1ENR = RCC->AHB1ENR | 0x00000008;
	// SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOAEN);
	// GPIOA->MODER = 0x00000000;
   	// GPIOA->PUPDR = 0x00000001;
   	// GPIOD->MODER = 0x00000055;

	/* Setting PD12 (Pin 12 of PORTD) as General Purpose Output */
	GPIOD->MODER = GPIOD->MODER | 0x01000000;
	GPIOD->MODER = GPIOD->MODER | 0x11000000;//14
	GPIOD->MODER = GPIOD->MODER | 0x04000000;//oange
	GPIOD->MODER = GPIOD->MODER | 0x40000000;//blue
}

int main(void)
{
	init_config();

	while (1)
	{
		toggle_led();
	}
}
