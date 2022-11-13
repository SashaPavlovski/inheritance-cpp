#include <stdio.h>
#include <iostream>
#include <string.h>
#include "animal.h"
#pragma warning (disable:4996)

void animal:: setCode(int aCode) {
	this->code = aCode;

}
void animal :: printCode() {
	printf("The code is %d\n", this->code);
}
void animal::setName(char aName[20]) {
	strcpy_s(this->name, aName);
}
void animal :: printNameAnimal() {
	printf("The name is %s\n", this->name);

};