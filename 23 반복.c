#include <stdio.h>

int  main()
{
	int array[10][10] = { 0, };//���� �ֱ����ؼ� ���� �迭
	int i; //�ݺ����� �ε��� ǥ��
	int x = 0; //��
	int y = -1;//��
	int t = 1;//����ǥ���� ���� ���
	int cnt = 25;//1�� ���ҵǴ� ���� �����Ѵ�.
	int max=5;
	int jmax;

	jmax = max;
	while (jmax>=0)
	{
		for (i = 0; i < jmax; i++) //�� ǥ��
		{
			y = y + t;
			array[x][y] = cnt;
			cnt--;
		}
		jmax--;
		for (i = 0; i < jmax; i++)// �� ǥ��
		{
			x = x + t;
			array[x][y] = cnt;
			cnt--;
		}

		t = t * -1;
	}
	for (x = 0; x < max; x++)// ��� �κ�
	{
		for (y = 0; y < max; y++)
		{
			printf("%4d", array[y][x]);
		}
		printf("\n");
	}

	return 0;
}
