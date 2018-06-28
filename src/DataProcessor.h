//
// Created by Apple on 2018/6/28.
//

#ifndef DEMO_STUDY_DATAPROCESSOR_H
#define DEMO_STUDY_DATAPROCESSOR_H

class DataProcessor{
public:
    virtual short* process(short data[],int len) =0;
};
#endif //DEMO_STUDY_DATAPROCESSOR_H
