#include <stdio.h>
#include <iostream>
#include <string.h>
#include "animal.h"
#include "dog.h"
#pragma warning (disable:4996)


void dog :: addGurimCount(int countOfGurim){

	this->GurimCount = countOfGurim;

}
void dog :: printGurimCount(){
	printf("The count of Gurim is %d\n", this->GurimCount);
}
void dog :: printTheCodeNameAndGurim(){

	this->printCode();
	this->printNameAnimal();
	this->printGurimCount();


}