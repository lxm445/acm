#include <stdio.h>

int main(void) {
	int Ti_s[101] = { 0 };
	int Ti_e[101] = { 0 };

	int cnt;

	int n;
	int i;
	int j;
	int step;
	int temp;
	int rc;

	while ((scanf("%d", &n) != EOF) && n) {
		for (i = 0; i <= n - 1; i++) {
			scanf("%d%d", &Ti_s[i], &Ti_e[i]);
		}

		for (step = 1; step <= n - 1; step++) {
			for (i = 0; i <= n - step - 1; i++) {
				if (Ti_e[i] > Ti_e[i + 1]) {
					temp = Ti_s[i];
					Ti_s[i] = Ti_s[i + 1];
					Ti_s[i + 1] = temp;

					temp = Ti_e[i];
					Ti_e[i] = Ti_e[i + 1];
					Ti_e[i + 1] = temp;
				}
			}
		}

		for (rc = 0, cnt = 1; rc <= n - 1;) {
			for (j = rc + 1; j <= n - 1; j++) {
				if (Ti_s[j] >= Ti_e[rc]) {
					rc = j;
					cnt++;
					break;
				}
			}
			if (j == n) {
				break;
			}
		}

		printf("%d\n", cnt);
	}

	return 0;
}
