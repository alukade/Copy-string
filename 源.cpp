#include<stdio.h>
#include<string.h>

int main()
{
	char str1[] = "Original String";
	char str2[] = "New String";
	char str3[100];

	strcpy_s(str1 ,str2);//ԭ������ǰ���µ��ں��
	strcpy_s(str3, "Copy Successful");//strcpy��safe��

	printf("str1:%s\nstr2:%s\nstr3:%s\n", str1, str2, str3);

	return 0;
}