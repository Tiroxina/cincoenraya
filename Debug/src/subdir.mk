################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Gomoku.cpp \
../src/TadCasilla.cpp \
../src/TadJuego.cpp \
../src/TadTablero.cpp \
../src/entorno.cpp 

CPP_DEPS += \
./src/Gomoku.d \
./src/TadCasilla.d \
./src/TadJuego.d \
./src/TadTablero.d \
./src/entorno.d 

OBJS += \
./src/Gomoku.o \
./src/TadCasilla.o \
./src/TadJuego.o \
./src/TadTablero.o \
./src/entorno.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Gomoku.d ./src/Gomoku.o ./src/TadCasilla.d ./src/TadCasilla.o ./src/TadJuego.d ./src/TadJuego.o ./src/TadTablero.d ./src/TadTablero.o ./src/entorno.d ./src/entorno.o

.PHONY: clean-src

