#include<stdio.h>
#include<ctype.h>
//#define SPACE ' '
int main(){
	char ch;
	//ch = getchar();
	while((ch = getchar()) != '\n'){
		if(isalpha(ch))			//���ch��һ����ĸ
			putchar(ch+1);
		else
			putchar(ch);
		//ch = getchar();
	}
	putchar(ch);
	return 0;
}