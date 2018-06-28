//
// Created by Apple on 2018/6/28.
//

#ifndef DEMO_STUDY_APPDATAPROCESSOR_H
#define DEMO_STUDY_APPDATAPROCESSOR_H

#include "DataProcessor.h"
class AppDataProcessor :public DataProcessor{
    short* process(short data[],int len);
};


#endif //DEMO_STUDY_APPDATAPROCESSOR_H
