#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d%d", &a ,&b);
	c=a/b;
	d=a%b;
	if( d > 0 )
		printf("%d chia cho %d duoc %d du %d", a, b, c, d);
	else if( d == 0)
		printf("%d chia cho %d duoc %d", a, b, c);
	return 0;
}

