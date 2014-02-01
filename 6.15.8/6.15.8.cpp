#pragma execution_character_set("utf-8")
#include<stdio.h>

int main(){
	char ch = 'F';
	int n = 0;
	for(n = 0;n <= 5;n++){
		for (int i = 0; i <= n;i++){
			printf("%c",ch-i);
		}
		printf("\n");
	}


	return 0;
}