#include <stdio.h>

int main()
{
	int n;
	int num=0;
//	printf("请给定一个不超过1000的正整数：");
	scanf("%d",&n);
	while(n!=1) {
		if(n%2==0) {
			n/=2;
		} else {
			n=(3*n+1)/2;
		}
		num+=1;
	}
	printf("%d",num);
	return 0;
}
