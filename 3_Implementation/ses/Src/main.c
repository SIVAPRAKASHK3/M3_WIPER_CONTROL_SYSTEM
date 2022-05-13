#include "MyStm32f407xx.h"
#include "MyStm32f407xx.h"
#include <stdint.h>
#include <stdio.h>

#include "Main_heaher.h"
#define BTN_PRESSED ENABLE

//void delay_functon(uint32_t hertz);
//void igniton_on(void);
//void igniton_off(void);
//void Clockwise(void);
//int wiper_on(void);
//void wiper_off(void);
//int ignition_wiper_on(void);
//void delay_1_hz(void);
//int Highspeed_wiper_on(void);
uint32_t flag_var = 1;

uint32_t _1_HZ =50000000;
uint32_t _4_HZ =25000000;
uint32_t _8_HZ =7500000;


int main(void)
{
	GPIO_Handle_t GpioLed, GpioLed1, GpioLed2, GpioLed3, GpioBtn;

	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	GpioLed1.pGPIOx = GPIOD;
	GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed1);

	GpioLed2.pGPIOx = GPIOD;
	GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed2);

	GpioLed3.pGPIOx = GPIOD;
	GpioLed3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	GpioLed3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed3);

	GpioBtn.pGPIOx = GPIOA;
	GpioBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GpioBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GpioBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GpioBtn);

	while(1)
	{
		if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0))
		{
			if ((flag_var == 1))
			{	delay_functon(_1_HZ);
			delay_functon(_1_HZ); // added
				igniton_on_btn();

			}
			else if ((flag_var == 2)){
				while(flag_var==2){
				if(wiper_on_function()==1){
					flag_var++;
					break;}
				}
			}
			else if (flag_var == 3)
			{
				while(flag_var==3){
					if(ignition_wiper_on()==1){
						flag_var++;
						break;}
					}
			}
			else if (flag_var == 4)
			{
				while(flag_var==4){
					if(Highspeed_wiper_on()==1){
						flag_var++;
					    	break;}
			Highspeed_wiper_on();
							}
								}
			else if (flag_var == 5)
			{GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0);
			GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0);
				wiper_off_function();
				flag_var++;
			}
			else if(flag_var==6) {
				delay_functon(_1_HZ);
				delay_functon(_1_HZ);
			igniton_off_btn();
			}
			else
				break;
		}
	}}

void delay_functon(uint32_t hertz)
{
	for (uint32_t i_loop = 0; i_loop < hertz; i_loop++);
}

void igniton_on_btn(void)
{
	delay_functon(_1_HZ);
	delay_functon(_1_HZ);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);//red on
	flag_var++;
}

void igniton_off_btn(void)
{
	GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	flag_var++;
}
int ignition_wiper_on(void)
{
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay_functon(_4_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay_functon(_4_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay_functon(_4_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay_functon(_4_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay_functon(_4_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay_functon(_4_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

	if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0))
		return 1;
	else
		return 0;
}
int wiper_on_function(void)
{
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay_functon(_1_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay_functon(_1_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay_functon(_1_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay_functon(_1_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay_functon(_1_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay_functon(_1_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

//	delay();

	if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0))
		return 1;
	else
		return 0;
}

void wiper_off_function(void)
{

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay_functon(_1_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay_functon(_1_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay_functon(_1_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );


}
int Highspeed_wiper_on(void)
{
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);//blue
	delay_functon(_8_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);//green
	delay_functon(_8_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);//orange
	delay_functon(_8_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay_functon(_8_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);//green
	delay_functon(_8_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0 );

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);//blue
	delay_functon(_8_HZ);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0 );


	 if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0))
		return 1;
	else
		return 0;
}
