
//1005������
#include <stdio.h>

long long int right(int, int);

int main(void) {
	long long int wrong[21] = { 0, 0, 1, 2 };
	int n;
	for (n = 4; n <= 20; n++) {
		wrong[n] = wrong[n - 1] * (n - 1) + wrong[n - 2] * (n - 1);
	}

	int C;
	scanf("%d", &C);

	int N, M;
	int step;
	for (step = 1; step <= C; step++) {
		scanf("%d%d", &N, &M);
		printf("%lld\n", right(N, M) * wrong[M]);
	}

	return 0;
}

long long int right(int N, int M) {
	long long int right = 1l;

	int step;
	for (step = N; step >= M + 1; step--) {
		right = right * step;
	}

	// ע�⣺������������ѡ������������������

	for (step = 1; step <= N - M; step++) {
		right = right / step;
	}

	return right;
}

/*
Problem Description
�����ڼ�,ʡ��HZ�ով�����һ��ʢ��ļ������,Ϊ��ʹ������еķḻһЩ,˾����ʱ�������һ������˼�Ľ�Ŀ,����"������",����Ĳ�����������:


����,��ÿλ������ü���һģһ��,�����ϴ��ĺ��ͷ�������һ��;
Ȼ��,�ø�λ����Ѱ���Լ�������.ÿ��ֻ׼��һ��,���Ҳ����������һ��.
���,�ҿ���ͷ,����Ҵ��˶����Ҫ���ڹ���°�...

����������Ҳ�������׵�����...

����һ����N���»��,������M�������Ҵ�������,�����������һ���ж����ֿ���.
Input
�������ݵĵ�һ����һ������C,��ʾ����ʵ���ĸ�����Ȼ����C�����ݣ�ÿ�а�����������N��M(1<M<=N<=20)��
Output
����ÿ������ʵ���������һ���ж����ַ�����������Ŀ��ܣ�ÿ��ʵ�������ռһ�С�
Sample Input

2
2 2
3 2

Sample Output

1
3

*/ 
