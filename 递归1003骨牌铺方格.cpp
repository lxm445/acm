
//1003骨牌铺方格 
#include <stdio.h>
int main(){
    long long int f[51]={0,1,2};
    int n, i;
    for(i = 3; i<=50; i++)
          f[i]=f[i-1]+f[i-2];
    while(scanf("%d", &n) != EOF)
          printf("%lld\n",f[n]);   
}


/*Problem Description
在2×n的一个长方形方格中,用一个1× 2的骨牌铺满方格,输入n ,输出铺放方案的总数.
例如n=3时,为2× 3方格，骨牌的铺放方案有三种,如下图：
Input
输入数据由多行组成，每行包含一个整数n,表示该测试实例的长方形方格的规格是2×n (0<n<=50)。
Output
对于每个测试实例，请输出铺放方案的总数，每个实例的输出占一行。
Sample Input

1
3
2

Sample Output

1
3
2
*/
