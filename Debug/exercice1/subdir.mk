################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice1/Chercheur.cpp \
../exercice1/EnseignantChercheur.cpp \
../exercice1/Personne.cpp \
../exercice1/main.cpp 

CPP_DEPS += \
./exercice1/Chercheur.d \
./exercice1/EnseignantChercheur.d \
./exercice1/Personne.d \
./exercice1/main.d 

OBJS += \
./exercice1/Chercheur.o \
./exercice1/EnseignantChercheur.o \
./exercice1/Personne.o \
./exercice1/main.o 


# Each subdirectory must supply rules for building sources it contributes
exercice1/%.o: ../exercice1/%.cpp exercice1/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice1

clean-exercice1:
	-$(RM) ./exercice1/Chercheur.d ./exercice1/Chercheur.o ./exercice1/EnseignantChercheur.d ./exercice1/EnseignantChercheur.o ./exercice1/Personne.d ./exercice1/Personne.o ./exercice1/main.d ./exercice1/main.o

.PHONY: clean-exercice1

