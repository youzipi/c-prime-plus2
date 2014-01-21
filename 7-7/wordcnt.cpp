#pragma execution_character_set("utf-8")
#include<stdio.h>
#include<ctype.h>

#define STOP '|'
#define false 0
#define true 1

int main(){
	char c;
	char prev;
	long n_chars = 0L;	//字符数
	int n_lines = 0;	//行数
	int n_words = 0;	//单词数
	int p_lines = 0;	//不完整的行数
	bool inword =false;	//c在一个单词中？
	//printf("%d %d",inword,!inword);
	//printf("Enter text to be analyzed(| to terminate):\n");
	//prev = '\n';
	while((c = getchar()) != STOP){
		n_chars++;
		if(c == '\n')
			n_lines++;
		//else if(c == !isspace(c) && !inword){
		if(!isspace(c) && !inword){
			//printf("n_words++");
			inword = true;
			n_words++;
		}
		if (isspace(c) && inword)
			inword =false;
		prev = c;
	}

	if(prev != '\n')
		p_lines++;
	printf("chracters = %ld,words = %d,lines = %d,",n_chars,n_words,n_lines);
	printf("partial lines = %d\n",p_lines);
	return 0;
}
