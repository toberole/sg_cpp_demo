//
// Created by Apple on 2018/6/27.
//

#ifndef VAD_SOGOUVADDETECTOR_H
#define VAD_SOGOUVADDETECTOR_H

#include "VadDetector.h"

class SogouVadDetector : public VadDetector {
public:
    void detect(short voice[], int len, int sn);
};
#endif //VAD_SOGOUVADDETECTOR_H
