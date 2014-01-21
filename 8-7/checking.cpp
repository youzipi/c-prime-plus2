#pragma execution_character_set("utf-8")
#include<stdio.h>

int main(){
	int input;
	char ch;
	while(scanf("%d",&input) != 1){
		while((ch = getchar()) != '\n'){
			printf("%d\n",input);		//输入‘j’，没有读入input中，留在缓冲区，被ch获取。
			putchar(ch);
			printf(" is not an integer.\n");
			break;
		}		
		//printf()
	}
	putchar(ch);
	printf("%d\n",input);
	return 0;
}