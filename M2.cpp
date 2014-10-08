#include "M2.h"
static int lvl=5;
void S5(void){
	fprintf(file, "S5 start.\n");
	Err();
	fprintf(file, "S5 finish.\n");
}
void S6(void){
	fprintf(file, "S6 start.\n");
	Err();
	fprintf(file, "S6 finish.\n");
}
void S7(void){
	fprintf(file, "S7 start.\n");
	if(lvl--) S2();
	Err();
	fprintf(file, "S7 finish.\n");
}