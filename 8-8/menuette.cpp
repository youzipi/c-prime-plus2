#include<stdio.h>

char get_choice(){
	char ch;
	while((ch = getchar()) != '\n'){
		printf("switch:\n");
		goto td;
		td: switch(ch){
				case 'a':
				case 'b':
				case 'c':
				case 'q':break;
				default:printf("We just accept a,b,c and q.\n");
						while(getchar() != '\n')
							continue;
						ch = getchar();
						goto td;
			}
			//getchar();
	}
	putchar(ch);
	return ch;
};

int main(){
	char choice;

	choice = get_choice();
	printf("%c",choice);
	return 0;
}


