#include <stdio.h>

int main(void)
{
	int score;
	char grade;
	
	printf("������ �Է��ϼ���: ");
	scanf("%d", &score);
	if(score >= 90)
	{
		grade = 'A';
		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
	} 
	else if(score >=80 && score < 90)
	{
		grade = 'B';
		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
	}
	else if(score >=70 && score < 80)
	{
		grade = 'C';
		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
	}
	else
	{
		grade = 'F';
		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
	}
	printf("�۾� ���� \n");
	return 0;
}
