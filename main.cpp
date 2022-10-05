/* Disease checker: validate if a set of array is contains within another array.
 * Author: Javier Fadel.
 * Modified: 5 Oct. 2022. */
#include <iostream>
#include <array>
#include <string>
using namespace std;

// Use template to validate if something is inside something: returned in boolean.
template<typename C, typename T>
bool contains(C&& c, T e) {
    return find(begin(c), end(c), e) != end(c);
}

// TODO: contains function.

// Template: use array library to include contains function.
// Contains function: check whether a element is inside an array.

// Disease classes: use inheritance for more effective uses.
// Super-class: Penyakit.
// Sub-class: all the diseases.
// Each sub-class should have a unique character combination. Perhaps use the char array as a parameter?

class Penyakit {
// Parent variables and function.

public:
    // Pass array here, then passed down again to each subclass?
    string jenisPenyakit;
    char gejalaPenyakit[3];
    void inputGejala(const char gejala[]) {
        for (int i = 0; i < 3; ++i) {
            gejalaPenyakit[i] = gejala[i];
            cout << gejalaPenyakit[i];
        }
    }
    void inputGejalaFinal(const char gejala[]) {
        for (int i = 0; i < 3; i++) {
            gejalaPenyakit[i] = gejala[i];
        }

    }
    // function(arr)
    // execute all subclass
};

class Demam: private Penyakit {
public:
    // Should the counter be here?
    char localSymptoms[3] = {'a', 'b', 'c'};
    int counter;
    void printGejala(const char gejala[]) {
        inputGejala(gejala);
        for (int i = 0; i < 3; ++i) {
            // Change to gejala.at(i).
            cout << gejala[i] << endl;
        }
    }
    void validateSymptoms(char gejala[]) {
        for (char localSymptom : localSymptoms) {
            if (contains(gejala, localSymptom)) {
                counter++;
            }
        }
    }

    // function(array)
    //      validate
    //      penyakit = asdsad
};

int main() {
    // Input: user choose 3 symptoms, embed it inside a char array.
    char gejalaLocal[3] = {'a', 's', 'd'};
    Penyakit demam{};
    Demam penyakitDemam;

//    demam.inputGejala(gejalaLocal);
    penyakitDemam.printGejala(gejalaLocal);

    // Use the char array as a parameter to the disease class.

    // Call class as an object:
    // Call each class?

    return 0;
}
