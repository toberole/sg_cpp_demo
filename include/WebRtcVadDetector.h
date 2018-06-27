//
// Created by Apple on 2018/6/27.
//

#ifndef VAD_WEBRTCVADDETECTOR_H
#define VAD_WEBRTCVADDETECTOR_H

#include "VadDetector.h"

class WebRtcVadDetector : public VadDetector {
public:
    void detect(short voice[], int len, int sn);
};

#endif //VAD_WEBRTCVADDETECTOR_H
