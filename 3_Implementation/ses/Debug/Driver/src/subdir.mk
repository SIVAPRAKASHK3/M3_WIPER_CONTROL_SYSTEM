################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Driver/src/MyStm32f407xx_gpio_driver.c 

OBJS += \
./Driver/src/MyStm32f407xx_gpio_driver.o 

C_DEPS += \
./Driver/src/MyStm32f407xx_gpio_driver.d 


# Each subdirectory must supply rules for building sources it contributes
Driver/src/%.o Driver/src/%.su: ../Driver/src/%.c Driver/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -I"C:/Users/sivaprakash k/STM32CubeIDE/workspace_1.9.0/ses/Driver/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Driver-2f-src

clean-Driver-2f-src:
	-$(RM) ./Driver/src/MyStm32f407xx_gpio_driver.d ./Driver/src/MyStm32f407xx_gpio_driver.o ./Driver/src/MyStm32f407xx_gpio_driver.su

.PHONY: clean-Driver-2f-src

