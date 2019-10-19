#include<stdio.h>
#include<math.h>
int fib[60];
int main()
{
    int x;
    fib[0]=0;
    fib[1]=1;
    for(x=2;x<60;x++)
    fib[x]=(fib[x-1]+fib[x-2])%10;

	long long int a,n,m,t,i,k,j;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
	scanf("%lld",&n);
    long long int res = 1;
   long long  int p = (long long int) log2(n);
   res= (long long int) pow(2, p);
    a=res;
	n=res-1;
		printf("%lld\n",fib[n%60]);

	}

    	return 0;
}
