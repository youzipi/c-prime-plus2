#pragma execution_character_set("utf-8")
#include<stdio.h>
#include<iso646.h>
//#include<stdbool.h>
int main(){
	unsigned long num;
	unsigned long div;
	bool isPrime;

	printf("Please enter an integer for analysis: ");
	printf("Enter q to quit.\n");
	while(scanf("%lu",&num) == 1){
		for (div = 2, isPrime = true; (div * div) <= num; div++){
			if(num % div == 0){
				if((div * div) not_eq num)		//��ȫƽ������
					printf("%lu is divisible by %lu and %lu.\n",num,div,num/div);
				else
					printf("%lu is divisible by %lu .\n",num,div);
				isPrime = false;
			}
		}
		if(isPrime)
			printf("%lu is prime.\n",num);
		printf("Please enter an integer for analysis: ");
		printf("Enter q to quit.\n");
	}
	printf("Bye.\n");
	return 0;
}