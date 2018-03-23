# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o patient.o malein.o femalein.o maleout.o femaleout.o hospital.o
	$(CXX) $(CXXFLAGS) -o main main.o patient.o malein.o femalein.o maleout.o femaleout.o hospital.o

# The main.o target can be written more simply

main.o: patient.h malein.h femalein.h hospital.h

patient.o: patient.h

malein.o: malein.h male.h inpatient.h

femalein.o: femalein.h female.h inpatient.h

maleout.o: maleout.h male.h outpatient.h

femaleout.o: femaleout.h female.h outpatient.h

hospital.o: hospital.h patient.h

male.o: male.h patient.h

inpatient.o: inpatient.h patient.h

female.o: female.h patient.h
