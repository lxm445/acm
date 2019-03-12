
//1001蜜蜂房 
#include <stdio.h>
    int main(){
    int c, m, n, i;
    long long int f[51]={0,1,1,2};
    for(i = 3; i<=50; i++)
          f[i]=f[i-1]+f[i-2];          
    scanf("%d", &c);
    for(i=1; i<=c; i++){
          scanf("%d%d", &m,&n);
          printf("%lld\n",f[n-m+1]);
    } 
} 


/*Problem Description
有一只经过训练的蜜蜂只能爬向右侧相邻的蜂房，不能反向爬行。请编程计算蜜蜂从蜂房a爬到蜂房b的可能路线数。
其中，蜂房的结构如下所示。

Input
输入数据的第一行是一个整数N,表示测试实例的个数，然后是N 行数据，每行包含两个整数a和b(0<a<b<50)。
Output
对于每个测试实例，请输出蜜蜂从蜂房a爬到蜂房b的可能路线数，每个实例的输出占一行。
Sample Input

2
1 2
3 6

Sample Output

1
3
 */
