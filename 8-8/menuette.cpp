#pragma execution_character_set("utf-8")
#include<stdio.h>
#include<ctype.h>

char get_choice(){
	char ch,c;
	//ch = getchar();
	//while((c = getchar()) != '\n'){
	c = getchar();
	while(!isspace(c)){
	//此处不是判断末尾的回车符，而是为了防止用户输入第一个字符前不小心输入了回车符，优化：，改为空白符。
	//while(ch != '\n'){	//判断前需要先把值读入变量中，结果就是函数的最终的返回值变为'\n'，即循环终止的条件
		ch = c;
		printf("ch:%c||",ch);
		printf("switch:\n");	
		goto td;
		td: switch(ch){
				case 'a':
				case 'b':
				case 'c':
				case 'q':printf("legal\n");break;
				default:printf("We just accept a,b,c and q.\n");
						while(getchar() != '\n')
							continue;
						ch = getchar();
						goto td;
						
			}//switch
		//printf("ch:%c|",ch);
		//ch = getchar();
		c = getchar();
	}//while
	printf("to main\n");
	putchar(ch);
	printf("ch:%c|\n",ch);
	return ch;
};

int main(){
	char choice;

	choice = get_choice();
	printf("choice:%c|\n",choice);
	return 0;
}


