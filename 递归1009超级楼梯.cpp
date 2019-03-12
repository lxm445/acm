
//1009超级楼梯
#include <stdio.h>
    int main(){
    int c, n, i;
    long long int f[41]={0,1,1,2};
    for(i = 3; i<=40; i++)
          f[i]=f[i-1]+f[i-2];          
    scanf("%d", &c);
    for(i=1; i<=c; i++){
          scanf("%d", &n);
          printf("%lld\n",f[n]);
    } 
} 


/*Problem Description
有一楼梯共M级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第M级，共有多少种走法？
Input
输入数据首先包含一个整数N，表示测试实例的个数，然后是N行数据，每行包含一个整数M（1<=M<=40）,表示楼梯的级数。
Output
对于每个测试实例，请输出不同走法的数量
Sample Input

2
2
3

Sample Output

1
2
*/
