#include <stdio.h>
#include <string.h>
size_t strlen(const char*s);

void RemoveBSN(char str[])
{
	int len=strlen(str);
	str[len-1] = 0;
}

int main
{
	char str[100];
	printf("���ڿ��� �Է� : ");
	fgets(str, sizeof(str), stdin);
	printf("����: %d, ���� : %s \n", strlen(str), str);
	
	RemoveBsn(str);
	printf("���� : %d, ���� : %s \n", strlen(str), str);
	return 0;
}
