/*
 * Name: Shinta Kusuma Wardani
 * NPM: 1604955044
 * Class: SI Ekstensi 2016
 * Comment: Whats up?
 */

#define LOOP 4

#include <stdio.h>

void main() {
	int input = 5;
	int ii,jj=0;
	for ( ii=0;ii<LOOP;ii++){ 
		jj= jj+input;
	}
	printf ("%d times %d equal %d\n",input,LOOP,jj);

}
