#pragma once
#include "Parent.h"


class child :
    public Parent
{
public:

	char nameChild[10];
	int age();
	void printNameChild(char Name[10]);
};

