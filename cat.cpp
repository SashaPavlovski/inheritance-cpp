#include <stdio.h>
#include <iostream>
#include <string.h>
#include "animal.h"
#include "cat.h"
#pragma warning (disable:4996)

void cat::addGurimCount(int countOfGurim) {

	this->GurimCount = countOfGurim;

}
void cat::printGurimCount() {
	printf("The count of Gurim is %d\n", this->GurimCount);
}
void cat::printAge() {
	printf("The age of animal is %d\n", this->age);
}
void cat::printTheAgeNameAndGurim() {

	this->printAge();
	this->printNameAnimal();
	this->printGurimCount();
}
