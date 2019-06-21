#ifndef DEMO_STUDY_RECT_H
#define DEMO_STUDY_RECT_H

#include "Shape.h"

class Rect : public Shape {
public:
    Rect(int width, int height) : Shape(width, height) {

    }

    int acreage() {
        return width * height;
    }
};

#endif //DEMO_STUDY_RECT_H
