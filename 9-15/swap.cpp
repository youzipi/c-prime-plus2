#include<stdio.h>
void interchange(int * u,int * v){	//u,v 为指针，*u，*v为int型变量
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
}

int main(){
	int x = 7,
		y = 3;
	printf("Before: x = %d y = %d.\n",x,y);
	interchange(&x,&y);
	printf("After:	x = %d y = %d.\n",x,y);
	return 0;
}
