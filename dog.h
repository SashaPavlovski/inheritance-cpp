#pragma once
#include "animal.h"
class dog :
    public animal
{
private:
    int GurimCount;
public:
    void addGurimCount(int countOfGurim);
    void printGurimCount();
    void printTheCodeNameAndGurim();
};
