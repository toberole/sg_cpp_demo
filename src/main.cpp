#include <iostream>

#include "../include/VadDetector.h"
#include "../include/SogouVadDetector.h"

int main() {
    VadDetector *vadDetector = new SogouVadDetector();
    short voices[] = {1, 2, 3, 4, 5};
    vadDetector->detect(voices, 5, 0);

    for (int i = 0; i < 5; ++i) {
        std::cout << "vadDetector vaildVoices: " << vadDetector->vaildVoices[i] << " "<< std::endl;
    }

    delete (vadDetector);

    return 0;
}