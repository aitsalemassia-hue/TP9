################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice3/Electrique.cpp \
../exercice3/Hybride.cpp \
../exercice3/Thermique.cpp \
../exercice3/Vehicule.cpp \
../exercice3/main.cpp 

CPP_DEPS += \
./exercice3/Electrique.d \
./exercice3/Hybride.d \
./exercice3/Thermique.d \
./exercice3/Vehicule.d \
./exercice3/main.d 

OBJS += \
./exercice3/Electrique.o \
./exercice3/Hybride.o \
./exercice3/Thermique.o \
./exercice3/Vehicule.o \
./exercice3/main.o 


# Each subdirectory must supply rules for building sources it contributes
exercice3/%.o: ../exercice3/%.cpp exercice3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice3

clean-exercice3:
	-$(RM) ./exercice3/Electrique.d ./exercice3/Electrique.o ./exercice3/Hybride.d ./exercice3/Hybride.o ./exercice3/Thermique.d ./exercice3/Thermique.o ./exercice3/Vehicule.d ./exercice3/Vehicule.o ./exercice3/main.d ./exercice3/main.o

.PHONY: clean-exercice3

