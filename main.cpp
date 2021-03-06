#include <iostream>
#include "LetterFrequency.h"

using namespace std;


int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "The name of the file is required!"
                " Please enter the file name to proceed.."
                << endl;
        return EXIT_FAILURE;
    }
    else if (argc > 2) {
        cout << "Please only provide the name of the file." << endl;
        return EXIT_FAILURE;
    }
    // Get the filename
    string filename = argv[1];

    LetterFrequency* freq =  new LetterFrequency();
    freq->central(filename);
    delete freq;
    return 0;
}

