
//1009����¥��
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
��һ¥�ݹ�M�����տ�ʼʱ���ڵ�һ������ÿ��ֻ�ܿ���һ���������Ҫ���ϵ�M�������ж������߷���
Input
�����������Ȱ���һ������N����ʾ����ʵ���ĸ�����Ȼ����N�����ݣ�ÿ�а���һ������M��1<=M<=40��,��ʾ¥�ݵļ�����
Output
����ÿ������ʵ�����������ͬ�߷�������
Sample Input

2
2
3

Sample Output

1
2
*/
