#include<stdio.h>

int main(){
	int input;
	char ch;
	while(scanf("%d",&input) != 1){
		while((ch = getchar()) != '\n'){
			printf("%d\n",input);		//���롮j����û�ж���input�У����ڻ���������ch��ȡ��
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