//1010猫和老鼠的javabean交易 

#include <stdio.h>

int main(void) {
	int J[1001] = { 0 };
	int F[1001] = { 0 };
	double unitJB[1001];

	int M, N;

	double JavaBeans;

	int i;
	int step;
	double fTemp;
	int iTemp;
	// 注意：不要用一个 int 类型的 temp 变量来暂存 double 类型的变量
	while (scanf("%d%d", &M, &N) != EOF && M != -1 && N != -1) {
		JavaBeans = 0.0;

		for (i = 1; i <= N; i++) {
			scanf("%d%d", &J[i], &F[i]);
			unitJB[i] = (double) J[i] / (double) F[i];
		}

		for (step = 1; step <= N - 1; step++) {
			for (i = 1; i <= N - step; i++) {
				if (unitJB[i] < unitJB[i + 1]) {
					fTemp = unitJB[i];
					unitJB[i] = unitJB[i + 1];
					unitJB[i + 1] = fTemp;
					// 注意：不要用一个 int 类型的 temp 变量来暂存 double 类型的变量

					iTemp = J[i];
					J[i] = J[i + 1];
					J[i + 1] = iTemp;

					iTemp = F[i];
					F[i] = F[i + 1];
					F[i + 1] = iTemp;
				}
			}
		}

		for (i = 1; i <= N; i++) {
			if (M >= F[i]) {
				M -= F[i];
				JavaBeans += J[i];
				// WA 的点：
				// 应该用 JavaBeans += J[i];
				// 而不是用 JavaBeans += unitJB[i] * F[i];
				// 这样会增大误差
			} else {
				JavaBeans += unitJB[i] * (double) M;
				break;
			}
		}

		printf("%.3f\n", JavaBeans);
	}

	return 0;
}

/*
Problem Description
FatMouse prepared M pounds of cat food, ready to trade with the cats guarding the warehouse containing his favorite food, JavaBean.
The warehouse has N rooms. The i-th room contains J[i] pounds of JavaBeans and requires F[i] pounds of cat food. FatMouse does not have to trade for all the JavaBeans in the room, instead, he may get J[i]* a% pounds of JavaBeans if he pays F[i]* a% pounds of cat food. Here a is a real number. Now he is assigning this homework to you: tell him the maximum amount of JavaBeans he can obtain.
Input
The input consists of multiple test cases. Each test case begins with a line containing two non-negative integers M and N. Then N lines follow, each contains two non-negative integers J[i] and F[i] respectively. The last test case is followed by two -1's. All integers are not greater than 1000.
Output
For each test case, print in a single line a real number accurate up to 3 decimal places, which is the maximum amount of JavaBeans that FatMouse can obtain.
Sample Input

5 3
7 2
4 3
5 2
20 3
25 18
24 15
15 10
-1 -1

Sample Output

13.333
31.500
*/ 
 
