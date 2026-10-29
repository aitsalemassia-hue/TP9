################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice2/Comptable.cpp \
../exercice2/EmployePolyvalent.cpp \
../exercice2/Technicien.cpp \
../exercice2/main.cpp 

CPP_DEPS += \
./exercice2/Comptable.d \
./exercice2/EmployePolyvalent.d \
./exercice2/Technicien.d \
./exercice2/main.d 

OBJS += \
./exercice2/Comptable.o \
./exercice2/EmployePolyvalent.o \
./exercice2/Technicien.o \
./exercice2/main.o 


# Each subdirectory must supply rules for building sources it contributes
exercice2/%.o: ../exercice2/%.cpp exercice2/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice2

clean-exercice2:
	-$(RM) ./exercice2/Comptable.d ./exercice2/Comptable.o ./exercice2/EmployePolyvalent.d ./exercice2/EmployePolyvalent.o ./exercice2/Technicien.d ./exercice2/Technicien.o ./exercice2/main.d ./exercice2/main.o

.PHONY: clean-exercice2

