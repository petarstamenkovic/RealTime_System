#include "helper.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main (int argc,char** argv){
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int res = pomnozi(a,b);
	printf("Rezultat mnozenja je: %d\n",res);
}