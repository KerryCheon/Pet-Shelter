#include <iostream>
#include <string>
#include <vector>
#include "petShelter.h"
using namespace std;

PetShelter::PetShelter() {shelter = vector<Pet*>(10);}

// insert methods
bool PetShelter::insert(Pet* pet) {
    for (int i = 0; i < shelter.size(); i++) {
        if (shelter[i] == nullptr) {
            shelter[i] = pet;
            radixSort();
            return true;
        }
    }
    return false;
}

bool PetShelter::search(int shelter[], Pet* pet) {
    for (int i = 0; i < shelter.size(); i++) {
        if (shelter[i] == pet) {
            return true;
        }
    }
    return false;
}

bool PetShelter::remove(int shelter[], Pet* pet) {
    for (int i = 0; i < shelter.size(); i++) {
        if (shelter[i] == pet) {
            shelter[i] == nullptr;
            radixSort();
            return true;
        }
    }
    return false;
}

int PetShelter::numPets() {
    int petCount = 0;
    for (int i = 0; i < shelter.size(); i++) {
        if (shelter[i] != nullptr) {
            petCount++;
        }
    }
    return petCount;
}

void PetShelter::displayPets() {
    int petCount = 0;
    for (int i = 0; i < shelter.size(); i++) {
        if (shelter[i] != nullptr) {
            cout << pet-> name << endl;
        }
    }
}
template <typename T>
T max() {
   T maxValue = shelter[0];
   for (int i = 1; i < shelter.size(); i++) {
       if (shelter[i] >)
   }
}

T PetShelter::radixSort() {

}

T PetShelter::reSort (T attribute) {
    if
}
