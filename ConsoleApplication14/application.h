#ifndef APPLICATION_H
#define APPLICATION_H
#include "array.h"

class TApplication
{
public:
    TApplication();
    int exec();
    int execPolynom();

private:
    int menu();
    int menuPolynom();
};

#endif // APPLICATION_H
