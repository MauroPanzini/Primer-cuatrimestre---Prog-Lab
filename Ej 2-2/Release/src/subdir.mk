################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Ej\ 2-2.c 

C_DEPS += \
./src/Ej\ 2-2.d 

OBJS += \
./src/Ej\ 2-2.o 


# Each subdirectory must supply rules for building sources it contributes
src/Ej\ 2-2.o: ../src/Ej\ 2-2.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Ej 2-2.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Ej\ 2-2.d ./src/Ej\ 2-2.o

.PHONY: clean-src

