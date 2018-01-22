################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
A51_UPPER_SRCS += \
C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/SILABS_STARTUP.A51 

C_SRCS += \
../src/DHT11.c \
../src/Humidity_Temperature_LCD_main.c \
../src/InitDevice.c \
../src/LCD16X2.c \
../src/utils.c 

OBJS += \
./src/DHT11.OBJ \
./src/Humidity_Temperature_LCD_main.OBJ \
./src/InitDevice.OBJ \
./src/LCD16X2.OBJ \
./src/SILABS_STARTUP.OBJ \
./src/utils.OBJ 


# Each subdirectory must supply rules for building sources it contributes
src/%.OBJ: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Compiler'
	C51 "@$(patsubst %.OBJ,%.__i,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

src/DHT11.OBJ: C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/EFM8BB1/inc/SI_EFM8BB1_Register_Enums.h C:/Users/sxmchxn/SimplicityStudio/v4_workspace/Humidity_Temperature_LCD_4bits/inc/DHT11.h C:/Users/sxmchxn/SimplicityStudio/v4_workspace/Humidity_Temperature_LCD_4bits/inc/utils.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/EFM8BB1/inc/SI_EFM8BB1_Defs.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/stdint.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/si_toolchain.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/stdbool.h

src/Humidity_Temperature_LCD_main.OBJ: C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/EFM8BB1/inc/SI_EFM8BB1_Register_Enums.h C:/Users/sxmchxn/SimplicityStudio/v4_workspace/Humidity_Temperature_LCD_4bits/inc/InitDevice.h C:/SiliconLabs/SimplicityStudio/v4/developer/toolchains/keil_8051/9.53/INC/STDIO.H C:/Users/sxmchxn/SimplicityStudio/v4_workspace/Humidity_Temperature_LCD_4bits/inc/DHT11.h C:/Users/sxmchxn/SimplicityStudio/v4_workspace/Humidity_Temperature_LCD_4bits/inc/LCD16X2.h C:/Users/sxmchxn/SimplicityStudio/v4_workspace/Humidity_Temperature_LCD_4bits/inc/utils.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/EFM8BB1/inc/SI_EFM8BB1_Defs.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/stdint.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/si_toolchain.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/stdbool.h

src/InitDevice.OBJ: C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/EFM8BB1/inc/SI_EFM8BB1_Register_Enums.h C:/Users/sxmchxn/SimplicityStudio/v4_workspace/Humidity_Temperature_LCD_4bits/inc/InitDevice.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/EFM8BB1/inc/SI_EFM8BB1_Defs.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/si_toolchain.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/stdint.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/stdbool.h

src/LCD16X2.OBJ: C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/EFM8BB1/inc/SI_EFM8BB1_Register_Enums.h C:/SiliconLabs/SimplicityStudio/v4/developer/toolchains/keil_8051/9.53/INC/STDIO.H C:/Users/sxmchxn/SimplicityStudio/v4_workspace/Humidity_Temperature_LCD_4bits/inc/DHT11.h C:/Users/sxmchxn/SimplicityStudio/v4_workspace/Humidity_Temperature_LCD_4bits/inc/utils.h C:/Users/sxmchxn/SimplicityStudio/v4_workspace/Humidity_Temperature_LCD_4bits/inc/LCD16X2.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/EFM8BB1/inc/SI_EFM8BB1_Defs.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/stdint.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/si_toolchain.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/stdbool.h

src/SILABS_STARTUP.OBJ: C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/SILABS_STARTUP.A51
	@echo 'Building file: $<'
	@echo 'Invoking: Keil 8051 Assembler'
	AX51 "@$(patsubst %.OBJ,%.__ia,$@)" || $(RC)
	@echo 'Finished building: $<'
	@echo ' '

src/utils.OBJ: C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/EFM8BB1/inc/SI_EFM8BB1_Register_Enums.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/EFM8BB1/inc/SI_EFM8BB1_Defs.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/si_toolchain.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/stdint.h C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/8051/v4.0.4/Device/shared/si8051Base/stdbool.h


