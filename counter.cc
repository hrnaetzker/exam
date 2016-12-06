// Brock Ferrell
// CS2401
// November 23, 2015
// Project7

#include "counter.h"
#include <stdio.h>
#include <string.h>

void Counter::countLine(char* pName){
	int num = 1;
	for(int i=0; i < strlen(pName); i++){
		if(pName[i] == '\n'){
			num++;
		}
	}
	cout << num << " Lines" << endl;
}

void Counter::countChar(char* pName){
	int num = 0;
	for(int i=0; i < strlen(pName); i++){
		cout << pName[i];
		num++;
	}
	cout << num << " Chars" << endl;
}

