#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
 
int main()
{
	int t,n,count[410],i,start,end,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		memset(count,0,sizeof(count));
		while(n--)
		{
			scanf("%d%d",&start,&end);
			if(start>end)//可能出发位置比目的地房间大。 
			{            //无论大小，我们都可以看做从小的房间移动到大的房间 
				k=start;
				start=end;
				end=k;
			}
			if(start%2==0)//考虑实际情况，出发房间为偶数是减一，可参照题中给出的图一 
			   start-=1;
			if(end%2==1)//目的地房间为奇数时加一 
			   end+=1;
			for(i=start;i<=end;++i)
			   count[i]+=10;
		}
		printf("%d\n",*max_element(count,count+400));//STL中寻找数列最大值函数 
	}
	return 0;
} 

