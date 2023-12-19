/* ShelterBST.h Class declarations */
#ifndef PETSHELTER_H
#define PETSHELTER_H
#include <iostream>
#include <string>
#include <vector>
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
    bool sortedByName = true;
    bool sortedByAge = false;
    bool sortedByValue = false;
    bool sortedByValue = false;

    vector<Pet*> shelter;

    // insert methods
    bool insert (Pet* pet);

    bool search(int shelter[], Pet* pet);

    bool remove(int shelter[], Pet* pet);

    int numPets();

    void displayPets();

    void radixSort();

    void reSort (int shelter[], string);

public:
    // Constructor declaration
    PetShelter();

    bool buyPet();

    bool sellPet();

    void sort();

};

#endif //PETSHELTER_PETSHELTER_H
