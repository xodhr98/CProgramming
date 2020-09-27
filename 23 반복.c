#include <stdio.h>

int  main()
{
	int array[10][10] = { 0, };//값을 넣기위해서 만든 배열
	int i; //반복문의 인덱스 표현
	int x = 0; //행
	int y = -1;//열
	int t = 1;//증감표현을 위해 사용
	int cnt = 25;//1씩 감소되는 수를 저장한다.
	int max=5;
	int jmax;

	jmax = max;
	while (jmax>=0)
	{
		for (i = 0; i < jmax; i++) //행 표현
		{
			y = y + t;
			array[x][y] = cnt;
			cnt--;
		}
		jmax--;
		for (i = 0; i < jmax; i++)// 열 표현
		{
			x = x + t;
			array[x][y] = cnt;
			cnt--;
		}

		t = t * -1;
	}
	for (x = 0; x < max; x++)// 출력 부분
	{
		for (y = 0; y < max; y++)
		{
			printf("%4d", array[y][x]);
		}
		printf("\n");
	}

	return 0;
}
