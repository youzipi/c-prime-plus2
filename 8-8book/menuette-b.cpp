#include<stdio.h>
#include<ctype.h>
inline  void clearline(){
		while(getchar() != '\n')
			continue;	//跳过本行剩余部分
		}


char get_first(){
	int ch;

	ch = getchar();
	while(isspace(ch))
		ch = getchar();
	//clearline;
	while(getchar() != '\n')
			continue;
	return ch;		//内联函数不适用？
};

char get_choice(){
	int ch;
	printf("Enter the letter of your choice:\n");
	printf("a. advice b. bell\n");
	printf("c. count d. quit\n");
	ch = get_first();
	while((ch < 'a' || ch > 'c') && ch != 'q'){
		printf("Please respond with a,b,c or q.\n");
		ch = get_first();
	}
	return ch;
};

int get_int(){
	int input;
	char ch;
	while(scanf("%d",&input) != 1){
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\nPlease enter an integer value, such as 25,-1\n");
	}
	return input;
}

void count(){
	int n,i;

	printf("Count how far? Enter an integer.\n");
	n = get_int();
	//scanf("%d",&n);
	for(i = 1;i <= n;i++)
		printf("%d\n",i);
	//clearline;
	while(getchar() != '\n')
			continue;
}

int main(){
	int choice;
	while((choice = get_choice()) != 'q'){
		switch(choice){
			case 'a':printf("Buy low,sell high.\n");
					break;
			case 'b':putchar('\a');//警报
					break;
			case 'c':count();
					break;
			default:printf("Program error!\n");
					break;
		}//switch
		//printf("\n");
	}//while
	return 0;
}

