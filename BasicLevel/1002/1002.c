#include <stdio.h>

int SumEachNumber(int n);

int main()
{
	int n;
	scanf("%d",&n);
//	printf("%d",n%100);
	return 0;
}

int SumEachNumber(int n)
{
	int sum=0;
	int ge;
	while(n>0) {
		n/=10;
		ge=n%10;
		sum+=ge;
	}
	return sum;
}
