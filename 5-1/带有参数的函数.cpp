//#include<stdio.h>
#include<iostream>
using namespace std;

void pound(int n){
	cout<<"after:"<<n;
	while(n-- > 0)
		printf("#");
	printf("\n");
}

void main(){
	int times = 5;
	char ch = '!';
	float f = 6.0;
	cout<<"before:"<<times;
	cout<<"  "<<sizeof(times);
	pound(times);

	cout<<"before:"<<ch;
	cout<<"  "<<sizeof(ch);

	pound(ch);

	cout<<"before:"<<f;
	cout<<"  "<<sizeof(f);
	pound(f);

	cout<<"before:"<<f;
	cout<<"  "<<sizeof(f);
	pound((int)f);
}