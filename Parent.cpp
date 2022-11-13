#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Parent.h"
#pragma warning (disable:4996)


int Parent::age() {
	return 53;
}
void Parent::printTheAge(){
	printf("The age is %d\n", this->age());
}

void Parent:: printNameParent(char Name[10]) {
	printf("The name of the project is %s\n", Name);
}
