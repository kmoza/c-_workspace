################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Acceleration.cpp \
../src/ManoeuvreLeg.cpp \
../src/Position.cpp \
../src/Radar.cpp \
../src/Scenario.cpp \
../src/Track.cpp \
../src/main.cpp \
../src/simclock.cpp 

OBJS += \
./src/Acceleration.o \
./src/ManoeuvreLeg.o \
./src/Position.o \
./src/Radar.o \
./src/Scenario.o \
./src/Track.o \
./src/main.o \
./src/simclock.o 

CPP_DEPS += \
./src/Acceleration.d \
./src/ManoeuvreLeg.d \
./src/Position.d \
./src/Radar.d \
./src/Scenario.d \
./src/Track.d \
./src/main.d \
./src/simclock.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


