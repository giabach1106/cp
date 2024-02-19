/* tinh phep chia */
#include<stdio.h>
int main()
{
int a, b, c, d;
printf("Nhap vao so bi chia: ");
	scanf("%d", &a);
printf("Nhap vao so chia: ");
	scanf("%d", &b);
	c=a/b;
d=a%b;
if(d==0)
	{
		printf("%d chia cho %d la %d", a, b, c);
	}
else
	{
		printf("%d chia cho %d la %d du %d", a, b, c, d);
	}
return 0;
}
