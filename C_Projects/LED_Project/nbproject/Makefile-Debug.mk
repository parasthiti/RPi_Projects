#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include LED_Project-Makefile.mk

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Blink_LED.o \
	${OBJECTDIR}/CntDwn_LED.o \
	${OBJECTDIR}/Counter.o \
	${OBJECTDIR}/LED_main.o \
	${OBJECTDIR}/Multiple_LEDs.o \
	${OBJECTDIR}/Out_LCD.o \
	${OBJECTDIR}/PIR_Sensor.o \
	${OBJECTDIR}/PWM_LED.o \
	${OBJECTDIR}/Push_LED.o \
	${OBJECTDIR}/dht11_data.o


# C Compiler Flags
CFLAGS=-l wiringPi -l wiringPiDev

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/led_project

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/led_project: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/led_project ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Blink_LED.o: Blink_LED.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Blink_LED.o Blink_LED.c

${OBJECTDIR}/CntDwn_LED.o: CntDwn_LED.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CntDwn_LED.o CntDwn_LED.c

${OBJECTDIR}/Counter.o: Counter.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Counter.o Counter.c

${OBJECTDIR}/LED_main.o: LED_main.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/LED_main.o LED_main.c

${OBJECTDIR}/Multiple_LEDs.o: Multiple_LEDs.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Multiple_LEDs.o Multiple_LEDs.c

${OBJECTDIR}/Out_LCD.o: Out_LCD.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Out_LCD.o Out_LCD.c

${OBJECTDIR}/PIR_Sensor.o: PIR_Sensor.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PIR_Sensor.o PIR_Sensor.c

${OBJECTDIR}/PWM_LED.o: PWM_LED.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PWM_LED.o PWM_LED.c

${OBJECTDIR}/Push_LED.o: Push_LED.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Push_LED.o Push_LED.c

${OBJECTDIR}/dht11_data.o: dht11_data.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/dht11_data.o dht11_data.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
