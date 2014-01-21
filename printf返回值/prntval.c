
#include<stdio.h>

int main(){
	//printf()和scanf()的返回值
	int a = 20,b;
	int rv;
	char ch1,ch2;
	rv = printf("123456890 %d\n",a);
	printf("The printf () function printed %d characters.\n",rv=printf("123456890 %d\n",a));//printf()会返回打印字符的数目（含空格，换行字符）
	printf("The scanf () function scaned %d characters.\n",rv=scanf("%d%d",&a,&b));//scanf()会返回输入变量值的个数

	//转换说明符
	//char ch1,ch2;
	scanf(" %c",&ch1);//读取输入的第一个非空白字符
	scanf("%c",&ch2);//读取输入的第一个字符
	printf("%c%c",ch1,ch2);

	return 0;
	//double w = 25.36;
	//printf("%*.*f\n",15,5,w);
}