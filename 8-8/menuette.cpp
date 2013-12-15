#include<stdio.h>

char get_choice(){
	char ch;
	td: switch(ch = getchar()){
	case 'a':
	case 'b':
	case 'c':
	case 'q':break;
	default:printf("We just accept a,b,c and q.\n");goto td;
	}

	return ch;
};

int main(){
	char choice;

	choice = get_choice();
	printf("%c",choice);
	return 0;
}


