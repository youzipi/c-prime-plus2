#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
	printf("biggest int: %d\n",INT_MAX);
	printf("smallest unsigned long: %lld\n",LLONG_MIN);
	printf("one byte = %d bits on this system.\n",CHAR_BIT);
	printf("largest double: %e\n",DBL_MAX);
	printf("smallest normal float: %e\n",FLT_MIN);
	return 0;
}