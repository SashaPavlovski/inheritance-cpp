#include <stdio.h>
#include <iostream>
#include <string.h>
#include "runner.h"
#pragma warning (disable:4996)



void runnerAll :: run() {
	strcpy_s(Parent1.name, "ParentPar");
	child1.printNameParent(Parent1.name);
	child1.printTheAge();
}
void runnerAll::runAnimal() {
	tome.age = 3;
	tome.code = 1;
	strcpy_s(tome.name,"tome");
	tome.addGurimCount(6);

	rechard.code = 2;
	strcpy_s(rechard.name, "reche");
	rechard.addGurimCount(3);
	 tome.printTheAgeNameAndGurim();
	 rechard.printTheCodeNameAndGurim();
}