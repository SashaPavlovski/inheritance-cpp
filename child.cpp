#include <stdio.h>
#include <iostream>
#include <string.h>
#include "child.h"
#pragma warning (disable:4996)

int child::age() {
	return 21;
}
void child::printNameChild(char Name[10]) {
	printf("The name o the project is %s", Name);
}
