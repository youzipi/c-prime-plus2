#include<stdio.h>
#include<ctype.h>

char get_choice(){
	char ch,c;
	//ch = getchar();
	//while((c = getchar()) != '\n'){
	c = getchar();
	while(!isspace(c)){
	//�˴������ж�ĩβ�Ļس���������Ϊ�˷�ֹ�û������һ���ַ�ǰ��С�������˻س������Ż�������Ϊ�հ׷���
	//while(ch != '\n'){	//�ж�ǰ��Ҫ�Ȱ�ֵ��������У�������Ǻ��������յķ���ֵ��Ϊ'\n'����ѭ����ֹ������
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


