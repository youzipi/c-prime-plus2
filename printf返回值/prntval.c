#include<stdio.h>

int main(){


	//printf()��scanf()�ķ���ֵ
	int a = 20,b;
	int rv;
	char ch1,ch2;
	rv = printf("123456890 %d\n",a);
	printf("The printf () function printed %d characters.\n",rv=printf("123456890 %d\n",a));//printf()�᷵�ش�ӡ�ַ�����Ŀ�����ո񣬻����ַ���
	printf("The scanf () function scaned %d characters.\n",rv=scanf("%d%d",&a,&b));//scanf()�᷵���������ֵ�ĸ���

	//ת��˵����
	//char ch1,ch2;
	scanf(" %c",&ch1);//��ȡ����ĵ�һ���ǿհ��ַ�
	scanf("%c",&ch2);//��ȡ����ĵ�һ���ַ�
	printf("%c%c",ch1,ch2);

	return 0;
	//double w = 25.36;
	//printf("%*.*f\n",15,5,w);

}