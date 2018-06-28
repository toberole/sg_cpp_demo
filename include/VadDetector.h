//
// Created by Apple on 2018/6/27.
//

#ifndef VAD_VADDETECTOR_H
#define VAD_VADDETECTOR_H

class VadDetector {
public:
    virtual void detect(short voice[], int len, int sn) = 0;//  注意 "= 0"

public:
    short *vaildVoices;
    int len;
    int start;
    int end;
};

#endif //VAD_VADDETECTOR_H
