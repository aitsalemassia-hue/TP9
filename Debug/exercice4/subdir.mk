################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice4/Administrateur.cpp \
../exercice4/Moderateur.cpp \
../exercice4/SuperUtilisateur.cpp \
../exercice4/Utilisateur.cpp \
../exercice4/main.cpp 

CPP_DEPS += \
./exercice4/Administrateur.d \
./exercice4/Moderateur.d \
./exercice4/SuperUtilisateur.d \
./exercice4/Utilisateur.d \
./exercice4/main.d 

OBJS += \
./exercice4/Administrateur.o \
./exercice4/Moderateur.o \
./exercice4/SuperUtilisateur.o \
./exercice4/Utilisateur.o \
./exercice4/main.o 


# Each subdirectory must supply rules for building sources it contributes
exercice4/%.o: ../exercice4/%.cpp exercice4/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice4

clean-exercice4:
	-$(RM) ./exercice4/Administrateur.d ./exercice4/Administrateur.o ./exercice4/Moderateur.d ./exercice4/Moderateur.o ./exercice4/SuperUtilisateur.d ./exercice4/SuperUtilisateur.o ./exercice4/Utilisateur.d ./exercice4/Utilisateur.o ./exercice4/main.d ./exercice4/main.o

.PHONY: clean-exercice4

