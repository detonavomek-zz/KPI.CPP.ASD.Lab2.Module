#include "M1.h"
void S1(void){
	fprintf(file, "S1 start.\n");
	Vg1="Init Vg1 from S1.\n";
	fprintf(file, Vg1);
	S5();
	S6();
	Err();
	fprintf(file, "S1 finish.\n");
}
void S2(void){
	fprintf(file, "S2 start.\n");
	S6();
	S7();
	Err();
	fprintf(file, "S2 finish.\n");
}
void S3(void){
	fprintf(file, "S3 start.\n");
	S8();
	S9();
	S10();
	Err();
	fprintf(file, "S3 finish.\n");
}
void S4(void){
	fprintf(file, "S4 start.\n");
	S9();
	S10();
	Err();
	fprintf(file, "S4 finish.\n");
}