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
	printf("문자열을 입력 : ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용 : %s \n", strlen(str), str);
	
	RemoveBsn(str);
	printf("길이 : %d, 내영 : %s \n", strlen(str), str);
	return 0;
}
