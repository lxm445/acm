#include <stdio.h>
#include <string.h>
int main(){
	int n, i, j;
	int temp_e, temp_s;
	int time, count ;
	int Ti_s[110], Ti_e[110] ;
	while(scanf("%d", &n) != EOF && n != 0){
		// 输入节目表，并分别将开始和结束时间存入对应数组
		for (i = 0; i<n; i++){
			scanf("%d%d", &Ti_s[i], &Ti_e[i]) ;
		}
		// 将时间表按照结束时间的先后顺序排序
		for (i=0; i<n; i++)
			for (j=i+1; j<n; j++){
				if (Ti_e[i] > Ti_e[j]){
					temp_e = Ti_e[j] ;
					Ti_e[j] = Ti_e[i] ;
					Ti_e[i] =temp_e ;
					temp_s = Ti_s[j];
					Ti_s[j] = Ti_s[i] ;
					Ti_s[i] = temp_s ;
				}
			}
		// 贪心算法主要实现部分，一步一步的向后选则
		// 下一个的开始时间必须要小于等于上个节目的结束时间
		time = 0;
		count = 0;
		for (i=0; i<n; i++){
			if (Ti_s[i] >= time){
				count++ ; // 计数器
				time = Ti_e[i] ;
			}
		}
		printf("%d\n", count) ; // 输出即可
	}
	return 0 ;
}

/*
Problem Description
作为球迷，一定想看尽量多的完整的比赛，当然，作为新时代的好青年，你一定还会看一些其它的节目， 
比如新闻联播（永远不要忘记关心国家大事）、非常6+7、超级女生，以及王小丫的《开心辞典》等等，
假设你已经知道了所有你喜欢看的电视节目的转播时间表，你会合理安排吗？（目标是能看尽量多的完整节目）
Input
输入数据包含多个测试实例，每个测试实例的第一行只有一个整数n(n<=100)，表示你喜欢看的节目的总数，
然后是n行数据，每行包括两个数据Ti_s,Ti_e (1<=i<=n)，分别表示第i个节目的开始和结束时间，
为了简化问题，每个时间都用一个正整数表示。n=0表示输入结束，不做处理。
Output
对于每个测试实例，输出能完整看到的电视节目的个数，每个测试实例的输出占一行。
Sample Input

12
1 3
3 4
0 7
3 8
15 19
15 20
10 15
8 18
6 12
5 10
4 14
2 9
0

Sample Output

5

