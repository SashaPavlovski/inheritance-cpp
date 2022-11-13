#pragma once
#include "animal.h"
class cat :
    public animal
{
private:
    int GurimCount;
public:
    int age;
    void addGurimCount(int countOfGurim);
    void printGurimCount();
    void printAge();
    void printTheAgeNameAndGurim();


};

