#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    double rand_num;

    //initialize random seed
    srand(time(NULL));

    //menghasilkan 10 angka acak antara 0 dan 1
    cout << "Nilai acak dalam [0, 1]:\n";

    for (int i = 0; i < 10; i++) {
        rand_num = (double)rand() / RAND_MAX;
        cout << rand_num << "\n";
    }

    _getch();
    return 0;
}