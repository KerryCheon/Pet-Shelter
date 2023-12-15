/* ShelterBST.h Class declarations */
#ifndef PETSHELTER_H
#define PETSHELTER_H
#include <iostream>
#include <string>
using namespace std;

class PetShelter {
private:
    // Pet struct declaration
    struct Pet {
        string name;
        int age;
        double value;
        int happiness;

        // Pet constructer to initialize pet                                                                                                                                                                         $
        Pet (string name, int age, double value, int happiness) : name(name), age(age), value(value), happiness(happiness) {
        }
    };

    Pet* shelter[];

    // insert methods
    bool insert (int shelter[], Pet* pet);

    bool search(int shelter[], Pet* pet);

    bool remove(int shelter[], Pet* pet);

    int numPets();

    void displayPets();

    void radixSort(int shelter[]);

    void reSort (int shelter[], string);

public:
    petShelter();

    bool buyPet();
    bool sellPet();
    void sort();

};

#endif //PETSHELTER_PETSHELTER_H
