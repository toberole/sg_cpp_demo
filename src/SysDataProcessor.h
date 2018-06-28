//
// Created by Apple on 2018/6/28.
//

#ifndef DEMO_STUDY_SYSDATAPROCESSOR_H
#define DEMO_STUDY_SYSDATAPROCESSOR_H

#include "DataProcessor.h"


class SysDataProcessor : public DataProcessor{
public:
    short* process(short data[],int len);
};


#endif //DEMO_STUDY_SYSDATAPROCESSOR_H
