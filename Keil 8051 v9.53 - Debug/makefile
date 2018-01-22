################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Keil tools exit code 1 is warnings only, so don't treat as an error in make
RC := test $$? -lt 2

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Humidity_Temperature_LCD_4bits.omf

# Tool invocations
Humidity_Temperature_LCD_4bits.omf: echo_path $(OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Keil 8051 Linker'
	LX51 "@Humidity_Temperature_LCD_4bits.lnp" || $(RC)
	@echo 'Finished building target: $@'

# Change from all upper case to the expected case
	@-mv "HUMIDITY_TEMPERATURE_LCD_4BITS.OMF.CRBUILD" "$@"

# Generate hex file: Humidity_Temperature_LCD_4bits.hex
	@Ohx51 "Humidity_Temperature_LCD_4bits.omf" "HEXFILE (Humidity_Temperature_LCD_4bits.hex)" "H386" 2>&1 >/dev/null

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS) Humidity_Temperature_LCD_4bits.omf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
# echo the path
echo_path:
	@echo PATH=$$PATH
	@echo ' '

