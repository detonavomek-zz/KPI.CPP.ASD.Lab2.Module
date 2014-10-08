#include "MCommon.h"
#include "MErr.h"
#include "M1.h"
//#include <iostream>
//#include <stdio.h>
//using namespace std;

void main(){
	//char ch = -128;
	//printf("%d",ch);
	//cout<<ch<<endl;
	file = fopen("Result.txt", "w");
	fprintf(file, "Main start.\n");
	S1();
	S2();
	S3();
	S4();
	Err();
	fprintf(file, "Main finish.\n");
	fclose(file);
}