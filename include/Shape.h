//
// Created by Apple on 2018/6/27.
//

#ifndef DEMO_STUDY_SHAPE_H
#define DEMO_STUDY_SHAPE_H


class Shape {
public:
    int width;
    int height;

    Shape(int width, int height) {
        this->width = width;
        this->height = height;
    }

    virtual int acreage() =0;

    virtual void sys(){}
};


#endif //DEMO_STUDY_SHAPE_H
