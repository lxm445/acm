#include <stdio.h>
#include <stdlib.h>

int Max(int a,int b){
return a>=b?a:b;
}
int main (void){
	int i,T, N, start, end, count[200], temp, count_max, s, e;
	scanf("%d", &T); //输入测试样例个数T
	while(T--){
		scanf("%d", &N); //输入要移动的桌子数N
		for(i=0; i<200; i++){
			count[i]=0;
		}
		 
		while(N--){
		  	scanf("%d%d",&start,&end);
		 	if(start > end){
		  		temp = start;
		  		start = end;
		  		end = temp;
		 	}
			
				s=(start-1)/2;
				e=(end-1)/2;//把房间号转化为走廊号
			//走廊号有经过的段都加1，最终用时为数值最大的一段走廊去乘以10 
			for(i=s; i<=e; i++){
				count[i]++;
			} 
			count_max = 0;
			for(i=1; i<=199; i++){
			count_max = Max(count[i],count_max);
			}		 
		}
		printf("%d\n",count_max*10);
	}
	return 0;	
}

/*Problem Description
The famous ACM (Advanced Computer Maker) Company has rented a floor of a building whose shape is in the following figure.



The floor has 200 rooms each on the north side and south side along the corridor.
 Recently the Company made a plan to reform its system. 
 The reform includes moving a lot of tables between rooms. 
 Because the corridor is narrow and all the tables are big, only one table can 
 pass through the corridor. Some plan is needed to make the moving efficient.
 The manager figured out the following plan: Moving a table from a room to another room 
 can be done within 10 minutes. When moving a table from room i to room j, the part of the 
 corridor between the front of room i and the front of room j is used. So, during each 10 minutes,
 several moving between two rooms not sharing the same part of the corridor will be done 
 simultaneously. To make it clear the manager illustrated the possible cases and impossible cases of simultaneous moving.

For each room, at most one table will be either moved in or moved out.
 Now, the manager seeks out a method to minimize the time to move all the tables. 
 Your job is to write a program to solve the manager’s problem.

Input
The input consists of T test cases. The number of test cases ) 
(T is given in the first line of the input. 
Each test case begins with a line containing an integer N , 1<=N<=200 , 
that represents the number of tables to move. Each of the following N lines contains 
two positive integers s and t, representing that a table is to move from room number s 
to room number t (each room number appears at most once in the N lines). 
From the N+3-rd line, the remaining test cases are listed in the same manner as above.

Output
The output should contain the minimum time in minutes to complete the moving, one per line.
Sample Input

3 
4 
10 20 
30 40 
50 60 
70 80 
2 
1 3 
2 200 
3 
10 100 
20 80 
30 50 

Sample Output

10
20
30
*/ 
