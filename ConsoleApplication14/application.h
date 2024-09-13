#ifndef APPLICATION_H
#define APPLICATION_H
#include "array.h"

class Application
{
public:
    Application();

    Array arr;
    void showMenu();
    void inputArray();
    void calculateDeterminant();
    void sortArray();
    void changeSize();
    void changeElem();
    void printArray();
};

#endif // APPLICATION_H
