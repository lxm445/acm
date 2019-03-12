//1008排队，不允许女生落单

64 lines (58 sloc) 1.64 KB
#include <stdio.h>

int main(void) {
	int f[1001][35] = { 0 };
	f[1][0] = 1;
	f[2][0] = 2;
	f[3][0] = 4;
	f[4][0] = 7;

	int n;
	int offset;
	for (n = 5; n <= 1000; n++) {
		for (offset = 0; offset <= 34; offset++) {
			f[n][offset] += f[n - 1][offset] + f[n - 2][offset]
					+ f[n - 4][offset];
			if (f[n][offset] >= 100000000) {
				f[n][offset + 1] += f[n][offset] / 100000000;
				f[n][offset] = f[n][offset] % 100000000;
			}
		}
	}

	while (scanf("%d", &n) != EOF) {
		for (offset = 0; f[n][offset + 1] != 0; offset++) {
		}
		printf("%d", f[n][offset]);
		for (offset--; offset >= 0; offset--) {
			printf("%08d", f[n][offset]);
		}
		printf("\n");
	}

	return 0;
}

/*
Problem Description
There are many students in PHT School. One day, the headmaster whose name is PigHeader wanted all students stand in a line. He prescribed that girl can not be in single. In other words, either no girl in the queue or more than one girl stands side by side. The case n=4 (n is the number of children) is like
FFFF, FFFM, MFFF, FFMM, MFFM, MMFF, MMMM
Here F stands for a girl and M stands for a boy. The total number of queue satisfied the headmaster’s needs is 7. Can you make a program to find the total number of queue with n children?
Input
There are multiple cases in this problem and ended by the EOF. In each case, there is only one integer n means the number of children (1<=n<=1000)
Output
For each test case, there is only one integer means the number of queue satisfied the headmaster’s needs.
Sample Input

1
2
3

Sample Output

1
2
4
*/ 
