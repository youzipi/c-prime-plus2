#pragma execution_character_set("utf-8")
#include<stdio.h>

int main(){
	putchar('H');
	putchar('\007');
	putchar('\nH++');	//输出最后一个字符
	putchar('\b');
	return 0;
}