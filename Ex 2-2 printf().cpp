#include<stdio.h>

/* 2022-04-10
*/

int main()
{
	int i;
	// 1���� �迭 �ʱ�ȭ
	int  score[3] = { 91  , 86 , 97  };
	char grade[3] = { 'A' , 'B', 'A' };
	
	printf("\n *** �г⺰ ��� ���� *** \n\n");
	for(i = 0; i<3; i++)
	{
		printf("%3d�г� : ���� = %d, ��� = %c\n", i+1, score[i], grade[i]);
	}
	
	getchar();
}