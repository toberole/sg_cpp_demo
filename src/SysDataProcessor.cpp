#include "SysDataProcessor.h"


short * SysDataProcessor::process(short *data, int len) {
    for (int i = 0; i < len; ++i) {
        data[i]= data[i]+20;
    }

    return data;
}