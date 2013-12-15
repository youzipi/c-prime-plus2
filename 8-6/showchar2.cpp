#include<stdio.h>

void display(char ch,int lines,int width){
	int row,col;

	for(row = 1;row <= lines;row++){
		for(col = 1;col <= width;col++)
			putchar(ch);
		putchar(ch);
	}
};

int main(){
	char ch;
	int lines,width;
	printf("Enter a character and two integers:\n");
	while(ch = getchar() != '\n'){
		if(scanf("%d%d",&lines,&width) != 2)
			break;
		display(ch,lines,width);
		while(getchar() != '\n')
			continue;
		printf("Enter a character and two integers:\n");
		printf("Enter a newline to quit\n");
	}
	return 0;
}