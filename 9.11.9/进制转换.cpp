#include<stdio.h>

void to_base_n(int num,int n){
	int r;
	r = num%n;
	if(num >= n)
		to_base_n(num/n,n);
	putchar('0' + r);
	return;
}

int main(){
	int number,base;

	printf("Enter a integer and a base:\n");
	while(scanf("%d%d",&number,&base) == 2){
		printf("In %d th: ",base);
		to_base_n(number,base);
		printf("\nEnter a integer and a base:\n");
	}
	printf("Done.\n");
	return 0;
}

