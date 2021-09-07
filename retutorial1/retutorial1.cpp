#include <iostream>
#include<stdio.h>
#include <Windows.h>
#include <conio.h>
#include <string>
void* baseptr;
using namespace std;
int main() {
	int varInt = 123456;
	string varString = "DefaultString";
	char arrChar[128] = "Long char array right there ->";
	int* ptr2int = &varInt;
	int** ptr2ptr = &ptr2int;
	int*** ptr2ptr2 = &ptr2ptr;

	do {
		printf("process ID IN HEXIDECIMAL: %X\n", GetCurrentProcessId());
		cout << "Process ID IN DECIMAL: " << dec << GetCurrentProcessId() << endl;
		printf("Varint (0x%p) = %d \n", &varInt, varInt);
		printf("varString (0x%p) = %s\n", &varString, varString.c_str());
		printf("arrcChar (0x%p) = %s\n", &arrChar, arrChar);
		printf("ptr2int (0x%p) = 0x%p\n", &ptr2int, &varInt);
		printf("ptr2ptr (0x%p) = 0x%p\n", &ptr2ptr, &ptr2int);
		printf("ptr2ptr2 (0x%p) = 0x%p\n", &ptr2ptr2, &ptr2ptr);
		printf("press enter to Print again\n");
	} while (getchar());
}