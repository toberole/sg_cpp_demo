//
// Created by Apple on 2018/6/28.
//

#include "AppDataProcessor.h"

short * AppDataProcessor::process(short *data, int len) {
    for (int i = 0; i < len; ++i) {
        data[i]= data[i]+10;
    }

    return data;
}
