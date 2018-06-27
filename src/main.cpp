#include <iostream>

#include "../include/VadDetector.h"
#include "../include/SogouVadDetector.h"

using namespace std;

int main() {
    VadDetector *vadDetector = new SogouVadDetector();
    short voices[] = {1, 2, 3, 4, 5};
    vadDetector->detect(voices, 5, 0);

    for (int i = 0; i < 5; ++i) {
        cout << "vadDetector vaildVoices: " << vadDetector->vaildVoices[i] << " "<< endl;
    }

    delete (vadDetector);

    return 0;
}