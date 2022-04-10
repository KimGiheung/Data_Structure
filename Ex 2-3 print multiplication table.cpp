#include<stdio.h>

int main()
{
	int i = 0, n;
	int multiply[9];
	
	printf("\n1~9의 정수를 입력하세요 : ");
	
	while(1)
	{
		scanf("%d", &n);
		if (n < 0 || n > 9) printf("\n 1~9의 정수를 입력하세요 : ");
		else break;
	}
	
	printf("\n");
	
	for (i = 0; i < 9; i++)
	{
		multiply[i] = n * (i+1);
		printf(" %d * %d = %d \n", n, (i+1),multiply[i]);
	}	
	
	/*scanf로 이미 버퍼가 입력모드로 된 상태이기 때문에
	//프로그램 실행 결과창을 유지하기 위해 getchar()를 2번 써서
	버퍼를 다시 입력모드로 만들어줌*/
	getchar(); getchar();
}
