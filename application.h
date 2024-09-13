#ifndef APPLICATION_H
#define APPLICATION_H
#include "array.h"

class Application
{
public:
    Application();

    void showMenu();
    void inputArray(Array arr);
    void calculateDeterminant(Array arr);
    void sortArray(Array arr);
    void changeSize(Array arr);
    void changeElem(Array arr);
    void printArray(Array arr);
};

#endif // APPLICATION_H
