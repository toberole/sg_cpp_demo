#include <iostream>

#include "../include/VadDetector.h"
#include "../include/SogouVadDetector.h"
#include "../include/Rect.h"
#include "../include/Student.h"

using namespace std;

int main() {
    VadDetector *vadDetector = new SogouVadDetector();
    short voices[] = {1, 2, 3, 4, 5};
    vadDetector->detect(voices, 5, 0);

    for (int i = 0; i < 5; ++i) {
        cout << "vadDetector vaildVoices: " << vadDetector->vaildVoices[i] << " "<< endl;
    }

    SogouVadDetector sogouVadDetector;
    sogouVadDetector.end = 11;
    VadDetector v = sogouVadDetector;

    // reinterpret_cast<>

    delete (vadDetector);

    Rect rect(3,4);
    cout<<"width: "<<rect.width<<" height: "<<rect.height<<" acreage: "<<rect.acreage()<<endl;

    // Student *student = new Student();
    Student student;
    student.age = 11;


    int arr[10];
    arr[0] = 1;

    return 0;
}