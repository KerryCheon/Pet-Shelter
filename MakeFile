shelterTest: main.o petShelter.o
	g++ -o shelterTest main.o petShelter.o

main.o: main.cpp petShelter.h
	g++ -c -Wall -Werror -pedantic -std=c++11 main.cpp

petShelter.o: petShelter.cpp petShelter.h
	g++ -c -Wall -Werror -pedantic -std=c++11 petShelter.cpp