//
// Created by Apple on 2018/6/27.
//

#include "../include/SogouVadDetector.h"

void  SogouVadDetector::detect(short voice[], int len, int sn) {
    for (int i = 0; i < len; ++i) {
        voice[i] = voice[i] + 5;
    }

    start = 0;
    end = 5;
    vaildVoices = voice;
}

